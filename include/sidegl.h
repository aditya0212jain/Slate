#ifndef SIDEGL_H
#define SIDEGL_H


#include <QWidget>
#include <QOpenGLWidget>
//#include <gl/GLU.h>
//#include <gl/GL.h>
#include<GL/glut.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/freeglut.h>
#include<GL/freeglut_ext.h>
#include<GL/freeglut_std.h>
#include"classes.h"
#include"primitive.h"

class SideGL : public QOpenGLWidget
{
public:
    SideGL(QWidget *parent =0);
    ~SideGL();

//protected:
    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();
    void paintGL(view3D a);
};

#endif // SIDEGL_H
