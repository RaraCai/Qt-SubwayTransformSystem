/********************************************************************************
** Form generated from reading UI file 'window_main.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_MAIN_H
#define UI_WINDOW_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubwayTransfer
{
public:
    QFrame *sidebar;
    QComboBox *startLine_cbox;
    QComboBox *startStation_cbox;
    QComboBox *endLine_cbox;
    QComboBox *endStation_cbox;
    QLabel *from_label;
    QLabel *to_label;
    QLabel *fromto_title;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *fastest_radio;
    QRadioButton *trans_radio;
    QLabel *strategy_title;
    QLabel *strategy_title_sub;
    QPushButton *pushButton;
    QLabel *answer_title;
    QLabel *answer_title_sub;
    QGraphicsView *infobar;
    QFrame *titlebar;
    QPushButton *exitButton;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *title;
    QPushButton *updatelinesButton;
    QPushButton *mapButton;
    QPushButton *singleButton;
    QComboBox *lines_cbox;
    QPushButton *profileButton;
    QGraphicsView *graphicsView;
    QPushButton *zoomin_button;
    QPushButton *zoomout_button;

    void setupUi(QWidget *SubwayTransfer)
    {
        if (SubwayTransfer->objectName().isEmpty())
            SubwayTransfer->setObjectName("SubwayTransfer");
        SubwayTransfer->resize(1280, 760);
        QFont font;
        font.setFamilies({QString::fromUtf8("Small Fonts")});
        font.setBold(true);
        SubwayTransfer->setFont(font);
        SubwayTransfer->setMouseTracking(false);
        SubwayTransfer->setStyleSheet(QString::fromUtf8("QWidge{\n"
"	background-color: rgb(255,255,255);\n"
"	border:1px solid #cccccc;\n"
"}"));
        sidebar = new QFrame(SubwayTransfer);
        sidebar->setObjectName("sidebar");
        sidebar->setEnabled(true);
        sidebar->setGeometry(QRect(0, 70, 330, 690));
        sidebar->setStyleSheet(QString::fromUtf8("QFrame#sidebar{\n"
"	background-color: white;\n"
"    padding: 5px; /* \345\206\205\350\276\271\350\267\235 */\n"
"	border-image:url(\":/icon/icon/sidebar.png\");\n"
"}"));
        sidebar->setFrameShape(QFrame::Shape::StyledPanel);
        sidebar->setFrameShadow(QFrame::Shadow::Raised);
        startLine_cbox = new QComboBox(sidebar);
        startLine_cbox->setObjectName("startLine_cbox");
        startLine_cbox->setGeometry(QRect(75, 90, 101, 25));
        startLine_cbox->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\215\216\346\226\207\344\270\255\345\256\213\";"));
        startStation_cbox = new QComboBox(sidebar);
        startStation_cbox->setObjectName("startStation_cbox");
        startStation_cbox->setGeometry(QRect(180, 90, 111, 25));
        startStation_cbox->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\215\216\346\226\207\344\270\255\345\256\213\";"));
        endLine_cbox = new QComboBox(sidebar);
        endLine_cbox->setObjectName("endLine_cbox");
        endLine_cbox->setGeometry(QRect(75, 135, 101, 25));
        endLine_cbox->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\215\216\346\226\207\344\270\255\345\256\213\";"));
        endStation_cbox = new QComboBox(sidebar);
        endStation_cbox->setObjectName("endStation_cbox");
        endStation_cbox->setGeometry(QRect(180, 135, 111, 25));
        endStation_cbox->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\215\216\346\226\207\344\270\255\345\256\213\";"));
        from_label = new QLabel(sidebar);
        from_label->setObjectName("from_label");
        from_label->setGeometry(QRect(80, 60, 71, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Black")});
        font1.setPointSize(12);
        font1.setBold(true);
        from_label->setFont(font1);
        from_label->setStyleSheet(QString::fromUtf8("QLabal#from_lable{\n"
"color:#ffcc33;\n"
"}"));
        to_label = new QLabel(sidebar);
        to_label->setObjectName("to_label");
        to_label->setGeometry(QRect(80, 110, 41, 31));
        to_label->setFont(font1);
        to_label->setStyleSheet(QString::fromUtf8("QLabal#from_lable{\n"
"color:#ffcc33;\n"
"}"));
        fromto_title = new QLabel(sidebar);
        fromto_title->setObjectName("fromto_title");
        fromto_title->setGeometry(QRect(75, 38, 231, 31));
        fromto_title->setFont(font1);
        horizontalLayoutWidget = new QWidget(sidebar);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(30, 240, 211, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        fastest_radio = new QRadioButton(horizontalLayoutWidget);
        fastest_radio->setObjectName("fastest_radio");
        fastest_radio->setStyleSheet(QString::fromUtf8("QRadioButton\n"
"{\n"
"	font: 75 10pt \"\345\215\216\346\226\207\344\270\255\345\256\213\";\n"
"	background: transparent;\n"
"	color:#2F3849;\n"
"	border: none;\n"
"}\n"
"\n"
"QRadioButton:disabled\n"
"{	\n"
"	color: #cccccc;\n"
"}\n"
"\n"
"QRadioButton::indicator \n"
"{\n"
"    width: 10px;\n"
"    height: 10px;\n"
"    border-radius: 7px;\n"
"}\n"
" \n"
"QRadioButton::indicator:checked \n"
"{\n"
"	width: 12px;\n"
"    height: 12px;\n"
"    background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 #ffcc33, stop:0.6 #ffcc33,stop:0.65 rgba(255, 255, 255, 255), stop:0.8 rgba(255, 255, 255, 255), stop:0.85#ffcc33, stop:1 #ffcc33);\n"
"    border: 1px solid #ffcc33;\n"
"	border-radius: 7px;\n"
"}\n"
" \n"
"QRadioButton::indicator:unchecked \n"
"{\n"
"    background-color: white;\n"
"    border: 2px solid #cccccc;\n"
"	color:#cccccc;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:disabled\n"
"{\n"
"    background-color: #cccccc;\n"
"    border: 2px solid  rgb(200, 200, 200);"
                        "\n"
"	color:#cccccc;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:disabled \n"
"{\n"
"	width: 12px;\n"
"    height: 12px;\n"
"	background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 gray, stop:0.6 gray,stop:0.65 white, stop:0.8 white, stop:0.85 gray, stop:1 gray);\n"
"    border: 1px solid #cccccc;\n"
"	border-radius: 7px;\n"
"}\n"
""));

        horizontalLayout->addWidget(fastest_radio);

        trans_radio = new QRadioButton(horizontalLayoutWidget);
        trans_radio->setObjectName("trans_radio");
        trans_radio->setStyleSheet(QString::fromUtf8("QRadioButton\n"
"{\n"
"	font: 75 10pt \"\345\215\216\346\226\207\344\270\255\345\256\213\";\n"
"	background: transparent;\n"
"	color:#2F3849;\n"
"	border: none;\n"
"}\n"
"\n"
"QRadioButton:disabled\n"
"{	\n"
"	color: #cccccc;\n"
"}\n"
"\n"
"QRadioButton::indicator \n"
"{\n"
"    width: 10px;\n"
"    height: 10px;\n"
"    border-radius: 7px;\n"
"}\n"
" \n"
"QRadioButton::indicator:checked \n"
"{\n"
"	width: 12px;\n"
"    height: 12px;\n"
"    background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 #ffcc33, stop:0.6 #ffcc33,stop:0.65 rgba(255, 255, 255, 255), stop:0.8 rgba(255, 255, 255, 255), stop:0.85#ffcc33, stop:1 #ffcc33);\n"
"    border: 1px solid #ffcc33;\n"
"	border-radius: 7px;\n"
"}\n"
" \n"
"QRadioButton::indicator:unchecked \n"
"{\n"
"    background-color: white;\n"
"    border: 2px solid #cccccc;\n"
"	color:#cccccc;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:disabled\n"
"{\n"
"    background-color: #cccccc;\n"
"    border: 2px solid  rgb(200, 200, 200);"
                        "\n"
"	color:#cccccc;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:disabled \n"
"{\n"
"	width: 12px;\n"
"    height: 12px;\n"
"	background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 gray, stop:0.6 gray,stop:0.65 white, stop:0.8 white, stop:0.85 gray, stop:1 gray);\n"
"    border: 1px solid #cccccc;\n"
"	border-radius: 7px;\n"
"}\n"
""));

        horizontalLayout->addWidget(trans_radio);

        strategy_title = new QLabel(sidebar);
        strategy_title->setObjectName("strategy_title");
        strategy_title->setGeometry(QRect(30, 205, 231, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font2.setPointSize(13);
        font2.setWeight(QFont::ExtraBold);
        font2.setKerning(true);
        font2.setStyleStrategy(QFont::PreferAntialias);
        strategy_title->setFont(font2);
        strategy_title->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);"));
        strategy_title_sub = new QLabel(sidebar);
        strategy_title_sub->setObjectName("strategy_title_sub");
        strategy_title_sub->setGeometry(QRect(30, 225, 231, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setKerning(true);
        font3.setStyleStrategy(QFont::PreferAntialias);
        strategy_title_sub->setFont(font3);
        strategy_title_sub->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);"));
        pushButton = new QPushButton(sidebar);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 285, 70, 30));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:15px;\n"
"	background-color:white;\n"
"	border: 2px solid #cccccc;\n"
"	color:#cccccc;\n"
"	font: 75 10px \"Arial Black\";\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:white;\n"
"	border: 2px solid #603be6;\n"
"	color:#603BE6;\n"
"}\n"
"QPushButton:pressed{\n"
"	color:#cccccc;\n"
"	background-color:#41289C;\n"
"	border-color:#41289c;\n"
"}"));
        answer_title = new QLabel(sidebar);
        answer_title->setObjectName("answer_title");
        answer_title->setGeometry(QRect(30, 320, 231, 31));
        answer_title->setFont(font2);
        answer_title->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);"));
        answer_title_sub = new QLabel(sidebar);
        answer_title_sub->setObjectName("answer_title_sub");
        answer_title_sub->setGeometry(QRect(30, 340, 231, 31));
        answer_title_sub->setFont(font3);
        answer_title_sub->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);"));
        infobar = new QGraphicsView(sidebar);
        infobar->setObjectName("infobar");
        infobar->setGeometry(QRect(20, 370, 290, 300));
        infobar->setStyleSheet(QString::fromUtf8("border:1px groove #cccccc;\n"
"border-radius:10px;\n"
"background-color:white;"));
        titlebar = new QFrame(SubwayTransfer);
        titlebar->setObjectName("titlebar");
        titlebar->setGeometry(QRect(0, 0, 1280, 70));
        titlebar->setStyleSheet(QString::fromUtf8("QFrame#titlebar{\n"
"	background-color:white;\n"
"	border:none;\n"
"}"));
        titlebar->setFrameShape(QFrame::Shape::StyledPanel);
        titlebar->setFrameShadow(QFrame::Shadow::Raised);
        exitButton = new QPushButton(titlebar);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(1170, 20, 80, 30));
        exitButton->setStyleSheet(QString::fromUtf8("QPushButton#exitButton {\n"
"    background-color: white; /* \345\210\235\345\247\213\350\203\214\346\231\257\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"    border: 1px solid #cccccc; /* \350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 15px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"    color: #cccccc; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 5px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    font-size: 12px; /* \346\226\207\346\234\254\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QPushButton#exitButton:hover {\n"
"    background-color: white; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"	color:#ffcc33;\n"
"	border-color:#ffcc33;\n"
"}\n"
"\n"
"QPushButton#exitButton:pressed {\n"
"    background-color: #E6B82E; /* \346\214\211\351\222\256\350\242\253\346\214\211\344\270\213\346\227\266\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"	color:#ccc"
                        "ccc;\n"
"	border-color:#E6B82E;\n"
"}"));
        verticalLayoutWidget_2 = new QWidget(titlebar);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(40, 0, 160, 71));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        title = new QLabel(verticalLayoutWidget_2);
        title->setObjectName("title");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial Black")});
        font4.setPointSize(12);
        font4.setWeight(QFont::Black);
        font4.setItalic(false);
        title->setFont(font4);
        title->setStyleSheet(QString::fromUtf8("QLabel#title{\n"
"	color:#2F3849;\n"
"	font: 900 12pt \"Arial Black\";\n"
"}"));

        verticalLayout_2->addWidget(title);

        updatelinesButton = new QPushButton(titlebar);
        updatelinesButton->setObjectName("updatelinesButton");
        updatelinesButton->setGeometry(QRect(360, 20, 100, 30));
        updatelinesButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	icon: url(\":/icon/icon/icon_update_disable.png\");\n"
"   \n"
"    background-color: white; /* \345\210\235\345\247\213\350\203\214\346\231\257\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"    border: 2px solid  #603be6; /* \350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 15px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"    color:  #603be6; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 5px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    font-size: 12px; /* \346\226\207\346\234\254\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"	icon: url(\":/icon/icon/icon_update_normal.png\");\n"
"   \n"
"    background-color:  #603be6; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"	color:white;\n"
"	border-color: #603be6;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	icon: url(\":/icon/icon/icon_update_pressed.png\");\n"
"    \n"
"   "
                        " background-color: #41289C; /* \346\214\211\351\222\256\350\242\253\346\214\211\344\270\213\346\227\266\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"	color:#cccccc;\n"
"	border-color:#41289C;\n"
"}"));
        mapButton = new QPushButton(titlebar);
        mapButton->setObjectName("mapButton");
        mapButton->setGeometry(QRect(480, 20, 100, 30));
        mapButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	icon: url(\":/icon/icon/icon_map_disable.png\");\n"
"   \n"
"    background-color: white; /* \345\210\235\345\247\213\350\203\214\346\231\257\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"    border: 2px solid  #603be6; /* \350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 15px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"    color:  #603be6; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 5px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    font-size: 12px; /* \346\226\207\346\234\254\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"	icon: url(\":/icon/icon/icon_map_normal.png\");\n"
"   \n"
"    background-color:  #603be6; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"	color:white;\n"
"	border-color: #603be6;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	icon: url(\":/icon/icon/icon_map_pressed.png\");\n"
"    \n"
"    backgrou"
                        "nd-color: #41289C; /* \346\214\211\351\222\256\350\242\253\346\214\211\344\270\213\346\227\266\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"	color:#cccccc;\n"
"	border-color:#41289C;\n"
"}"));
        singleButton = new QPushButton(titlebar);
        singleButton->setObjectName("singleButton");
        singleButton->setGeometry(QRect(940, 20, 100, 30));
        singleButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	icon: url(\":/icon/icon/icon_singleline_disable.png\");\n"
"   \n"
"    background-color: white; /* \345\210\235\345\247\213\350\203\214\346\231\257\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"    border: 2px solid  #603be6; /* \350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 15px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"    color:  #603be6; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 5px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    font-size: 12px; /* \346\226\207\346\234\254\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"	icon: url(\":/icon/icon/icon_singleline_normal.png\");\n"
"   \n"
"    background-color:  #603be6; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"	color:white;\n"
"	border-color: #603be6;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	icon: url(\":/icon/icon/icon_singleline_pressed.png\");\n"
""
                        "    \n"
"    background-color: #41289C; /* \346\214\211\351\222\256\350\242\253\346\214\211\344\270\213\346\227\266\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"	color:#cccccc;\n"
"	border-color:#41289C;\n"
"}"));
        lines_cbox = new QComboBox(titlebar);
        lines_cbox->setObjectName("lines_cbox");
        lines_cbox->setGeometry(QRect(600, 20, 420, 30));
        lines_cbox->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"	border:1px solid #cccccc;\n"
