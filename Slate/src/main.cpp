#include "primitive.h"
#include "classes.h"
#include<iostream>	
#include<string>
#include<Eigen/Core>
#include<GL/glut.h>


using namespace std;
using namespace Eigen;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//------------------------------FUNCTIONS FOR OPENGL DISPLAY ---------------------------------------------------------------------------------------
	
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

view2D toptest;
void
reshape(int w, int h)
{
  /* Because Gil specified "screen coordinates" (presumably with an
     upper-left origin), this short bit of code sets up the coordinate
     system to correspond to actual window coodrinates.  This code
     wouldn't be required if you chose a (more typical in 3D) abstract
     coordinate system. */

  glViewport(0, 0, w, h);       /* Establish viewing area to cover entire window. */
  glMatrixMode(GL_PROJECTION);  /* Start modifying the projection matrix. */
  glLoadIdentity();             /* Reset project matrix. */
  glOrtho(0, w, 0, h, -1, 1);   /* Map abstract coords directly to window coords. */
  glScalef(1, -1, 1);           /* Invert Y axis so increasing Y goes down. */
  glTranslatef(0, -h, 0);       /* Shift origin up to upper-left corner. */
}

void
display(void)
{
  glClear(GL_COLOR_BUFFER_BIT);
  glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

  toptest.drawView2D();

  glFlush();  /* Single buffered, so needs a flush. */
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//------------------------------MAIN FUNCTION ---------------------------------------------------------------------------------------
	
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



int main(int argc, char **argv){
	vertex2D aditya;
	aditya.x = 2;
	aditya.y = 3;
	aditya.id = "Aditya";
	cout<<"vertex aditya is ("<<aditya.x<<","<<aditya.y<<")"<<endl;
	cout<<"id is: "<<aditya.id<<endl;
	
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
	vertex2D a(50,50,"A"),b(250,50,"B"),c(50,250,"C"),d(250,250,"D");
	vertex2D v_array[4];
	v_array[0]=a;
	v_array[1]=b;
	v_array[2]=c;
	v_array[3]=d;	
	edge2D one(a,b),two(b,c),three(c,d),four(d,a);
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
		cout<<"Vertex :("<<toptest.v[i].x<<","<<toptest.v[i].y<<") id:"<<toptest.v[i].id<<endl;
	}
	toptest.translate2D(1,1);
	//-----------Printing after translating by (1,1)------------------
	cout<<"--------Printing after translation-------------------"<<endl;
	for(int i=0;i<4;i++){
		cout<<"Vertex :("<<toptest.v[i].x<<","<<toptest.v[i].y<<") id:"<<toptest.v[i].id<<endl;
	}
	
	//----------Printing after scaling by (2,3)---------------------
	toptest.scaling2D(50,50);
	cout<<"--------Printing after scaling by (2,3)-------------------"<<endl;
	for(int i=0;i<4;i++){
		cout<<"Vertex :("<<toptest.v[i].x<<","<<toptest.v[i].y<<") id:"<<toptest.v[i].id<<endl;
	}
	//----------Printing after rotation by (90degrees counterclockwise)---------------------
	toptest.rotation2D(90);
	cout<<"--------Printing after rotation by (90)-------------------"<<endl;
	for(int i=0;i<4;i++){
		cout<<"Vertex :("<<toptest.v[i].x<<","<<toptest.v[i].y<<") id:"<<toptest.v[i].id<<endl;
	}
	
	//ed[0](a,b);
	//ed[1](b,c);
	//ed[2](c,d);
	//ed[3](d,a);
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//------------------------------DRAWING WITH OPENGL , OPENING OPENGL WINDOW ---------------------------------------------------------------------------------------
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
       	  glutInit(&argc, argv);
	  glutInitWindowPosition(500, 500);
	  glutCreateWindow("Slate by Jain and Ankit Akash Jha");
	  glutDisplayFunc(display);
	  glutReshapeFunc(reshape);
	  glutMainLoop();




	return 0;
	}
