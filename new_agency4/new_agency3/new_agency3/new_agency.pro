QT       += core gui sql network charts printsupport multimedia multimediawidgets
QT       +=serialport

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
    DuMesengerConnectionDialog.cpp \
    add_archive.cpp \
    add_article.cpp \
    add_carte.cpp \
    add_client.cpp \
    add_commande.cpp \
    add_equipement.cpp \
    add_maintenance.cpp \
    add_points.cpp \
    add_vente.cpp \
    archive.cpp \
    archiver_article.cpp \
    arduino.cpp \
    article.cpp \
    carte.cpp \
    client.cpp \
    commande.cpp \
    connexion.cpp \
    emp.cpp \
    employesmission.cpp \
    equipement.cpp \
    exportexcelobject.cpp \
    gestion_abir.cpp \
    gestion_aziz.cpp \
    gestion_islem.cpp \
    gestion_wael.cpp \
    gestion_zouhour.cpp \
    main.cpp \
    maintenance.cpp \
    mainwindow.cpp \
    mainwindowvideo.cpp \
    missions.cpp \
    qcustomplot.cpp \
    smtp.cpp \
    stat_mission.cpp \
    vente.cpp \
    widget.cpp

HEADERS += \
    DuMesengerConnectionDialog.h \
    add_archive.h \
    add_article.h \
    add_carte.h \
    add_client.h \
    add_commande.h \
    add_equipement.h \
    add_maintenance.h \
    add_points.h \
    add_vente.h \
    archive.h \
    archiver_article.h \
    arduino.h \
    article.h \
    carte.h \
    client.h \
    commande.h \
    connexion.h \
    emp.h \
    employesmission.h \
    equipement.h \
    exportexcelobject.h \
    gestion_abir.h \
    gestion_aziz.h \
    gestion_islem.h \
    gestion_wael.h \
    gestion_zouhour.h \
    maintenance.h \
    mainwindow.h \
    mainwindowvideo.h \
    missions.h \
    qcustomplot.h \
    smtp.h \
    stat_mission.h \
    vente.h \
    widget.h

FORMS += \
    DuMesengerConnectionDialog.ui \
    add_archive.ui \
    add_article.ui \
    add_carte.ui \
    add_client.ui \
    add_commande.ui \
    add_equipement.ui \
    add_maintenance.ui \
    add_points.ui \
    add_vente.ui \
    archiver_article.ui \
    gestion_abir.ui \
    gestion_aziz.ui \
    gestion_islem.ui \
    gestion_wael.ui \
    gestion_zouhour.ui \
    mainwindow.ui \
    mainwindowvideo.ui \
    stat_mission.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc

