TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    funcs.cpp \
    main.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    funcs.h

