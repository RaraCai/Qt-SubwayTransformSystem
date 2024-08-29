/********************************************************************************
** Form generated from reading UI file 'window_updatelines.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_UPDATELINES_H
#define UI_WINDOW_UPDATELINES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "myGUIstyle.h"

QT_BEGIN_NAMESPACE

class Ui_window_updateLines
{
public:
    QWidget *widget;
    QTabWidget *tabWidget;
    QWidget *update_line_tab;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QDialogButtonBox *buttonBox_2;
    QLabel *icon;
    QLabel *line_title2;
    QLabel *line_name;
    QLabel *label;
    QLabel *label_2;
    QLabel *icon_2;
    QLineEdit *linename_lineEdit;
    QPushButton *linecolor_Button;
    QGraphicsView *linecolor_showbox;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *example_button;
    QPlainTextEdit *stations_ptEdit;
    QLabel *line_name_2;
    QSpinBox *sum_spinBox;
    QLineEdit *fromto1_lineEdit;
    QLabel *line_name_3;
    QLineEdit *fromto2_lineedit;
    QLabel *line_name_4;
    QWidget *update_station_tab;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QLabel *icon_3;
    QLabel *label_5;
    QLineEdit *stationname_lineEdit;
    QLabel *line_name_5;
    QLabel *line_name_6;
    QLabel *line_name_7;
    QDoubleSpinBox *stationLon_lineEdit;
    QDoubleSpinBox *stationlat_lineEdit;
    QComboBox *linename_cbox;
    QLabel *line_name_8;
    QLabel *label_6;
    QLabel *icon_4;
    QLabel *line_name_9;
    myMultiCheckbox *neighbour;
    QLabel *line_name_10;

    void setupUi(QDialog *window_updateLines)
    {
        if (window_updateLines->objectName().isEmpty())
            window_updateLines->setObjectName("window_updateLines");
        window_updateLines->setWindowModality(Qt::WindowModality::NonModal);
        window_updateLines->resize(640, 480);
        QFont font;
        font.setStyleStrategy(QFont::PreferAntialias);
        window_updateLines->setFont(font);
        window_updateLines->setStyleSheet(QString::fromUtf8("QDialog{\n"
"	background-color: transparent;\n"
"	\n"
"}"));
        window_updateLines->setSizeGripEnabled(false);
        window_updateLines->setModal(true);
        widget = new QWidget(window_updateLines);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 640, 480));
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget{\n"
"	background-color:white;\n"
"	border-radius:20px;\n"
"	border:1px solid #cccccc;\n"
"}"));
        tabWidget = new QTabWidget(widget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(5, 5, 630, 460));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget::pane\n"
"{\n"
"	top:10px;\n"
"	border:none;\n"
"}\n"
"/*tab\346\240\207\347\255\276\346\255\243\345\270\270\347\212\266\346\200\201*/\n"
"QTabBar::tab\n"
"{\n"
"	color:#cccccc;\n"
"	background:transparent;	\n"
"	font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	font-size:13px;	\n"
"	padding-left:-9px;\n"
"	padding-right:-9px;\n"
"	width:95px;\n"
"	height:30px;\n"
"	margin-left:0px;\n"
"	margin-right:0px;\n"
"} \n"
"/*tab\346\240\207\347\255\276\351\200\211\344\270\255\347\212\266\346\200\201*/\n"
"QTabBar::tab:selected \n"
"{\n"
"	color:black;\n"
"	background:transparent;	\n"
"	font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	font-size:13px;	\n"
"	font-weight:bold;\n"
"	border-bottom:2px solid #ffcc33;  \n"
"}\n"
"/*tab\346\240\207\347\255\276\351\274\240\346\240\207\346\202\254\346\265\256\347\212\266\346\200\201*/\n"
"QTabBar::tab:hover  \n"
"{\n"
"	color:#ffcc33;\n"
"	background:transparent;	\n"
"	font-family:\"\345\276\256\350\275\257\351\233\205\351\273"
                        "\221\";\n"
