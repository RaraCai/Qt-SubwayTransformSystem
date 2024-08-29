//2252429蔡宇轩
#ifndef WINDOW_UPDATELINES_H
#define WINDOW_UPDATELINES_H

#include <QDialog>
#include <QGraphicsScene>
#include <QKeyEvent>
#include "graph.h"
#include "myGUIstyle.h"

class SubwayTransfer;

namespace Ui {
class window_updateLines;
}
class window_updateLines : public QDialog
{
    Q_OBJECT

public:
    explicit window_updateLines(QWidget *parent = nullptr);
    ~window_updateLines();

private slots:
    void on_linecolor_Button_clicked();

    void on_example_button_clicked();

    void on_buttonBox_2_clicked(QAbstractButton *button);

    void on_buttonBox_clicked(QAbstractButton *button);

    void on_linename_cbox_currentTextChanged(const QString &arg1);

    void getdata(subwayGraph*);


public:
    Ui::window_updateLines *ui;

protected:
    myMsgbox* mybox=new myMsgbox;       //管理自定义样式的消息弹窗
    QGraphicsScene* scene;              //展示选择线路颜色的结果
protected:
    //忽略回车事件
    void keyPressEvent(QKeyEvent *event) override {
        if (event->key() == Qt::Key_Enter || event->key() == Qt::Key_Return) {
            // 忽略回车键
            event->ignore();
        } else {
            // 其他按键事件正常处理
            QDialog::keyPressEvent(event);
        }
    }
    //初始化面板
    void initinfo();
    //bubbletips的example文本
    QString example_boxStyle=  "请保证站点经纬度在上海市内(120.12E~122.52E,30.40N~31.53N)！\n"
                               "以下是录入文本示例:\n"
                               "1\t沈杜公路\t121.512272\t31.061427\n"
                               "2\t三鲁公路\t121.527389\t31.056108\n"
                               "3\t闵瑞路\t121.530323\t31.047956\n"
                               "4\t浦航路\t121.530591\t31.040993\n";
    QString nosave_boxStyle="<html>"
                              "<head>"
                              "<style type=\"text/css\">"
                              "p.first {font-size: 8pt; color: black; font-family: '微软雅黑', sans-serif;font-weight:semi-bold;}"
                              "p.second { font-size: 10pt; color: black; font-family: '微软雅黑', sans-serif;font-weight:bold;} "
                              "p.third { font-size: 8pt; color: grey; font-family: '微软雅黑', sans-serif;font-weight:semi-bold;}"
                              "</style>"
                              "</head>"
                              "<body>"
                              "<p class=\"first\">注意！</p>"
                              "<p class=\"second\">你的操作将不被保留</p>"
                              "<p class=\"third\">Your records will not save</p>"
                              "</body>"
                              "</html>";
    QString save_boxStyle="<html>"
                              "<head>"
                              "<style type=\"text/css\">"
                              "p.first {font-size: 8pt; color: black; font-family: '微软雅黑', sans-serif;font-weight:semi-bold;}"
                              "p.second { font-size: 10pt; color: black; font-family: '微软雅黑', sans-serif;font-weight:bold;} "
                              "p.third { font-size: 8pt; color: grey; font-family: '微软雅黑', sans-serif;font-weight:semi-bold;}"
                              "</style>"
                              "</head>"
                              "<body>"
                              "<p class=\"first\">添加成功！</p>"
                              "<p class=\"second\">返回主界面点击[全部线路]查看新增结果</p>"
                              "<p class=\"third\">New record has saved!</p>"
                              "</body>"
                              "</html>";
    QString noinfo_boxStyle="<html>"
                            "<head>"
                            "<style type=\"text/css\">"
                            "p.first {font-size: 8pt; color: black; font-family: '微软雅黑', sans-serif;font-weight:semi-bold;}"
                            "p.second { font-size: 10pt; color: black; font-family: '微软雅黑', sans-serif;font-weight:bold;} "
                            "p.third { font-size: 8pt; color: grey; font-family: '微软雅黑', sans-serif;font-weight:semi-bold;}"
                            "</style>"
                            "</head>"
                            "<body>"
                            "<p class=\"first\">添加失败！</p>"
                            "<p class=\"second\">站点信息不完整，无法添加</p>"
                            "<p class=\"third\">New station can not save</p>"
                            "</body>"
                            "</html>";
    QString repeat_boxStyle="<html>"
                              "<head>"
                              "<style type=\"text/css\">"
                              "p.first {font-size: 8pt; color: black; font-family: '微软雅黑', sans-serif;font-weight:semi-bold;}"
                              "p.second { font-size: 10pt; color: black; font-family: '微软雅黑', sans-serif;font-weight:bold;} "
                              "p.third { font-size: 8pt; color: grey; font-family: '微软雅黑', sans-serif;font-weight:semi-bold;}"
                              "</style>"
                              "</head>"
                              "<body>"
                              "<p class=\"first\">添加失败！</p>"
                              "<p class=\"second\">站点信息已存在，无法添加</p>"
                              "<p class=\"third\">Repeat station can not save</p>"
                              "</body>"
                              "</html>";
public:
    subwayGraph* mainw;//父窗口指针
    bool line_buttonstate=false;
    bool station_buttonstate=false;
    //获取用户填入的站点信息
    station getStationInfo(QVector<QString>& neigh_s);

};

#endif // WINDOW_UPDATELINES_H