"	border-radius:15px;\n"
"	padding-left:5px;\n"
"	font:9pt \"\345\215\216\346\226\207\344\270\255\345\256\213\";\n"
"}\n"
""));
        profileButton = new QPushButton(titlebar);
        profileButton->setObjectName("profileButton");
        profileButton->setGeometry(QRect(20, 20, 31, 31));
        profileButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:transparent;\n"
"border:none;\n"
"icon:url(\":/icon/icon/icon_more_normal.png\");\n"
"icon-size:20px 20px;\n"
"}\n"
"QPushButton:hover{\n"
"icon:url(\":/icon/icon/icon_more_pressed.png\");\n"
"icon-size:20px 20px;\n"
"}\n"
"QPushButton:pressed{\n"
"icon:url(\":/icon/icon/icon_more_pressed.png\");\n"
"icon-size:20px 20px;\n"
"}"));
        exitButton->raise();
        verticalLayoutWidget_2->raise();
        updatelinesButton->raise();
        mapButton->raise();
        lines_cbox->raise();
        singleButton->raise();
        profileButton->raise();
        graphicsView = new QGraphicsView(SubwayTransfer);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(330, 70, 950, 690));
        graphicsView->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color:rgb(240, 240, 240);"));
        zoomin_button = new QPushButton(SubwayTransfer);
        zoomin_button->setObjectName("zoomin_button");
        zoomin_button->setGeometry(QRect(1160, 700, 41, 41));
        zoomin_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:white;\n"
