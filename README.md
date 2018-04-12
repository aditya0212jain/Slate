# Slate

<h1 align="center">
  <br>
  <img src="https://preview.ibb.co/gNOfEx/logo.jpg" alt="Slate" width="200">
</h1>

Slate is a desktop app :computer: which runs in linux systems. Slate boosts mechanical engineers productivity :rocket: by automating engineering drawing activities.
It has the features for conversion as well as transformation of any object :raised_hands:.

<!-- # Demo
<br>


<img src="https://j.gifs.com/BBqE8Y.gif"> -->

## Installation

1. Download the repositary<br>
2. In the make file, look for the line
```sh
LDFLAGS += -Llib -Wl,-rpath,/home/aditya/product/libs/Qt5.7.0/5.7/gcc_64/lib
LDLIBS += -lm -lGLU -lGL -lglut -L/home/aditya//product/libs/Qt5.7.0/5.7/gcc_64/lib $(SUBLIBS) -lQt5Widgets -lQt5Gui -lQt5Core -lpthread -L/usr/lib64 -lm
```
And update the directory location according to your system.<br>
3. run make in the terminal<br>
4. Start the app by running `main` in bin folder

## Dependencies

### For OpenGL
```sh
$ sudo apt-get install mesa-utils
$ sudo apt-get install freeglut3-dev
```

## Features

- [x] Converts 2D projections to 3D
- [x] Makes orthographic projection for a 3D object
- [x] Functionality for Translation, Rotations, Reflection and Resize in 3D view 
- [x] Mouse dragging change in camera view without affecting object

## Usage
<kbd>ctrl + O</kbd> - Open 3D<br>
<kbd>ctrl + shift + O</kbd> - Open 2D

## Built with
- [Qt5.7](https://www1.qt.io/qt5-7/)<br>
- [Eigen](http://eigen.tuxfamily.org/)<br>


## License

MIT  © [Aditya Jain]
