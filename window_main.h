//2252429蔡宇轩
#ifndef SUBWAYTRANSFER_H
#define SUBWAYTRANSFER_H

#include <QWidget>
#include <QGraphicsScene>
#include "window_updatelines.h"
#include "window_intro.h"
#include "zoomio.h"
#include <QBrush>

//声明子窗口
class window_updateLines;

QT_BEGIN_NAMESPACE
namespace Ui {
class SubwayTransfer;
}
QT_END_NAMESPACE

class SubwayTransfer : public QWidget
{
    Q_OBJECT
public:
    subwayGraph* graph;                 //后端管理图结构
    window_updateLines* updatelines;    //子页面-线路更新管理
    window_intro* profile;              //子页面-app信息


protected:
    QGraphicsScene *scene;              //主页面-展示地铁线路
    myMsgbox* mybox=new myMsgbox;       //管理自定义样式的消息弹窗
    zoomIO* zoom;                       //控制界面缩放

public:
    explicit SubwayTransfer(QWidget *parent = 0);
    ~SubwayTransfer();
protected:
    void paintEvent(QPaintEvent *p);

    void renderStations(QList<int>stationList);//仅绘制地铁站圆圈
    void renderLines(QList<Edge>lineList);//仅绘制连线
    void zoomin();
    void zoomout();
    void renderInfo(QList<int>&stationlist,QList<Edge>&edgelist);//绘制sidebar上的路线信息卡片

public:
    void renderMap(QList<int>& stationsList,QList<Edge>& edgesList);//绘制完整线路图
    void update_sidebar();


private slots:
    void on_exitButton_clicked();
    void update_startStations(QString start_linename);
    void update_endStations(QString end_linename);
    void on_startLine_cbox_currentTextChanged(const QString &arg1);
    void on_endLine_cbox_currentTextChanged(const QString &arg1);
    void on_pushButton_clicked();
    void on_updatelinesButton_clicked();
    void on_mapButton_clicked();
    void on_zoomin_button_clicked();
    void on_zoomout_button_clicked();
    void on_singleButton_clicked();
    void on_profileButton_clicked();

private:
    Ui::SubwayTransfer *ui;
    QPointF TransferPos(QPointF pos);
protected:
    //未选择换乘策略-msgbox样式
    QString notchosen_boxStyle="<html>"
                                 "<head>"
                                 "<style type=\"text/css\">"
                                 "p.first {font-size: 8pt; color: black; font-family: '微软雅黑', sans-serif;font-weight:semi-bold;}"
                                 "p.second { font-size: 10pt; color: black; font-family: '微软雅黑', sans-serif;font-weight:bold;} "
                                 "p.third { font-size: 8pt; color: grey; font-family: '微软雅黑', sans-serif;font-weight:semi-bold;}"
                                 "</style>"
                                 "</head>"
                                 "<body>"
                                 "<p class=\"first\">注意！</p>"
                                 "<p class=\"second\">用户未选择换乘策略</p>"
                                 "<p class=\"third\">User didn't choose any strategy</p>"
                                 "</body>"
                                 "</html>";
    //无法返回换乘策略-msgbox样式
    QString noplan_boxStyle="<html>"
                              "<head>"
                              "<style type=\"text/css\">"
                              "p.first {font-size: 8pt; color: black; font-family: '微软雅黑', sans-serif;font-weight:semi-bold;}"
                              "p.second { font-size: 10pt; color: black; font-family: '微软雅黑', sans-serif;font-weight:bold;} "
                              "p.third { font-size: 8pt; color: grey; font-family: '微软雅黑', sans-serif;font-weight:semi-bold;}"
                              "</style>"
                              "</head>"
                              "<body>"
                              "<p class=\"first\">诶呀！</p>"
                              "<p class=\"second\">同站进出就不需要乘地铁啦</p>"
                              "<p class=\"third\">Try other routines please</p>"
                              "</body>"
                              "</html>";
signals:
    void senddata(subwayGraph*);
};




#endif // SUBWAYTRANSFER_H
