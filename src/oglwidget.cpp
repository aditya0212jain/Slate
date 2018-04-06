#include "oglwidget.h"
#include "classes.h"
#include<iostream>
#include <QKeyEvent>

OGLWidget::OGLWidget(QWidget *parent)
    : QOpenGLWidget(parent)
{

}

OGLWidget::~OGLWidget()
{

}

double rotate_y=0,dx=0,dy=0;
double rotate_x=0;
QPoint lastPos;

void OGLWidget::initializeGL()
{
    glClearColor(0,0,0,1);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHT0);
    glEnable(GL_LIGHTING);
    //glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
    glEnable(GL_COLOR_MATERIAL);


}

void OGLWidget::mousePressEvent(QMouseEvent *event){
    cout<<"start"<<endl;
    lastPos = event->pos();

}

void OGLWidget::mouseMoveEvent(QMouseEvent *event){
    cout<<"yeahhh"<<endl;
    dy = (event->pos().x()-lastPos.x())/(10.0);
    dx = (event->pos().y()-lastPos.y())/(10.0);
    this->update();
}

void OGLWidget::mouseReleaseEvent(QMouseEvent *event){
    cout<<"yo"<<endl;
    this->update();
}

//void specialKeys( int key, int x, int y ) {

//  //  Right arrow - increase rotation by 5 degree
//  if (key == GLUT_KEY_RIGHT)
//    rotate_y += 5;

//  //  Left arrow - decrease rotation by 5 degree
//  else if (key == GLUT_KEY_LEFT)
//    rotate_y -= 5;

//  else if (key == GLUT_KEY_UP)
//    rotate_x += 5;

//  else if (key == GLUT_KEY_DOWN)
//    rotate_x -= 5;

//  //  Request display update
//  glutPostRedisplay();

//}

void OGLWidget::keyPressEvent(QKeyEvent *event){
    if(event->key()==Qt::Key_Left){
        dx=dx-0.5;
        cout<<"yeah2"<<endl;
    }else if (event->key()==Qt::Key_Right){
        dx=dx+0.5;
        cout<<"yeah3"<<endl;
    }
    cout<<"baby"<<endl;
    this->update();
}

void OGLWidget::paintGL()
{


    //vertex2D a(1,2,"a");
    //vertex3D b(1,2,3,"b");
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    //glutSpecialFunc(specialKeys);
    // Rotate when user changes rotate_x and rotate_y
    glRotatef( dx, 1.0, 0.0, 0.0 );
    glRotatef( dy, 0.0, 1.0, 0.0 );
     //toptest.drawWireframe();
     //model->view_threeD.drawWireframe();
     mm->drawWireframe();
     glFlush();  /* Single buffered, so needs a flush. */

      //   glutSwapBuffers ( );
//    glBegin(GL_TRIANGLES);
//        glColor3f(1.0, 0.0, 0.0);
//        glVertex3f(-0.25, -0.5, 0);
//        glColor3f(0.0, 1.0, 0.0);
//        glVertex3f( 0.5, -0.5, 0);
//        glColor3f(0.0, 0.0, 1.0);
//        glVertex3f( 0.0,  0.5, 0);
//    glEnd();
}


void OGLWidget::resizeGL(int w, int h)
{
    glViewport(0,0,w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45, (float)w/h, 0.01, 100.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(0,0,7,0,0,0,0,1,0);
}
