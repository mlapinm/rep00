# ----------------------------------------------------
# This file is generated by the Qt Visual Studio Add-in.
# ------------------------------------------------------

TEMPLATE = app
TARGET = diag
DESTDIR = ./debug
QT += core gui network qaxserver qaxcontainer
CONFIG += debug console
DEFINES += _WINDOWS QT_LARGEFILE_SUPPORT QT_DLL QT_NETWORK_LIB QT_HAVE_MMX QT_HAVE_3DNOW QT_HAVE_SSE QT_HAVE_MMXEXT QT_HAVE_SSE2
INCLUDEPATH += . \
    ./debug \
    . \
    ../../../../Qt/4.7.3/mkspecs/default
DEPENDPATH += .
MOC_DIR += debug
OBJECTS_DIR += debug
UI_DIR += .
RCC_DIR += ./GeneratedFiles
include(diag.pri)