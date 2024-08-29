/********************************************************************************
** Form generated from reading UI file 'window_intro.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_INTRO_H
#define UI_WINDOW_INTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_window_intro
{
public:
    QFrame *frame;
    QPushButton *backButton;

    void setupUi(QWidget *window_intro)
    {
        if (window_intro->objectName().isEmpty())
            window_intro->setObjectName("window_intro");
        window_intro->resize(716, 760);
        window_intro->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"\n"
"\n"
""));
        frame = new QFrame(window_intro);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-40, 0, 441, 760));
        QFont font;
        font.setWeight(QFont::Thin);
        font.setStyleStrategy(QFont::PreferAntialias);
        frame->setFont(font);
        frame->setStyleSheet(QString::fromUtf8("QFrame#frame{\n"
"border-image:url(\":/icon/icon/profile.png\");\n"
"background:transparent;\n"
"}"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        backButton = new QPushButton(frame);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(340, 380, 31, 51));
        backButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:transparent;\n"
"border:none;\n"
"icon:url(\":/icon/icon/icon_back_normal.png\");\n"
"icon-size:20px 20px;\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"icon:url(\":/icon/icon/icon_back_pressed.png\");\n"
"icon-size:20px 20px;\n"
"}\n"
"QPushButton:pressed{\n"
"icon:url(\":/icon/icon/icon_back_pressed.png\");\n"
"icon-size:20px 20px;\n"
"}"));

        retranslateUi(window_intro);

        QMetaObject::connectSlotsByName(window_intro);
    } // setupUi

    void retranslateUi(QWidget *window_intro)
    {
        window_intro->setWindowTitle(QCoreApplication::translate("window_intro", "Form", nullptr));
        backButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class window_intro: public Ui_window_intro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_INTRO_H
