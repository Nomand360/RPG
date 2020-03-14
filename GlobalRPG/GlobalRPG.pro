TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
LIBS += -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio -lsfml-network

SOURCES += \
        game.cpp \
        main.cpp \
        states.cpp

HEADERS += \
    game.h \
    states.h