"	border:1px solid #cccccc;\n"
"	border-radius:15px;\n"
"	icon:url(\":/icon/icon/icon_zoomin_normal.png\");\n"
"	icon-size:24px 24px;\n"
"}\n"
"QPushButton:hover{\n"
"	border:1px solid #ffcc33;\n"
"	icon:url(\":/icon/icon/icon_zoomin_pressed.png\");\n"
"	icon-size:24px 24px;\n"
"}\n"
"QPushButton:pressed{\n"
"	border:1px solid #ffcc33;\n"
"	icon:url(\":/icon/icon/icon_zoomin_pressed.png\");\n"
"	icon-size:24px 24px;\n"
"	background-color:#FFF7E0;\n"
"}"));
        zoomout_button = new QPushButton(SubwayTransfer);
        zoomout_button->setObjectName("zoomout_button");
        zoomout_button->setGeometry(QRect(1210, 700, 41, 41));
        zoomout_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:white;\n"
"	border:1px solid #cccccc;\n"
"	border-radius:15px;\n"
"	icon:url(\":/icon/icon/icon_zoomout_normal.png\");\n"
"	icon-size:24px 24px;\n"
"}\n"
"QPushButton:hover{\n"
"	border:1px solid #ffcc33;\n"
"	icon:url(\":/icon/icon/icon_zoomout_pressed.png\");\n"
"	icon-size:24px 24px;\n"
"}\n"
"QPushButton:pressed{\n"
"	border:1px solid #ffcc33;\n"
"	icon:url(\":/icon/icon/icon_zoomout_pressed.png\");\n"
"	icon-size:24px 24px;\n"
"	background-color:#FFF7E0;\n"
"}"));

        retranslateUi(SubwayTransfer);
        QObject::connect(exitButton, &QPushButton::clicked, SubwayTransfer, qOverload<>(&QWidget::close));

        updatelinesButton->setDefault(true);


        QMetaObject::connectSlotsByName(SubwayTransfer);
    } // setupUi

    void retranslateUi(QWidget *SubwayTransfer)
    {
        SubwayTransfer->setWindowTitle(QCoreApplication::translate("SubwayTransfer", "SubwayTransfer", nullptr));
        from_label->setText(QCoreApplication::translate("SubwayTransfer", "<html><head/><body><p><span style=\" color:#b3a2c7;\">from</span></p></body></html>", nullptr));
        to_label->setText(QCoreApplication::translate("SubwayTransfer", "<html><head/><body><p><span style=\" color:#b3a2c7;\">to</span></p></body></html>", nullptr));
        fromto_title->setText(QCoreApplication::translate("SubwayTransfer", "<html><head/><body><p><span style=\" font-size:11pt; color:#ffffff;\">Where do you want to go?</span></p></body></html>", nullptr));
        fastest_radio->setText(QCoreApplication::translate("SubwayTransfer", "\351\200\237\345\272\246\346\234\200\345\277\253", nullptr));
        trans_radio->setText(QCoreApplication::translate("SubwayTransfer", "\346\215\242\344\271\230\346\234\200\345\260\221", nullptr));
        strategy_title->setText(QCoreApplication::translate("SubwayTransfer", "<html><head/><body><p>\351\200\211\346\213\251\346\215\242\344\271\230\347\255\226\347\225\245</p></body></html>", nullptr));
        strategy_title_sub->setText(QCoreApplication::translate("SubwayTransfer", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:400; color:#adadad;\">Choose your transfer plan</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("SubwayTransfer", "OK", nullptr));
        answer_title->setText(QCoreApplication::translate("SubwayTransfer", "<html><head/><body><p>\346\216\250\350\215\220\346\220\255\344\271\230\346\226\271\346\241\210</p></body></html>", nullptr));
        answer_title_sub->setText(QCoreApplication::translate("SubwayTransfer", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:400; color:#adadad;\">Routine recommended is shown below</span></p></body></html>", nullptr));
        exitButton->setText(QCoreApplication::translate("SubwayTransfer", "\351\200\200\345\207\272", nullptr));
        title->setText(QCoreApplication::translate("SubwayTransfer", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:700;\">MetroMate</span></p></body></html>", nullptr));
        updatelinesButton->setText(QCoreApplication::translate("SubwayTransfer", "\347\272\277\350\267\257\347\256\241\347\220\206", nullptr));
        mapButton->setText(QCoreApplication::translate("SubwayTransfer", "\345\205\250\351\203\250\347\272\277\350\267\257", nullptr));
        singleButton->setText(QCoreApplication::translate("SubwayTransfer", "\346\237\245\347\234\213\345\215\225\347\272\277", nullptr));
        profileButton->setText(QString());
        zoomin_button->setText(QString());
        zoomout_button->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SubwayTransfer: public Ui_SubwayTransfer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_MAIN_H
