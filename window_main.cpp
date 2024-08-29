//2252429蔡宇轩
#include "window_main.h"
#include "ui_window_main.h"


#include <QPainter>
#include <QStyleOption>
#include <QGraphicsItem>
#include <QMessageBox>
#include <QTimer>
#include <QToolTip>

SubwayTransfer::SubwayTransfer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SubwayTransfer)
{
    ui->setupUi(this);
    //隐藏标题栏
    setWindowFlags(Qt::FramelessWindowHint);//无边框置顶
    this->setStyleSheet("#Widget{background-color: rgb(255,255,255);}");

    //初始化各成员    
    this->profile=new window_intro(this);
    profile->show();
    this->updatelines=new window_updateLines(); //子窗口，设置父窗口为this
    updatelines->close();

    this->graph =new subwayGraph;
    this->scene=new QGraphicsScene;
    this->scene->setSceneRect(330,70,4000,3000);
    this->mybox=new myMsgbox;
    this->zoom=new zoomIO;

    //加载地铁数据
    if(graph->readin(":/data/linedata.txt")==false){
        QMessageBox notice;
        notice.setWindowTitle(tr("Error"));
        notice.setIcon(QMessageBox::Warning);
        notice.setText("读取地铁线路数据失败！");
        notice.addButton(tr("确定"), QMessageBox::AcceptRole);
        if (notice.exec() == QMessageBox::Accepted)
        {
            notice.close();
        }
    }

    // 设置QToolTip样式
    QToolTip::setFont(QFont("华文中宋",8));

    //更新左侧fromto面板
    this->update_sidebar();

    //完整地图
    //获取绘图信息
    QList<int>stationlist;
    QList<Edge>edgelist;
    graph->getGraph(stationlist,edgelist);
    //绘图
    this->renderMap(stationlist,edgelist);
}

void SubwayTransfer::paintEvent(QPaintEvent *p){
    //绘制样式
    QStyleOption opt;
    opt.initFrom(this);
    QPainter p1(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p1, this);//绘制样式

    QBitmap bmp(this->size());
    bmp.fill();
    QPainter painter(&bmp);
    painter.setPen(Qt::NoPen);
    painter.setBrush(Qt::black);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.drawRoundedRect(bmp.rect(), 20, 20);
    setMask(bmp);
}
SubwayTransfer::~SubwayTransfer()
{
    delete ui;
}


//退出应用程序
void SubwayTransfer::on_exitButton_clicked()
{
    this->close();
}

//初始化侧面面板
void SubwayTransfer::update_sidebar(){

    //加载线路选择框
    QList<QString>linelist=graph->getAllLinesNameList();
    QComboBox* startline=ui->startLine_cbox;
    QComboBox* endline=ui->endLine_cbox;
    QComboBox* search=ui->lines_cbox;

    startline->clear();
    endline->clear();
    search->clear();

    for(int i=0;i<linelist.size();i++){
        //现有线路导入侧面combox
        startline->addItem(linelist[i]);
        endline->addItem(linelist[i]);
        //现有线路导入顶部搜索栏
        search->addItem(linelist[i]);
    }

    update_startStations(startline->currentText());
    update_endStations(endline->currentText());
}
//更新起点线路的station列表
void SubwayTransfer::update_startStations(QString start_linename){
    //qDebug()<<start_linename;
    QComboBox* startStations=ui->startStation_cbox;
    startStations->clear();
    QList<QString>startStationList=graph->getOneLineStationsList(graph->getOneLineHash(start_linename));
    //qDebug()<<startStationList;
    for(int i=0;i<startStationList.size();i++){
        //起始线路全部站点导入cbox
        startStations->addItem(startStationList[i]);
    }
    return;
}
//更新终点线路的station列表
void SubwayTransfer::update_endStations(QString end_linename){
    QComboBox* endStations=ui->endStation_cbox;
    endStations->clear();
    QList<QString>endStationList=graph->getOneLineStationsList(graph->getOneLineHash(end_linename));
    for(int i=0;i<endStationList.size();i++){
        //终点线路全部站点导入cbox
        endStations->addItem(endStationList[i]);
    }
    return;
}