"	font-size:13px;	\n"
"	font-weight:bold;\n"
"}\n"
"QTabWidget::tab-bar {\n"
"    alignment: left;  \n"
"	top:5px;\n"
"	left:10px;	\n"
"} \n"
"#detailWgt, #appealReasonWgt\n"
"{\n"
"	border:none;\n"
"}\n"
"\n"
""));
        update_line_tab = new QWidget();
        update_line_tab->setObjectName("update_line_tab");
        verticalLayoutWidget_3 = new QWidget(update_line_tab);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(0, 360, 631, 71));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        buttonBox_2 = new QDialogButtonBox(verticalLayoutWidget_3);
        buttonBox_2->setObjectName("buttonBox_2");
        buttonBox_2->setStyleSheet(QString::fromUtf8("QDialogButtonBox QPushButton{\n"
"    	background-color: white; /* \345\210\235\345\247\213\350\203\214\346\231\257\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"   	border: 1px solid #cccccc; /* \350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    	border-radius: 8px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"    	color: #cccccc; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    	padding: 5px; /* \345\206\205\350\276\271\350\267\235 */\n"
"   	font-size: 12px; /* \346\226\207\346\234\254\345\244\247\345\260\217 */\n"
"	width:60px;\n"
"	height:15px;\n"
"}\n"
"QDialogButtonBox QPushButton:hover {\n"
"    	background-color: white; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"	color:#ffcc33;	\n"
"	border-color:#ffcc33;\n"
"}\n"
"QDialogButtonBox QPushButton:pressed {\n"
"    	background-color: #E6B82E; /* \346\214\211\351\222\256\350\242\253\346\214\211\344\270\213\346\227\266\347\232\204\350\203"
                        "\214\346\231\257\350\211\262 */\n"
"	color:#cccccc;\n"
"	border-color:#E6B82E;\n"
"}"));
        buttonBox_2->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        buttonBox_2->setCenterButtons(true);

        verticalLayout_3->addWidget(buttonBox_2);

        icon = new QLabel(update_line_tab);
        icon->setObjectName("icon");
        icon->setGeometry(QRect(30, 13, 16, 31));
        line_title2 = new QLabel(update_line_tab);
        line_title2->setObjectName("line_title2");
        line_title2->setGeometry(QRect(40, 101, 91, 41));
        QFont font1;
        font1.setBold(false);
        line_title2->setFont(font1);
        line_name = new QLabel(update_line_tab);
        line_name->setObjectName("line_name");
        line_name->setGeometry(QRect(40, 45, 61, 21));
        label = new QLabel(update_line_tab);
        label->setObjectName("label");
        label->setGeometry(QRect(320, 45, 61, 21));
        label_2 = new QLabel(update_line_tab);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 15, 131, 31));
        label_2->setFont(font1);
        icon_2 = new QLabel(update_line_tab);
        icon_2->setObjectName("icon_2");
        icon_2->setGeometry(QRect(30, 103, 16, 31));
        linename_lineEdit = new QLineEdit(update_line_tab);
        linename_lineEdit->setObjectName("linename_lineEdit");
        linename_lineEdit->setGeometry(QRect(40, 65, 250, 31));
        QFont font2;
        font2.setBold(false);
        font2.setItalic(false);
        font2.setStyleStrategy(QFont::PreferAntialias);
        linename_lineEdit->setFont(font2);
        linename_lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	border-radius:10px;\n"
