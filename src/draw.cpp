#include<GL/glut.h>
#include<primitive.h>
#include<classes.h>
#include<Eigen/Core>
#include<iostream>
#include<Eigen/Geometry>
#include<iostream>

using namespace std;

using namespace Eigen;

void view2D::drawView2D(void){
	
	
	
	
	//int n=this->n;
	edge2D temp;
	vertex2D* aTemp;
	vertex2D* bTemp;
	cout<<"s:"<<this->s<<endl;
	cout<<"h:"<<this->h<<endl;

//-----drawing solid lines-----------------------------------------------------------------------
	for(int i=0;i<this->s;i++){
        cout<<"i:"<<i<<endl;
		temp=(this->e[i]);
		aTemp=temp.a;
		bTemp=temp.b;
		cout<<"edge :("<<aTemp->x<<","<<aTemp->y<<")"<<endl;
		glBegin(GL_LINES);
    		glColor3f(0.0, 0.0,1.0);  /* blue */
    		glVertex2i(aTemp->x,aTemp->y);//-----------------------assuming that sideview is given i.e. x and y
    		glVertex2i(bTemp->x,bTemp->y);
  		glEnd();			
	}
//-----drawing hidden lines-----------------------------------------------------------------------
    cout<<"drawing hidden lines"<<endl;
	glPushAttrib(GL_ENABLE_BIT);
	glLineStipple(5, 0xAAAA);//change it for gap between disconnected lines
	glEnable(GL_LINE_STIPPLE);
	for(int i=0;i<this->h;i++){
  		temp=(this->hidden_edge[i]);
		aTemp=temp.a;
		bTemp=temp.b;
        cout<<"hidden edge"<<aTemp->id<<","<<bTemp->id<<endl;
        cout<<aTemp->id<<","<<aTemp->x<<","<<aTemp->y<<endl;
        cout<<bTemp->id<<","<<bTemp->x<<","<<bTemp->y<<endl;
        glBegin(GL_LINES);
    		glColor3f(0.0, 0.0,1.0);  /* blue */
            glVertex2i(aTemp->x,-1*aTemp->y);//-----------------------assuming that sideview is given i.e. x and y
            glVertex2i(bTemp->x,-1*bTemp->y);
  		glEnd();
	}
	glPopAttrib();


};

void view3D::drawView3D(void){};

void view3D::drawWireframe(void){
	
	edge3D temp;
	vertex3D *aTemp,*bTemp;
    //cout<<"in draw function"<<endl;
    vertex3D** uop=this->v;
    //std::cout<<uop[0]->x<<" "<<uop[0]->y<<" "<<uop[0]->z<<endl;
	for(int i=0;i<this->n;i++){
        //cout<<"working"<<endl;
		temp = this->e[i];
        //cout<<"yes0"<<endl;
		aTemp=temp.a;
		bTemp=temp.b;
        //cout<<"yes2"<<endl;
        //cout<<temp.a->z<<endl;
        //cout<<temp.b->z<<endl;
		glBegin(GL_LINES);
		  glColor3f(1.0,0.0,0.0);
		  glVertex3f(temp.a->x,temp.a->y,temp.a->z);
		  glVertex3f(bTemp->x,bTemp->y,bTemp->z);
		glEnd();		
	}
	
}

plane getPlane(Face* a)
{
 vertex3D *t1,*t2,*t3;
 t1=a->p[0];
 t2=a->p[1];
 t2=a->p[2];
 cout<<"op1"<<endl;
 cout<<"inside plane "<<t1->x<<","<<t2->x<<","<<t3->x<<endl;
 Vector3d v((t1->x-t2->x),(t1->y-t2->y),(t1->z-t2->z));
 Vector3d w((t3->x-t2->x),(t3->y-t2->y),(t3->z-t2->z));
 Vector3d cp(((v(1)*w(2))-(v(2)*w(1))),((v(2)*w(0))-(v(0)*w(2))),((v(0)*w(1))-(v(1)*w(0))));
 double dt;
 dt=(-1*((cp(0)*t1->x)+(cp(1)*t1->y)+(cp(2)*t1->z)));
 plane answer(cp(0),cp(1),cp(2),dt);
 cout<<"inside plane"<<cp(0)<<","<<cp(1)<<","<<cp(2)<<endl;
 return answer;
}