//绘图-画各个站点的圆圈
void SubwayTransfer::renderStations(QList<int>stationList){
    for(auto&s:stationList){
        //获取该station绘图所需的前端信息---------------------------------------------
        QString s_name=graph->getOneStationName(s);
        QList<int> s_lines=graph->getStationLines(s);
        //判断本站是否是换乘站，决定颜色
        QColor s_color=QColor("black");
        if(s_lines.size()==1){//非换乘站转换颜色
            s_color=graph->getLineColor(s_lines[0]);
        }
        //将经纬度坐标转换为绘图坐标
        QPointF s_pos=TransferPos(graph->getStationPos(s));

        //数据项
        QString s_tooltip="当前站： "+s_name+"\n所属线路： ";
        for(int i=0;i<s_lines.size();i++){
            s_tooltip+=graph->getOneLineName(s_lines[i])+"  ";
        }
        //qDebug()<<s_pos;
        //-------------------------------------------------------------------------
        //圆形图标
        QGraphicsEllipseItem* s_item=new QGraphicsEllipseItem;
        if(s_lines.size()<=1)
            s_item->setRect(-5,-5,10,10);
        else
            s_item->setRect(-6,-6,12,12);
        s_item->setPos(s_pos);
        s_item->setPen(QPen(s_color,2));//外围边框
        s_item->setCursor(Qt::PointingHandCursor);
        s_item->setToolTip(s_tooltip);
        s_item->setBrush(QColor("white"));//内部实心白色圆形
        this->scene->addItem(s_item);

        //标识性文字
        QGraphicsTextItem* s_text=new QGraphicsTextItem;
        s_text->setPlainText(s_name);
        s_text->setFont(QFont("华文中宋",8,false));
        s_text->setPos(s_pos.x()-10,s_pos.y());

        //render
        this->scene->addItem(s_text);
    }
}
//绘图-各条线路的连线
void SubwayTransfer::renderLines(QList<Edge>lineList){
    for(auto&e:lineList){
        //获取前端信息
        int s1=e.first,s2=e.second;

        QList<int>lines=graph->getSharedLines(s1,s2);
        QColor l_color=graph->getLineColor(lines[0]);
        if(lines.size()>1){//共用线路的颜色用黑色代替
            l_color=QColor("black");
        }
        QString l_tooltip=graph->getOneStationName(s1)+'-'+graph->getOneStationName(s2)+"\n路线:  ";
        for(int i=0;i<lines.size();i++){
            l_tooltip+=graph->getOneLineName(lines[i])+"  ";
        }
        //获取两个站点在屏幕上的xy坐标
        QPointF pos1=TransferPos(graph->getStationPos(s1));
        QPointF pos2=TransferPos(graph->getStationPos(s2));

        //绘图
        QGraphicsLineItem* l_item=new QGraphicsLineItem;
        l_item->setPen(QPen(l_color,7));
        l_item->setCursor(Qt::PointingHandCursor);
        l_item->setToolTip(l_tooltip);
        l_item->setPos(pos1);
        l_item->setLine(0,0,pos2.x()-pos1.x(),pos2.y()-pos1.y());
        this->scene->addItem(l_item);
    }
}

//绘图-画完整的地铁线路图，包括背景图、圆圈和连线
void SubwayTransfer::renderMap(QList<int>& stationsList,QList<Edge>& edgesList){
    this->scene->clear();
    //加载背景图
    QPixmap pixmap(":/icon/icon/view.png");
    //确定缩放宽高比
    QPixmap scaled_pixmap=pixmap.scaled(4600,3300,Qt::IgnoreAspectRatio);
    QGraphicsPixmapItem *scaled_bgpaper=new QGraphicsPixmapItem(scaled_pixmap);
    this->scene->addItem(scaled_bgpaper);
    //先画连线
    this->renderLines(edgesList);
    //后画圆圈
    this->renderStations(stationsList);
    //设置滚动视图
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setDragMode(QGraphicsView::ScrollHandDrag);

}

//绘图-画sidebar上完整线路的信息卡片
void SubwayTransfer::renderInfo(QList<int>&stationlist,QList<Edge>&edgelist){
    //依据站点数量动态生成画布高度
    int sum=stationlist.size();
    QGraphicsView* info=ui->infobar;
    QGraphicsScene* infoscene=new QGraphicsScene();
    infoscene->setSceneRect(20,370,info->frameWidth(),sum*35+20);

    //先绘制连线
    for(int i=0;i<edgelist.size();++i){
        Edge e=edgelist[i];
        int s1=e.first,s2=e.second;
        QList<int> lines=graph->getSharedLines(s1,s2);
        QColor l_color=graph->getLineColor(lines[0]);
        if(lines.size()>1){//共用线路的颜色用黑色代替
            l_color=QColor("black");
        }
        //绘图坐标
        QPointF pos1=QPointF(-80,400+i*35);
        QPointF pos2=QPointF(-80,435+i*35);

        QGraphicsLineItem* l_item=new QGraphicsLineItem;
        l_item->setPen(QPen(l_color,7));
        l_item->setPos(pos1);
        l_item->setLine(0,0,pos2.x()-pos1.x(),pos2.y()-pos1.y());
        infoscene->addItem(l_item);
    }

    //后绘制站点
    for(int i=0;i<sum;i++){
        int s=stationlist[i];
        //判断本站是否是换乘站，决定颜色
        QList<int> s_lines=graph->getStationLines(s);
        QColor s_color=QColor("grey");
        if(s_lines.size()==1){//非换乘站转换颜色
            s_color=graph->getLineColor(s_lines[0]);
        }
        //绘图坐标
        QGraphicsEllipseItem* s_item=new QGraphicsEllipseItem();
        if(i==0||i==sum-1)
            s_item->setRect(-7,-7,14,14);
        else
            s_item->setRect(-5,-5,10,10);
        s_item->setPos(QPointF(-80,400+i*35));
        s_item->setPen(QPen(s_color,2));
        s_item->setBrush(QColor("white"));
        infoscene->addItem(s_item);//小圆点

        QGraphicsTextItem* s_text=new QGraphicsTextItem();
        s_text->setPlainText(graph->getOneStationName(s));
        if(i==0||i==sum-1)
            s_text->setFont(QFont("华文中宋",14,3,false));
        else
            s_text->setFont(QFont("华文中宋",10,false));
        s_text->setPos(-70,385+i*35);
        infoscene->addItem(s_text);//站点名称文字
    }

    info->setRenderHint(QPainter::Antialiasing);
    info->setScene(infoscene);
    info->setDragMode(QGraphicsView::ScrollHandDrag);
}