"	border: 1px groove #cccccc;\n"
"	color:black;\n"
"	background-color:white;\n"
"	padding-left:5px;\n"
"	padding-right:5px;\n"
"	font:\"\345\215\216\346\226\207\344\270\255\345\256\213\";\n"
"}\n"
"QLineEdit:focus{\n"
"	border:1px groove #ffcc33;\n"
"	background-color:#FFF7E0;\n"
"}\n"
"QLineEdit:hover{\n"
"	border:1px groove #ffcc33;\n"
"	background-color:white;\n"
"}"));
        linename_lineEdit->setClearButtonEnabled(true);
        linecolor_Button = new QPushButton(update_line_tab);
        linecolor_Button->setObjectName("linecolor_Button");
        linecolor_Button->setGeometry(QRect(320, 65, 100, 30));
        linecolor_Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background-color: white; /* \345\210\235\345\247\213\350\203\214\346\231\257\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"    border: 1px groove #cccccc; /* \350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 15px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"    color: #ababab; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 5px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    font-size: 11px; /* \346\226\207\346\234\254\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: white; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"	color:#ffcc33;\n"
"	border-color:#ffcc33;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #E6B82E; /* \346\214\211\351\222\256\350\242\253\346\214\211\344\270\213\346\227\266\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"	color:#cccccc;\n"
"	border-color:#E6B82E;\n"
""
                        "}"));
        linecolor_showbox = new QGraphicsView(update_line_tab);
        linecolor_showbox->setObjectName("linecolor_showbox");
        linecolor_showbox->setGeometry(QRect(430, 67, 28, 28));
        linecolor_showbox->setStyleSheet(QString::fromUtf8("border:transparent;\n"
"background-color:#cccccc;\n"
""));
        label_3 = new QLabel(update_line_tab);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(430, 45, 51, 20));
        label_4 = new QLabel(update_line_tab);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 200, 391, 21));
        example_button = new QPushButton(update_line_tab);
        example_button->setObjectName("example_button");
        example_button->setGeometry(QRect(420, 200, 56, 21));
        example_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:none;\n"
"	background:transparent;\n"
"	color:#603BE6;\n"
"	font-size:8pt;\n"
"}\n"
"QPushButton:pressed{\n"
"	font-weight:bold;\n"
"	color:#41289c;\n"
"}"));
        stations_ptEdit = new QPlainTextEdit(update_line_tab);
        stations_ptEdit->setObjectName("stations_ptEdit");
        stations_ptEdit->setGeometry(QRect(40, 220, 551, 141));
        stations_ptEdit->setStyleSheet(QString::fromUtf8("QPlainTextEdit{\n"
"	border-radius:10px;\n"
"	border: 1px groove #cccccc;\n"
"	color:black;\n"
"	background-color:white;\n"
"	padding-left:5px;\n"
"	padding-right:5px;\n"
"	font:\"\345\215\216\346\226\207\344\270\255\345\256\213\";\n"
"}\n"
"QPlainTextEdit:focus{\n"
"	border:1px groove #ffcc33;\n"
"}\n"
"QPlainTextEdit:hover{\n"
"	border:1px groove #ffcc33;\n"
"	background-color:white;\n"
"}"));
        line_name_2 = new QLabel(update_line_tab);
        line_name_2->setObjectName("line_name_2");
        line_name_2->setGeometry(QRect(40, 140, 61, 21));
        sum_spinBox = new QSpinBox(update_line_tab);
        sum_spinBox->setObjectName("sum_spinBox");
        sum_spinBox->setGeometry(QRect(40, 160, 150, 30));
        sum_spinBox->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	border:1px solid #cccccc;\n"
"	border-radius:8px;\n"
"	padding-left:3px;\n"
"	padding-right:3px;\n"
"}\n"
"QSpinBox:hover{\n"
"	border:1px solid #ffcc33;\n"
"}\n"
"QSpinBox:focus{\n"
"	border:1px solid #ffcc33;\n"
"}\n"
"QSpinBox::up-button{width:20px;margin-right:3px;}\n"
"QSpinBox::down-button{width:20px;margin-right:3px;}"));
        fromto1_lineEdit = new QLineEdit(update_line_tab);
        fromto1_lineEdit->setObjectName("fromto1_lineEdit");
        fromto1_lineEdit->setGeometry(QRect(200, 160, 150, 30));
        fromto1_lineEdit->setFont(font2);
        fromto1_lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	border-radius:10px;\n"
"	border: 1px groove #cccccc;\n"
"	color:black;\n"
"	background-color:white;\n"
"	padding-left:5px;\n"
"	padding-right:5px;\n"
"	font:\"\345\215\216\346\226\207\344\270\255\345\256\213\";\n"
"}\n"
"QLineEdit:focus{\n"
"	border:1px groove #ffcc33;\n"
"	background-color:#FFF7E0;\n"
"}\n"
"QLineEdit:hover{\n"
"	border:1px groove #ffcc33;\n"
"	background-color:white;\n"
"}"));
        fromto1_lineEdit->setClearButtonEnabled(true);
        line_name_3 = new QLabel(update_line_tab);
        line_name_3->setObjectName("line_name_3");
        line_name_3->setGeometry(QRect(200, 140, 61, 21));
        fromto2_lineedit = new QLineEdit(update_line_tab);
        fromto2_lineedit->setObjectName("fromto2_lineedit");
        fromto2_lineedit->setGeometry(QRect(360, 160, 150, 30));
        fromto2_lineedit->setFont(font2);
        fromto2_lineedit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	border-radius:10px;\n"
"	border: 1px groove #cccccc;\n"
"	color:black;\n"
"	background-color:white;\n"
"	padding-left:5px;\n"
"	padding-right:5px;\n"
"	font:\"\345\215\216\346\226\207\344\270\255\345\256\213\";\n"
"}\n"
"QLineEdit:focus{\n"
"	border:1px groove #ffcc33;\n"
"	background-color:#FFF7E0;\n"
"}\n"
"QLineEdit:hover{\n"
"	border:1px groove #ffcc33;\n"
"	background-color:white;\n"
"}"));
        fromto2_lineedit->setClearButtonEnabled(true);
        line_name_4 = new QLabel(update_line_tab);
        line_name_4->setObjectName("line_name_4");
        line_name_4->setGeometry(QRect(360, 140, 61, 21));
        tabWidget->addTab(update_line_tab, QString());
        update_station_tab = new QWidget();
        update_station_tab->setObjectName("update_station_tab");
        verticalLayoutWidget = new QWidget(update_station_tab);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 360, 631, 71));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        buttonBox = new QDialogButtonBox(verticalLayoutWidget);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial Black")});
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setStyleStrategy(QFont::PreferAntialias);
        buttonBox->setFont(font3);
        buttonBox->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        buttonBox->setStyleSheet(QString::fromUtf8("QDialogButtonBox QPushButton{\n"
"    	background-color: white; /* \345\210\235\345\247\213\350\203\214\346\231\257\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"   	border: 1px solid #cccccc; /* \350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    	border-radius: 8px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"    	color: #cccccc; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    	padding: 5px; /* \345\206\205\350\276\271\350\267\235 */\n"
"   	font-size: 12px; /* \346\226\207\346\234\254\345\244\247\345\260\217 */\n"
"	width:60px;\n"
"	height:15px;\n"
"}\n"
"QDialogButtonBox QPushButton:hover {\n"
"    	background-color: white; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"	color:#ffcc33;	\n"
"	border-color:#ffcc33;\n"
"}\n"
"QDialogButtonBox QPushButton:pressed {\n"
"    	background-color: #E6B82E; /* \346\214\211\351\222\256\350\242\253\346\214\211\344\270\213\346\227\266\347\232\204\350\203"
                        "\214\346\231\257\350\211\262 */\n"
