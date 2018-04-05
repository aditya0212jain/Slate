#include "primitive.h"
#include "classes.h"
#include<iostream>	
#include<string>
#include<Eigen/Core>
#include<GL/glut.h>


using namespace std;
using namespace Eigen;

// ----------------------------------------------------------
// Global Variables
// ----------------------------------------------------------
double rotate_y=0; 
double rotate_x=0;
double posx=0.0,posy=0.0,posz=0.0,lookx=0.0,looky=0.0,lookz=-1.0,upx=0.0,upy=1.0,upz=0.0;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//------------------------------FUNCTIONS FOR OPENGL DISPLAY ---------------------------------------------------------------------------------------
	
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

view2D toptest;
view3D toptest3D;
/*
void
reshape(int w, int h)
{
  /* Because Gil specified "screen coordinates" (presumably with an
     upper-left origin), this short bit of code sets up the coordinate
     system to correspond to actual window coodrinates.  This code
     wouldn't be required if you chose a (more typical in 3D) abstract
     coordinate system. */

  //glViewport(0, 0, w, h);       /* Establish viewing area to cover entire window. */
  //glMatrixMode(GL_PROJECTION);  /* Start modifying the projection matrix. */
  //glLoadIdentity();             /* Reset project matrix. */
  //glOrtho(0, w, 0, h, -1, 1);   /* Map abstract coords directly to window coords. */
  ///glScalef(1, -1, 1);           /* Invert Y axis so increasing Y goes down. */
  //glTranslatef(0, -h, 0);       /* Shift origin up to upper-left corner. */
//}*/

