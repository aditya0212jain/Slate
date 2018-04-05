EXE = main
CC = g++

SRC_DIR = ./src
OBJ_DIR = ./obj
EXE_DIR = ./bin

SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = main_src.o conversion.o transformations2D.o transformations3D.o draw.o constructors.o

CPPFLAGS += -Iinclude -Iinclude/Eigen
CFLAGS += -Wall
LDFLAGS += -Llib
LDLIBS += -lm -lGLU -lGL -lglut

.PHONY: all clean

all: $(EXE)

%.o: $(SRC_DIR)/%.cpp
	$(CC) -c $< $(CFLAGS) $(CPPFLAGS) -o $(OBJ_DIR)/$@

$(EXE): $(OBJ)
	 $(CC) $(LDFLAGS) $(OBJ_DIR)/*.o $(LDLIBS) -o $(EXE_DIR)/$@
	 @echo "Done build"
	 @echo "COP290 project : Engineering drawing package by Aditya Jain and Ankit Akash Jha"
clean:
	$(RM) $(OBJ_DIR)/*
	$(RM) $(EXE_DIR)/*