"	color:#cccccc;\n"
"	border-color:#E6B82E;\n"
"}"));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);

        icon_3 = new QLabel(update_station_tab);
        icon_3->setObjectName("icon_3");
        icon_3->setGeometry(QRect(30, 13, 16, 31));
        label_5 = new QLabel(update_station_tab);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 15, 131, 31));
        label_5->setFont(font1);
        stationname_lineEdit = new QLineEdit(update_station_tab);
        stationname_lineEdit->setObjectName("stationname_lineEdit");
        stationname_lineEdit->setGeometry(QRect(40, 65, 250, 30));
        stationname_lineEdit->setFont(font2);
        stationname_lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	border-radius:10px;\n"
"	border: 1px groove #cccccc;\n"
"	color:black;\n"
"	background-color:white;\n"
"	padding-left:5px;\n"
"	padding-right:5px;\n"
"	font:\"\345\215\216\346\226\207\344\270\255\345\256\213\";\n"
"}\n"
"QLineEdit:focus{\n"
"	border:1px groove #ffcc33;\n"
"	background-color:#FFF7E0;\n"
"}\n"
"QLineEdit:hover{\n"
"	border:1px groove #ffcc33;\n"
"	background-color:white;\n"
"}"));
        stationname_lineEdit->setClearButtonEnabled(true);
        line_name_5 = new QLabel(update_station_tab);
        line_name_5->setObjectName("line_name_5");
        line_name_5->setGeometry(QRect(40, 45, 61, 21));
        line_name_6 = new QLabel(update_station_tab);
        line_name_6->setObjectName("line_name_6");
        line_name_6->setGeometry(QRect(40, 110, 61, 21));
        line_name_7 = new QLabel(update_station_tab);
        line_name_7->setObjectName("line_name_7");
        line_name_7->setGeometry(QRect(230, 110, 61, 21));
        stationLon_lineEdit = new QDoubleSpinBox(update_station_tab);
        stationLon_lineEdit->setObjectName("stationLon_lineEdit");
        stationLon_lineEdit->setGeometry(QRect(40, 130, 150, 30));
        stationLon_lineEdit->setStyleSheet(QString::fromUtf8("QDoubleSpinBox{\n"
"	border:1px solid #cccccc;\n"
"	border-radius:8px;\n"
"	padding-left:3px;\n"
"	padding-right:3px;\n"
"	font:\"\345\215\216\346\226\207\344\270\255\345\256\213\";\n"
"}\n"
"QDoubleSpinBox:hover{\n"
"	border:1px solid #ffcc33;\n"
"}\n"
"QDoubleSpinBox:focus{\n"
"	border:1px solid #ffcc33;\n"
"}\n"
"QDoubleSpinBox::up-button{width:20px;margin-right:3px;}\n"
"QDoubleSpinBox::down-button{width:20px;margin-right:3px;}"));
        stationLon_lineEdit->setDecimals(6);
        stationLon_lineEdit->setMinimum(120.120000000000005);
        stationLon_lineEdit->setMaximum(122.519999999999996);
        stationLon_lineEdit->setSingleStep(0.000000000000000);
        stationlat_lineEdit = new QDoubleSpinBox(update_station_tab);
        stationlat_lineEdit->setObjectName("stationlat_lineEdit");
        stationlat_lineEdit->setGeometry(QRect(230, 130, 150, 30));
        stationlat_lineEdit->setStyleSheet(QString::fromUtf8("QDoubleSpinBox{\n"
"	border:1px solid #cccccc;\n"
"	border-radius:8px;\n"
"	padding-left:3px;\n"
"	padding-right:3px;\n"
"	font:\"\345\215\216\346\226\207\344\270\255\345\256\213\";\n"
"}\n"
"QDoubleSpinBox:hover{\n"
"	border:1px solid #ffcc33;\n"
"}\n"
"QDoubleSpinBox:focus{\n"
"	border:1px solid #ffcc33;\n"
"}\n"
"QDoubleSpinBox::up-button{width:20px;margin-right:3px;}\n"
"QDoubleSpinBox::down-button{width:20px;margin-right:3px;}"));
        stationlat_lineEdit->setDecimals(6);
        stationlat_lineEdit->setMinimum(30.399999999999999);
        stationlat_lineEdit->setMaximum(31.530000000000001);
        linename_cbox = new QComboBox(update_station_tab);
        linename_cbox->setObjectName("linename_cbox");
        linename_cbox->setGeometry(QRect(320, 65, 150, 30));
        linename_cbox->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"	border-radius:10px;\n"
