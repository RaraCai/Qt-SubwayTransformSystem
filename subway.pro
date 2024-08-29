QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    graph.cpp \
    line.cpp \
    main.cpp \
    station.cpp \
    window_intro.cpp \
    window_main.cpp \
    window_updatelines.cpp \
    zoomio.cpp

HEADERS += \
    graph.h \
    line.h \
    myGUIstyle.h \
    station.h \
    window_intro.h \
    window_main.h \
    window_updatelines.h \
    zoomio.h

FORMS += \
    window_intro.ui \
    window_main.ui \
    window_updatelines.ui

TRANSLATIONS += \
    subway_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

RESOURCES += \
    data.qrc \
    icon.qrc
