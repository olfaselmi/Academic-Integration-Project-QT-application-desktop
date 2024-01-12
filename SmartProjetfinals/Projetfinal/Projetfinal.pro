QT       += core gui sql

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
    abonneforfaits.cpp \
    cadeau.cpp \
    chauffeur.cpp \
    circuit.cpp \
    clients.cpp \
    connection.cpp \
    employee.cpp \
    horaire.cpp \
    main.cpp \
    mainwindow.cpp \
    moyenT.cpp \
    moyenmain.cpp \
    personnes.cpp \
    reseau.cpp \
    reseau_circuit.cpp \
    reservation.cpp \
    rreservations.cpp \
    smart_abonnement.cpp

HEADERS += \
    abonneforfaits.h \
    cadeau.h \
    chauffeur.h \
    circuit.h \
    clients.h \
    connection.h \
    employee.h \
    horaire.h \
    mainwindow.h \
    moyenT.h \
    moyenmain.h \
    personnes.h \
    reseau.h \
    reseau_circuit.h \
    reservation.h \
    rreservations.h \
    smart_abonnement.h

FORMS += \
    mainwindow.ui \
    moyenmain.ui \
    personnes.ui \
    reseau_circuit.ui \
    rreservations.ui \
    smart_abonnement.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