"	border: 1px groove #cccccc;\n"
"	color:black;\n"
"	background-color:white;\n"
"	padding-left:5px;\n"
"	padding-right:5px;\n"
"	font:\"\345\215\216\346\226\207\344\270\255\345\256\213\";\n"
"}\n"
"QComboBox:focus{\n"
"	border:1px groove #ffcc33;\n"
"	background-color:#FFF7E0;\n"
"}\n"
"QComboBox:hover{\n"
"	border:1px groove #ffcc33;\n"
"	background-color:white;\n"
"}\n"
""));
        line_name_8 = new QLabel(update_station_tab);
        line_name_8->setObjectName("line_name_8");
        line_name_8->setGeometry(QRect(320, 45, 61, 21));
        label_6 = new QLabel(update_station_tab);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 190, 131, 31));
        label_6->setFont(font1);
        icon_4 = new QLabel(update_station_tab);
        icon_4->setObjectName("icon_4");
        icon_4->setGeometry(QRect(30, 187, 16, 31));
        line_name_9 = new QLabel(update_station_tab);
        line_name_9->setObjectName("line_name_9");
        line_name_9->setGeometry(QRect(40, 230, 251, 21));
        neighbour = new myMultiCheckbox(update_station_tab);
        neighbour->setObjectName("neighbour");
        neighbour->setGeometry(QRect(40, 250, 250, 30));
        neighbour->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"	border-radius:10px;\n"
