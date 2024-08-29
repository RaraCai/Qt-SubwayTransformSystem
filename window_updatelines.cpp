//2252429蔡宇轩
#include "window_updatelines.h"
#include "ui_window_updatelines.h"

#include <QPushButton>
#include "myGUIstyle.h"


window_updateLines::window_updateLines(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::window_updateLines)
{
    ui->setupUi(this);
    //成员
    this->mybox=new myMsgbox;
    this->scene=new QGraphicsScene;
    this->mainw=new subwayGraph;
    //修改确认和取消键的样式
    QPushButton *okButton=ui->buttonBox->button(QDialogButtonBox::Ok);
    QPushButton *cancelButton=ui->buttonBox->button(QDialogButtonBox::Cancel);
    okButton->setText("OK");
    cancelButton->setText("Cancel");
    //隐藏标题栏
    this->setWindowTitle("updateLines");
    this->setWindowFlags(Qt::FramelessWindowHint);//无边框置顶
    this->setAttribute(Qt::WA_TranslucentBackground);//背景透明

    //初始化面板内容
    initinfo();
}
//子窗口接受父窗口数据
void window_updateLines::getdata(subwayGraph* graphdata){
    this->mainw=graphdata;
    this->initinfo();
}

//初始化面板内容
void window_updateLines::initinfo(){
    QList<QString>linelist=mainw->getAllLinesNameList();
    QComboBox* line=ui->linename_cbox;
    if(linelist.isEmpty()==false){
        for(int i=0;i<linelist.size();++i){
            line->addItem(linelist[i]);
        }
    }
}
window_updateLines::~window_updateLines()
{
    delete ui;
}

//选择线路颜色dialog
void window_updateLines::on_linecolor_Button_clicked()
{
    QColor selected_color=mybox->showMycolorDialog();
    //展示到旁边的颜色框
    this->scene->clear();
    ui->linecolor_showbox->setScene(this->scene);
    this->scene->setBackgroundBrush(QBrush(selected_color));

    ui->linecolor_showbox->show();
}

//展示输入文件示例
void window_updateLines::on_example_button_clicked()
{
    myMsgbox* mybox=new myMsgbox;
    mybox->showMybubble(example_boxStyle);
}

//添加线路
void window_updateLines::on_buttonBox_2_clicked(QAbstractButton *button)
{
    if(ui->buttonBox_2->standardButton(button)==QDialogButtonBox::Ok){
        //修改graph数据
        //新增线路
        QString linename=ui->linename_lineEdit->text();
        if(!linename.isEmpty() && !ui->stations_ptEdit->toPlainText().isEmpty()){
            mainw->addLine(linename,ui->linecolor_showbox->scene()->backgroundBrush().color());
            int linehash=mainw->getOneLineHash(linename);
            //处理
            int sum=ui->sum_spinBox->value();
            //分割每行数据
            QVector<QString>rawtxt=ui->stations_ptEdit->toPlainText().split('\n');
            int index1,index2;
            for(int i=0;i<sum;i++){
                QStringList sdata=rawtxt[i].split('\t');
                station s;
                s.id=sdata[0].toInt();
                s.name=sdata[1].trimmed();
                s.longi=sdata[2].toDouble();
                s.lati=sdata[3].toDouble();
                s.lines.insert(linehash);

                //图结构加入站点
                mainw->addStation(s);

                index2=mainw->getOneStationHash(s.name);
                //增加连线
                if(i){
                    mainw->addConnection(index1,index2,linehash);
                }
                index1=index2;
            }
            //提示消息
            mybox->showMymsgbox(save_boxStyle);
            //设置状态标志
            this->station_buttonstate=false;
            this->line_buttonstate=true;

        }
        else{
            mybox->showMymsgbox(noinfo_boxStyle);
            this->station_buttonstate=false;
            this->line_buttonstate=false;
        }
    }
    else if(ui->buttonBox_2->standardButton(button)==QDialogButtonBox::Cancel){
        mybox->showMymsgbox(nosave_boxStyle);
        this->station_buttonstate=false;
        this->line_buttonstate=false;
    }
}

//添加站点
void window_updateLines::on_buttonBox_clicked(QAbstractButton *button)
{
    if(ui->buttonBox->standardButton(button)==QDialogButtonBox::Ok){
        //修改graph数据
        QVector<QString>neighs;
        station s=this->getStationInfo(neighs);
        if(!s.name.isEmpty() && !ui->neighbour->text().isEmpty()){
            //新站点加入图结构
            bool new1=mainw->addStation(s);

            //加入属于的线路
            int s1=mainw->getOneStationHash(s.name);
            int sline=mainw->getOneLineHash(ui->linename_cbox->currentText());
            mainw->lines[sline].stationSet.insert(s1);

            //创建和邻居的关系
            bool new2=true;
            for(auto&neigh:neighs){
                int s2=mainw->getOneStationHash(neigh);
                if(mainw->addConnection(s1,s2,sline)==false)
                    new2=false;
            }
            //提示消息
            if(!new1&&!new2)
                mybox->showMymsgbox(repeat_boxStyle);
            else
                mybox->showMymsgbox(save_boxStyle);
            //设置状态
            this->station_buttonstate=true;
            this->line_buttonstate=false;
        }
        else{
            mybox->showMymsgbox(noinfo_boxStyle);
            this->station_buttonstate=false;
            this->line_buttonstate=false;
        }
    }
    else if(ui->buttonBox->standardButton(button)==QDialogButtonBox::Cancel){
        mybox->showMymsgbox(nosave_boxStyle);
        this->station_buttonstate=false;
        this->line_buttonstate=false;
    }
}

//依据所选线路展示相应站点列表
void window_updateLines::on_linename_cbox_currentTextChanged(const QString &arg1)
{
    myMultiCheckbox* neighs=ui->neighbour;
    neighs->clear();
    QList<QString>data=mainw->getOneLineStationsList(mainw->getOneLineHash(arg1));
    neighs->setValues(data);
}

//获取用户所填的站点信息并返回
station window_updateLines::getStationInfo(QVector<QString>&neigh_s){
    station s;
    s.name=ui->stationname_lineEdit->text();
    s.longi=ui->stationLon_lineEdit->value();
    s.lati=ui->stationlat_lineEdit->value();
    int sline=mainw->getOneLineHash(ui->linename_cbox->currentText());
    s.lines.insert(sline);
    s.id=mainw->getOneLineStationsList(sline).size()+1;

    QString neigh_str=ui->neighbour->text();
    neigh_s=neigh_str.split(';');
    return s;
}


