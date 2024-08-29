/********************************************************************************
** Form generated from reading UI file 'subwaytransfer.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBWAYTRANSFER_H
#define UI_SUBWAYTRANSFER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubwayTransfer
{
public:
    QPushButton *exitButton;

    void setupUi(QWidget *SubwayTransfer)
    {
        if (SubwayTransfer->objectName().isEmpty())
            SubwayTransfer->setObjectName("SubwayTransfer");
        SubwayTransfer->resize(1080, 720);
        QFont font;
        font.setFamilies({QString::fromUtf8("Small Fonts")});
        font.setBold(true);
        SubwayTransfer->setFont(font);
        SubwayTransfer->setMouseTracking(false);
        SubwayTransfer->setStyleSheet(QString::fromUtf8("QWidge{\n"
"	background-color: rgb(255,255,255);\n"
"}"));
        exitButton = new QPushButton(SubwayTransfer);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(1000, 20, 71, 31));
        exitButton->setAutoFillBackground(false);
        exitButton->setStyleSheet(QString::fromUtf8("QPushButton#exitButton {\n"
"    background-color: white; /* \345\210\235\345\247\213\350\203\214\346\231\257\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"    border: 1px solid #cccccc; /* \350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 5px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"    color: #cccccc; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    padding: 5px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    font-size: 12px; /* \346\226\207\346\234\254\345\244\247\345\260\217 */\n"
"    transition: color 0.1s; /* \350\203\214\346\231\257\350\211\262\345\217\230\345\214\226\347\232\204\350\277\207\346\270\241\346\225\210\346\236\234\357\274\214\346\214\201\347\273\2550.3\347\247\222 */\n"
"}\n"
"\n"
"QPushButton#exitButton:hover {\n"
"    background-color: white; /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"	color:#ffcc33;\n"
"	border-color:#ffcc33;\n"
"}\n"
"\n"
"Q"
                        "PushButton#exitButton:pressed {\n"
"    background-color: #ffcc33; /* \346\214\211\351\222\256\350\242\253\346\214\211\344\270\213\346\227\266\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"	color:white;\n"
"	border-color:#ffcc33;\n"
"}"));
        exitButton->setFlat(false);

        retranslateUi(SubwayTransfer);

        QMetaObject::connectSlotsByName(SubwayTransfer);
    } // setupUi

    void retranslateUi(QWidget *SubwayTransfer)
    {
        SubwayTransfer->setWindowTitle(QCoreApplication::translate("SubwayTransfer", "SubwayTransfer", nullptr));
        exitButton->setText(QCoreApplication::translate("SubwayTransfer", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SubwayTransfer: public Ui_SubwayTransfer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBWAYTRANSFER_H