"	border: 1px groove #cccccc;\n"
"	color:black;\n"
"	background-color:white;\n"
"	padding-left:5px;\n"
"	padding-right:5px;\n"
"}\n"
"QComboBox:focus{\n"
"	border:1px groove #ffcc33;\n"
"	background-color:#FFF7E0;\n"
"}\n"
"QComboBox:hover{\n"
"	border:1px groove #ffcc33;\n"
"	background-color:white;\n"
"}\n"
"QCheckBox\n"
"{\n"
"	font: 75 10pt \"\345\215\216\346\226\207\344\270\255\345\256\213\";\n"
"	background: transparent;\n"
"	color:#2F3849;\n"
"	border: none;\n"
"}\n"
"\n"
"QCheckBox:disabled\n"
"{	\n"
"	color: #cccccc;\n"
"}\n"
"\n"
"QCheckBox::indicator \n"
"{\n"
"    width: 10px;\n"
"    height: 10px;\n"
"    border-radius: 7px;\n"
"}\n"
" \n"
"QCheckBox::indicator:checked \n"
"{\n"
"	width: 12px;\n"
"    height: 12px;\n"
"    background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 #ffcc33, stop:0.6 #ffcc33,stop:0.65 rgba(255, 255, 255, 255), stop:0.8 rgba(255, 255, 255, 255), stop:0.85#ffcc33, stop:1 #ffcc33);\n"
"    bor"
                        "der: 1px solid #ffcc33;\n"
