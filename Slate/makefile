LDIR = ./lib
ODIR = ./build
IDIR = ./include
SDIR = ./src
BDIR = ./bin

CC = gcc
CFLAG = -I$(IDIR)
LIBS = -lm

_DEPS = classes.h primitive.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o conversion.o transformations2D.o transformations3D.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

_BUILDS = main conversion transformations2D transformations3D
BUILDS = $(patsubst %,$(BDIR)/%,$(_BUILDS))

$(ODIR)/%.o: $(SDIR)/%.cpp $(ODIR)/$(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

ROF = $(ODIR)/*.o	

all: $(BUILDS)
	@echo "Building...."

$(BDIR)/%: ROF
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)
