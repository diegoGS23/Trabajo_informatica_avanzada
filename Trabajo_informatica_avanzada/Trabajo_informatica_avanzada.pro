QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    administrador.cpp \
    alimentacion.cpp \
    animal.cpp \
    empleado.cpp \
    main.cpp \
    mainappwindow.cpp \
    mainwindow.cpp \
    recinto.cpp \
    santuario.cpp \
    usuario.cpp

HEADERS += \
    administrador.h \
    alimentacion.h \
    animal.h \
    empleado.h \
    mainappwindow.h \
    mainwindow.h \
    recinto.h \
    santuario.h \
    usuario.h

FORMS += \
    mainappwindow.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