"	border-radius: 7px;\n"
"}\n"
" \n"
"QCheckBox::indicator:unchecked \n"
"{\n"
"    background-color: white;\n"
"    border: 2px solid #cccccc;\n"
"	color:#cccccc;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:disabled\n"
"{\n"
"    background-color: #cccccc;\n"
"    border: 2px solid  rgb(200, 200, 200);\n"
"	color:#cccccc;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:disabled \n"
"{\n"
"	width: 12px;\n"
"    height: 12px;\n"
"	background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 gray, stop:0.6 gray,stop:0.65 white, stop:0.8 white, stop:0.85 gray, stop:1 gray);\n"
"    border: 1px solid #cccccc;\n"
"	border-radius: 7px;\n"
"}\n"
""));
        line_name_10 = new QLabel(update_station_tab);
        line_name_10->setObjectName("line_name_10");
        line_name_10->setGeometry(QRect(40, 160, 541, 21));
        tabWidget->addTab(update_station_tab, QString());

        retranslateUi(window_updateLines);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, window_updateLines, qOverload<>(&QDialog::reject));
        QObject::connect(buttonBox_2, &QDialogButtonBox::rejected, window_updateLines, qOverload<>(&QDialog::reject));
        QObject::connect(buttonBox_2, &QDialogButtonBox::accepted, window_updateLines, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, window_updateLines, qOverload<>(&QDialog::accept));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(window_updateLines);
    } // setupUi

    void retranslateUi(QDialog *window_updateLines)
    {
        window_updateLines->setWindowTitle(QCoreApplication::translate("window_updateLines", "Dialog", nullptr));
#if QT_CONFIG(tooltip)
        tabWidget->setToolTip(QCoreApplication::translate("window_updateLines", "<html><head/><body><p>\347\272\277\350\267\257\347\256\241\347\220\206</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        tabWidget->setWhatsThis(QCoreApplication::translate("window_updateLines", "<html><head/><body><p>\346\267\273\345\212\240\350\277\236\347\272\277</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        update_line_tab->setWhatsThis(QCoreApplication::translate("window_updateLines", "<html><head/><body><p>\346\267\273\345\212\240\347\272\277\350\267\257</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        icon->setText(QCoreApplication::translate("window_updateLines", "<html><head/><body><p><img src=\":/icon/icon/icon_title.png\"/></p></body></html>", nullptr));
        line_title2->setText(QCoreApplication::translate("window_updateLines", "<html><head/><body><p><span style=\" font-size:14pt;\">\345\275\225\345\205\245\347\253\231\347\202\271</span></p></body></html>", nullptr));
        line_name->setText(QCoreApplication::translate("window_updateLines", "<html><head/><body><p><span style=\" color:#ababab;\">\347\272\277\350\267\257\345\220\215\347\247\260 </span><span style=\" color:#603be6;\">*</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("window_updateLines", "<html><head/><body><p><span style=\" color:#ababab;\">\347\272\277\350\267\257\351\242\234\350\211\262 </span><span style=\" color:#603be6;\">*</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("window_updateLines", "<html><head/><body><p><span style=\" font-size:14pt;\">\345\237\272\346\234\254\344\277\241\346\201\257</span></p></body></html>", nullptr));
        icon_2->setText(QCoreApplication::translate("window_updateLines", "<html><head/><body><p><img src=\":/icon/icon/icon_title.png\"/></p></body></html>", nullptr));
        linename_lineEdit->setText(QString());
        linecolor_Button->setText(QCoreApplication::translate("window_updateLines", "\351\200\211\346\213\251\351\242\234\350\211\262", nullptr));
        label_3->setText(QCoreApplication::translate("window_updateLines", "<html><head/><body><p><span style=\" color:#ababab;\">\345\275\223\345\211\215\351\242\234\350\211\262</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("window_updateLines", "<html><head/><body><p><span style=\" color:#ababab;\">\351\200\220\350\241\214\350\276\223\345\205\245\345\272\217\345\217\267\343\200\201\345\220\215\347\247\260\343\200\201\347\273\217\345\272\246\343\200\201\347\272\254\345\272\246(\350\241\214\345\206\205\344\275\277\347\224\250tab\347\233\270\351\232\224)\357\274\214\345\212\241\345\277\205\346\240\274\345\274\217\346\255\243\347\241\256\357\274\201</span></p></body></html>", nullptr));
        example_button->setText(QCoreApplication::translate("window_updateLines", "\346\237\245\347\234\213\347\244\272\344\276\213", nullptr));
        line_name_2->setText(QCoreApplication::translate("window_updateLines", "<html><head/><body><p><span style=\" color:#ababab;\">\347\253\231\347\202\271\346\200\273\346\225\260 </span><span style=\" color:#603be6;\">*</span></p></body></html>", nullptr));
        fromto1_lineEdit->setText(QString());
        line_name_3->setText(QCoreApplication::translate("window_updateLines", "<html><head/><body><p><span style=\" color:#ababab;\">\350\265\267\345\247\213\347\253\2311 </span><span style=\" color:#603be6;\">*</span></p></body></html>", nullptr));
        fromto2_lineedit->setText(QString());
        line_name_4->setText(QCoreApplication::translate("window_updateLines", "<html><head/><body><p><span style=\" color:#ababab;\">\350\265\267\345\247\213\347\253\2312 </span><span style=\" color:#603be6;\">*</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(update_line_tab), QCoreApplication::translate("window_updateLines", "\346\267\273\345\212\240\347\272\277\350\267\257", nullptr));
#if QT_CONFIG(whatsthis)
        update_station_tab->setWhatsThis(QCoreApplication::translate("window_updateLines", "<html><head/><body><p>\346\267\273\345\212\240\347\253\231\347\202\271</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        buttonBox->setToolTip(QCoreApplication::translate("window_updateLines", "<html><head/><body><p>OK</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        buttonBox->setWhatsThis(QCoreApplication::translate("window_updateLines", "<html><head/><body><p>OK</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        icon_3->setText(QCoreApplication::translate("window_updateLines", "<html><head/><body><p><img src=\":/icon/icon/icon_title.png\"/></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("window_updateLines", "<html><head/><body><p><span style=\" font-size:14pt;\">\345\237\272\346\234\254\344\277\241\346\201\257</span></p></body></html>", nullptr));
        stationname_lineEdit->setText(QString());
        line_name_5->setText(QCoreApplication::translate("window_updateLines", "<html><head/><body><p><span style=\" color:#ababab;\">\347\253\231\347\202\271\345\220\215\347\247\260 </span><span style=\" color:#603be6;\">*</span></p></body></html>", nullptr));
        line_name_6->setText(QCoreApplication::translate("window_updateLines", "<html><head/><body><p><span style=\" color:#ababab;\">\347\253\231\347\202\271\347\273\217\345\272\246 </span><span style=\" color:#603be6;\">*</span></p></body></html>", nullptr));
        line_name_7->setText(QCoreApplication::translate("window_updateLines", "<html><head/><body><p><span style=\" color:#ababab;\">\347\253\231\347\202\271\347\272\254\345\272\246 </span><span style=\" color:#603be6;\">*</span></p></body></html>", nullptr));
        line_name_8->setText(QCoreApplication::translate("window_updateLines", "<html><head/><body><p><span style=\" color:#ababab;\">\346\211\200\345\261\236\347\272\277\350\267\257 </span><span style=\" color:#603be6;\">*</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("window_updateLines", "<html><head/><body><p><span style=\" font-size:14pt;\">\351\202\273\347\253\231\351\200\211\346\213\251</span></p></body></html>", nullptr));
        icon_4->setText(QCoreApplication::translate("window_updateLines", "<html><head/><body><p><img src=\":/icon/icon/icon_title.png\"/></p></body></html>", nullptr));
        line_name_9->setText(QCoreApplication::translate("window_updateLines", "<html><head/><body><p><span style=\" color:#ababab;\">\351\200\211\346\213\251\344\270\216\346\234\254\347\253\231\347\233\264\346\216\245\347\233\270\351\202\273\347\232\204\347\253\231\347\202\271(\345\217\257\345\244\232\351\200\211) </span><span style=\" color:#603be6;\">\350\257\267\345\220\210\347\220\206\350\200\203\350\231\221\347\272\277\350\267\257\350\247\204\345\210\222\357\274\201</span></p></body></html>", nullptr));
        line_name_10->setText(QCoreApplication::translate("window_updateLines", "<html><head/><body><p><span style=\" color:#603be6;\">\350\257\267\344\277\235\350\257\201\347\253\231\347\202\271\347\273\217\347\272\254\345\272\246\345\234\250\344\270\212\346\265\267\345\270\202\345\206\205(120.12E~122.52E,30.40N~31.53N)</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(update_station_tab), QCoreApplication::translate("window_updateLines", "\346\267\273\345\212\240\347\253\231\347\202\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class window_updateLines: public Ui_window_updateLines {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_UPDATELINES_H
