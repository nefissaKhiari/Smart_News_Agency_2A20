QT       += core gui sql printsupport multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11



# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add_equipement.cpp \
    add_maintenance.cpp \
    connexion.cpp \
    equipement.cpp \
    gestion_wael.cpp \
    main.cpp \
    maintenance.cpp \
    mainwindow.cpp \
    mainwindowvideo.cpp

HEADERS += \
    add_equipement.h \
    add_maintenance.h \
    connexion.h \
    equipement.h \
    gestion_wael.h \
    maintenance.h \
    mainwindow.h \
    mainwindowvideo.h

FORMS += \
    add_equipement.ui \
    add_maintenance.ui \
    gestion_wael.ui \
    mainwindow.ui \
    mainwindowvideo.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resources.qrc