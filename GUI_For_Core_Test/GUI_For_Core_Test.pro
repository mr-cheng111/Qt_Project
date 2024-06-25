QT       += core gui \
    quick \
    graphs \
    charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    get_pic_dir.cpp \
    graph_for_input.cpp \
    graph_pie.cpp \
    main.cpp \
    mainwindow.cpp
HEADERS += \
    get_pic_dir.h \
    graph_for_input.h \
    graph_pie.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

TRANSLATIONS += \
    GUI_For_Core_Test_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
