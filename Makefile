EXE = main
CC = g++

SRC_DIR = ./src
OBJ_DIR = ./obj
EXE_DIR = ./bin

SRC = $(wildcard $(SRC_DIR)/*.cpp)
OBJ = constructors.o conversion.o draw.o frontgl.o main.o mainwindow.o moc_mainwindow.o oglwidget.o sidegl.o topgl.o transformations3D.o transformations2D.o

DEFINES       = -DQT_QML_DEBUG -DQT_WIDGETS_LIB -DQT_GUI_LIB -DQT_CORE_LIB
CFLAGS        = -pipe -g -Wall -W -D_REENTRANT -fPIC $(DEFINES)
CXXFLAGS      = -pipe -g -std=gnu++11 -Wall -W -D_REENTRANT -fPIC $(DEFINES)
INCPATH += -Iinclude -Iinclude/Qt5.7.0/5.7/gcc_64/include -Iinclude/Qt5.7.0/5.7/gcc_64/include/QtWidgets -Iinclude/Qt5.7.0/5.7/gcc_64/include/QtGui -Iinclude/Qt5.7.0/5.7/gcc_64/include/QtCore -Iinclude/Eigen -Iinclude/Qt5.7.0/5.7/gcc_64/mkspecs/linux-g++ -Iinclude/GL 
CFLAGS += -Wall
LDFLAGS += -Llib -Wl,-rpath,/home/aditya/product/include/Qt5.7.0/5.7/gcc_64/lib
LDLIBS += -lm -lGLU -lGL -lglut -L/home/aditya//product/include/Qt5.7.0/5.7/gcc_64/lib $(SUBLIBS) -lQt5Widgets -lQt5Gui -lQt5Core -lpthread -L/usr/lib64 -lm

.PHONY: all clean

all: $(EXE)

%.o: $(SRC_DIR)/%.cpp
	$(CC) -c $< $(CXXFLAGS) $(INCPATH) -o $(OBJ_DIR)/$@

moc_mainwindow.cpp: ./include/mainwindow.h
	./include/Qt5.7.0/5.7/gcc_64/bin/moc $(DEFINE) $(INCPATH) -I/usr/include/c++/5 -I/usr/include/x86_64-linux-gnu/c++/5 -I/usr/include/c++/5/backward -I/usr/lib/gcc/x86_64-linux-gnu/5/include -I/usr/local/include -I/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed -I/usr/include/x86_64-linux-gnu -I/usr/include ./include/mainwindow.h -o $(SRC_DIR)/moc_mainwindow.cpp

ui_mainwindow.h:./src/mainwindow.ui
	./include/Qt5.7.0/5.7/gcc_64/bin/uic ./src/mainwindow.ui -o ./include/ui_mainwindow.h

$(EXE): ui_mainwindow.h $(OBJ)
	 $(CC) $(LDFLAGS) $(OBJ_DIR)/*.o $(LDLIBS) -o $(EXE_DIR)/$@
	 @echo "Done build"
	 @echo "COP290 project : Engineering drawing package by Aditya Jain and Ankit Akash Jha"
clean:
	$(RM) $(OBJ_DIR)/*
	$(RM) $(EXE_DIR)/*


