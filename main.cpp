//2252429蔡宇轩
#include "window_main.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QPainterPath>
#include <QBitmap>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //设置应用图标
    a.setApplicationName("MetroMate");
    a.setApplicationDisplayName("MetroMate");
    a.setWindowIcon(QIcon(":/icon/icon/app_icon.png"));

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "subway_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    SubwayTransfer w;


    w.show();
    return a.exec();
}
