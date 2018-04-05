#include <frontgl.h>
#include "classes.h"
#include<iostream>

FrontGL::FrontGL(QWidget *parent)
    : QOpenGLWidget(parent)
{

}

FrontGL::~FrontGL()
{

}


void FrontGL::initializeGL()
{
    glClearColor(0,0,0,1);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHT0);
    glEnable(GL_LIGHTING);
    //glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
    glEnable(GL_COLOR_MATERIAL);


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

void FrontGL::paintGL()
{


    //vertex2D a(1,2,"a");
    //vertex3D b(1,2,3,"b");
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    //glutSpecialFunc(specialKeys);
    // Rotate when user changes rotate_x and rotate_y
    // glRotatef( rotate_x, 1.0, 0.0, 0.0 );
    // glRotatef( rotate_y, 0.0, 1.0, 0.0 );
    //model->frontView()=orthographicViews(model,1);
    cout<<"in front"<<endl;
    fvg->drawView2D();
    // toptest.drawWireframe();

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

void FrontGL::paintGL(view3D a)
{


    //vertex2D a(1,2,"a");
    //vertex3D b(1,2,3,"b");
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    //glutSpecialFunc(specialKeys);
    // Rotate when user changes rotate_x and rotate_y
    // glRotatef( rotate_x, 1.0, 0.0, 0.0 );
    // glRotatef( rotate_y, 0.0, 1.0, 0.0 );
    std::cout<<"in custom paint"<<endl;
    vertex3D** uop=a.v;
    std::cout<<uop[0]->x<<" "<<uop[0]->y<<" "<<uop[0]->z<<endl;
     a.drawWireframe();

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


void FrontGL::resizeGL(int w, int h)
{
    glViewport(0,0,w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45, (float)w/h, 0.01, 100.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(0,0,5,0,0,0,0,1,0);
}