void
display(void)
{
  glClear ( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
  //glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
  //glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
 // glLoadIdentity();
	
// Rotate when user changes rotate_x and rotate_y
  glRotatef( rotate_x, 1.0, 0.0, 0.0 );
  glRotatef( rotate_y, 0.0, 1.0, 0.0 );
	
//  toptest.drawView2D();
	cout<<"yes1"<<endl;
   toptest3D.drawWireframe();

   
  glFlush();  /* Single buffered, so needs a flush. */

	  glutSwapBuffers ( );
}

/*
void mouseMove(int x, int y) { 	

         // this will only be true when the left button is down
         if (xOrigin >= 0) {

		// update deltaAngle
		deltaAngle = (x - xOrigin) * 0.001f;

		// update camera's direction
		lx = sin(angle + deltaAngle);
		lz = -cos(angle + deltaAngle);
	}
}

void mouseButton(int button, int state, int x, int y) {

	// only start motion if the left button is pressed
	if (button == GLUT_LEFT_BUTTON) {

		// when the button is released
		if (state == GLUT_UP) {
			angle += deltaAngle;
			xOrigin = -1;
		}
		else  {// state = GLUT_DOWN
			xOrigin = x;
		}
	}
}*/

void specialKeys( int key, int x, int y ) {
 
  //  Right arrow - increase rotation by 5 degree
  if (key == GLUT_KEY_RIGHT)
    rotate_y += 0.1;
 
  //  Left arrow - decrease rotation by 5 degree
  else if (key == GLUT_KEY_LEFT)
    rotate_y -= 0.1;
 
  else if (key == GLUT_KEY_UP)
    rotate_x += 0.1;
 
  else if (key == GLUT_KEY_DOWN)
    rotate_x -= 0.1;


 
  //  Request display update
  glutPostRedisplay();
 
}

void keyBo(unsigned char key,int x, int y){

cout<<key<<endl;
cout<<posy<<endl;
  if (key == 97)
    lookx += 0.10;
  else if (key == 's')
    lookx -= 0.10;
  else if (key == 'd')
    looky += 0.10;
  else if (key == 'f')
    looky -= 0.10;
  else if (key == 'g')
    lookz += 0.10;
  else if (key == 'h')
    lookz -= 0.10;

  gluLookAt(posx,posy,posz,
		    lookx,looky,lookz,
		    upx,upy,upz);

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//------------------------------MAIN FUNCTION ---------------------------------------------------------------------------------------
	
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



int main(int argc, char **argv){
	vertex2D aditya,goku;
	aditya.x = 2;
	aditya.y = 3;
	aditya.id = "Aditya";
	goku.x = 4;
	goku.y= 5;
	goku.id ="Goku";
	edge2D eTemp(&aditya,&goku);
	vertex2D *r,*mT,*adi,*gok;
	adi=&aditya;
	gok=&goku;
	r=eTemp.a;
	mT=eTemp.b;
	cout<<"adi:"<<adi<<endl;
	cout<<"gok:"<<gok<<endl;
	cout<<"r:"<<r<<endl;
	cout<<"mT:"<<mT<<endl;
	cout<<"vertex 1 of edge(aditya):"<<r->x<<","<<r->y<<endl;
	cout<<"vertex 2 of edge(goku):"<<mT->x<<","<<mT->y<<endl;
	goku.x = 0;
	aditya.y = 100;
	cout<<"After vertex 1 of edge(aditya):"<<adi->x<<","<<adi->y<<endl;
	cout<<"After vertex 2 of edge(goku):"<<mT->x<<","<<mT->y<<endl;
	adi->y=100;
	gok->x=0;
	cout<<"After vertex 1 of edge(aditya):"<<r->x<<","<<r->y<<endl;
	cout<<"After vertex 2 of edge(goku):"<<mT->x<<","<<mT->y<<endl;		
//	cout<<"vertex aditya is ("<<aditya.x<<","<<aditya.y<<")"<<endl;
//	cout<<"id is: "<<aditya.id<<endl;
	
//--------------------------------------------------------------------------------------------
	Matrix3d m;
	m<<1,2,3,4,5,6,7,8,9;
	cout<<m<<endl;
	Vector3d v(1,2,3);
	cout<<v<<endl;
	RowVector3d v1(4.5,5,6);
	cout<<v1<<endl;
	cout<<v1*m<<endl;
//-------------------------------Checking view2D ------------------------------------------------------------------
	cout<<"testing"<<endl;
	/*vertex2D a(50,50,"A"),b(250,50,"B"),c(50,250,"C"),d(250,250,"D");
	vertex2D** v_array=new vertex2D*[4];
	v_array[0]=&a;
	v_array[1]=&b;
	v_array[2]=&c;
	v_array[3]=&d;	
	edge2D one(v_array[0],v_array[1]),two(v_array[1],v_array[2]),three(v_array[2],v_array[3]),four(v_array[3],v_array[0]);
	edge2D e_array[4];
	e_array[0]=one;
	e_array[1]=two;	
	e_array[2]=three;
	e_array[3]=four;
	
	view2D trans_test(v_array,e_array,4,4);
	toptest = trans_test;//change
	//--------Printing initial box-------------------
	cout<<"--------Printing initial box-------------------"<<endl;
	for(int i=0;i<4;i++){
		cout<<"Vertex :("<<toptest.v[i]->x<<","<<toptest.v[i]->y<<") id:"<<toptest.v[i]->id<<endl;
	}
	cout<<"starting translate"<<endl;
	toptest.translate2D(0,0);
	//-----------Printing after translating by (1,1)------------------
	cout<<"--------Printing after translation-------------------"<<endl;
	for(int i=0;i<4;i++){
		cout<<"Vertex :("<<toptest.v[i]->x<<","<<toptest.v[i]->y<<") id:"<<toptest.v[i]->id<<endl;
	}
	
	//----------Printing after scaling by (2,3)---------------------
	toptest.scaling2D(1,1);
	cout<<"--------Printing after scaling by (2,3)-------------------"<<endl;
	for(int i=0;i<4;i++){
		cout<<"Vertex :("<<toptest.v[i]->x<<","<<toptest.v[i]->y<<") id:"<<toptest.v[i]->id<<endl;
	}
	//----------Printing after rotation by (90degrees counterclockwise)---------------------
	toptest.rotation2D(0);
	cout<<"--------Printing after rotation by (90)-------------------"<<endl;
	for(int i=0;i<4;i++){
		cout<<"Vertex :("<<toptest.v[i]->x<<","<<toptest.v[i]->y<<") id:"<<toptest.v[i]->id<<endl;
	}*/
	
	//ed[0](a,b);
	//ed[1](b,c);
	//ed[2](c,d);
	//ed[3](d,a);

//////////////////////////////pyramid

	vertex3D** v_array=new vertex3D*[4];
	v_array[0]=new vertex3D(0.50,0.50,0,"A");
	v_array[1]=new vertex3D(0.50,1.50,0,"B");
	v_array[2]=new vertex3D(1.50,1.00,0,"C");
	v_array[3]=new vertex3D(1.00,1.00,0.750,"D");
	
	edge3D a(v_array[0],v_array[1]),b(v_array[2],v_array[1]),c(v_array[0],v_array[2]),d(v_array[0],v_array[3]),e(v_array[3],v_array[1]),f(v_array[3],v_array[2]);
	
	edge3D e_array[6];
	e_array[0]=a;
	e_array[1]=b;
	e_array[2]=c;
	e_array[3]=d;
	e_array[4]=e;
	e_array[5]=f;

	view3D pyramid_3D(v_array,e_array,6);
	pyramid_3D.nv=4;	
	toptest3D = pyramid_3D;	
	cout<<e_array[0].a->id<<endl;
	toptest3D.translate3D(-0.2,-0.5,0);
	cout<<pyramid_3D.v[0]->x<<endl;
	for(int i=0;i<4;i++){

		cout<<"Vertex :("<<toptest3D.v[i]->x<<","<<toptest3D.v[i]->y<<","<<toptest3D.v[i]->z<<") id:"<<toptest3D.v[i]->id<<endl;
	}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//------------------------------DRAWING WITH OPENGL , OPENING OPENGL WINDOW ---------------------------------------------------------------------------------------
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
       	  glutInit(&argc, argv);
//	  glutInitWindowPosition(500, 500);
	  glutCreateWindow("Slate by Jain and Ankit Akash Jha");
	  cout<<"yes"<<endl;
	  glutInitWindowSize ( 500, 500 );
          //glutInitWindowPosition ( 0, 0 ); 
	  //  Request double buffered true color window with Z-buffer
  	  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	  //glEnable(GL_DEPTH_TEST);
	  glutDisplayFunc(display);
	  //glutReshapeFunc(reshape);
	  //glutMouseFunc(mouseButton);
	  //glutMotionFunc(mouseMove);

	  glutSpecialFunc(specialKeys);
	  glutKeyboardFunc(keyBo);
	  glEnable ( GL_DEPTH_TEST );
	  glutMainLoop();




	return 0;
	}
