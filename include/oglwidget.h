#ifndef OGLWIDGET_H
#define OGLWIDGET_H

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

class OGLWidget : public QOpenGLWidget
{
public:
    OGLWidget(QWidget *parent = 0);
    ~OGLWidget();

//protected:
    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();
    void paintGL(view3D a);
    void mouseMoveEvent(QMouseEvent *event);
    void keyPressEvent(QKeyEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
};

//extern OGLWidget* openGLWidget;

#endif // OGLWIDGET_H
