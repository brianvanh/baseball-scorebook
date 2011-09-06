TEMPLATE = app
QT = gui core
CONFIG += qt warn_on console debug_and_release
DESTDIR = bin
OBJECTS_DIR = build
MOC_DIR = build
UI_DIR = build
FORMS = ui/mainwindow.ui ui/gameoptions.ui
HEADERS = src/mainwindowimpl.h \
 src/game.h \
 src/gameAttributes.h \
 src/player.h \
 src/team.h
SOURCES = src/mainwindowimpl.cpp \
 src/main.cpp \
 src/game.cpp \
 src/gameAttributes.cpp \
 src/player.cpp \
 src/team.cpp
