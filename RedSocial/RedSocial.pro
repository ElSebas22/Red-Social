QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cuenta.cpp \
    ingresarform.cpp \
    listaenlazada.cpp \
    main.cpp \
    menuprincipal.cpp \
    nodo.cpp \
    redsocial.cpp \
    redsocialdata.cpp \
    registrarseform.cpp

HEADERS += \
    VariablesGlobales.h \
    cuenta.h \
    ingresarform.h \
    listaenlazada.h \
    menuprincipal.h \
    nodo.h \
    redsocial.h \
    redsocialdata.h \
    registrarseform.h

FORMS += \
    ingresarform.ui \
    menuprincipal.ui \
    redsocial.ui \
    registrarseform.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES +=