//经纬度坐标转换为屏幕坐标
QPointF SubwayTransfer::TransferPos(QPointF pos){
    //pos坐标是经纬度坐标，返回在4000*3000的屏幕上经转换的xy坐标
    QPointF minPos=graph->getMinPos(),maxPos=graph->getMaxPos();
    double x=350+(pos.x()-minPos.x())/(maxPos.x()-minPos.x())*4000;
    double y=90+(maxPos.y()-pos.y())/(maxPos.y()-minPos.y())*3000;
    return QPointF(x,y);
}


void SubwayTransfer::on_startLine_cbox_currentTextChanged(const QString &arg1)
{
    if(!ui->startLine_cbox->currentText().isEmpty())
        update_startStations(arg1);
}
void SubwayTransfer::on_endLine_cbox_currentTextChanged(const QString &arg1)
{
    if(!ui->endLine_cbox->currentText().isEmpty())
        update_endStations(arg1);
}

//按下确定后，查询换乘策略
void SubwayTransfer::on_pushButton_clicked()
{
    //推荐线路
    QList<Edge>edgelist;
    QList<int>stationlist;
    //获取起点和终点的状态
    int s1=graph->getOneStationHash(ui->startStation_cbox->currentText());
    int s2=graph->getOneStationHash(ui->endStation_cbox->currentText());
    //获取换乘策略radio的状态
    QRadioButton* minTime=ui->fastest_radio;
    QRadioButton* minTrans=ui->trans_radio;
    if(minTime->isChecked()){
        if(graph->queryTransfer_minTime(s1,s2,stationlist,edgelist)){
            //地图显示
            renderMap(stationlist,edgelist);
            //线路卡片显示
            renderInfo(stationlist,edgelist);
        }
        else{
            mybox->showMymsgbox(noplan_boxStyle);
        }
    }
    else if(minTrans->isChecked()){
        if(graph->queryTransfer_minTrans(s1,s2,stationlist,edgelist)){
            //地图显示
            renderMap(stationlist,edgelist);
            //线路卡片显示
            renderInfo(stationlist,edgelist);
        }
        else{
            mybox->showMymsgbox(noplan_boxStyle);
        }
    }
    else{//两种都没有选择，弹出提示
        mybox->showMymsgbox(notchosen_boxStyle);
    }
}

void SubwayTransfer::on_updatelinesButton_clicked()
{
    //父窗口向子窗口传递graph数据
    QObject::connect(this,SIGNAL(senddata(subwayGraph*)),updatelines,SLOT(getdata(subwayGraph*)));
    emit senddata(this->graph);

    //打开线路管理更新界面
    if(this->updatelines->exec()==QDialog::Accepted){
        this->update_sidebar();
    }
}


void SubwayTransfer::on_mapButton_clicked()
{
    //绘制完整地图
    QList<int>stationlist;
    QList<Edge>edgelist;
    graph->getGraph(stationlist,edgelist);
    renderMap(stationlist,edgelist);
}

void SubwayTransfer::zoomin(){
    this->zoom->zoomin(ui->graphicsView);
}

void SubwayTransfer::zoomout(){
    this->zoom->zoomout(ui->graphicsView);
}

void SubwayTransfer::on_zoomin_button_clicked()
{
    this->zoomin();
}

void SubwayTransfer::on_zoomout_button_clicked()
{
    this->zoomout();
}
//单条线路展示
void SubwayTransfer::on_singleButton_clicked()
{
    QString linename=ui->lines_cbox->currentText();
    if(!linename.isEmpty()){
        int linehash=graph->getOneLineHash(linename);
        //获得该线路所有站点
        QList<int> stationlist;
        for(auto&s:graph->getOneLineStationsList(linehash)){
            stationlist.push_back(graph->getOneStationHash(s));
        }
        //获得该线路所有边
        QList<Edge> edgelist=graph->lines[linehash].getThisLineEdgeslist();

        //绘图
        this->renderMap(stationlist,edgelist);
    }

}
//打开profile界面
void SubwayTransfer::on_profileButton_clicked()
{
    profile->show();
}

