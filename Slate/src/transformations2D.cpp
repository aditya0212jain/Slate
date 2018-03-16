#include "classes.h"
#include "primitive.h"
#include<Eigen/Core>
#include<iostream>
#include<math.h>

#define PI 3.14159265
using namespace Eigen;
using namespace std;

void view2D::translate2D(double x,double y){
	Matrix3d trans2D;
	trans2D<<1,0,0,
		 0,1,0,
		 x,y,1;
	int i;
	vertex2D u;
	vertex2D p;
	for(i=0;i<this->n;i++){
		u=this->v[i];
		RowVector3d b(u.x,u.y,1);
		RowVector3d t;
		t=b*trans2D;
		p.x=t(0);
		p.y=t(1);
		p.id=u.id;
		this->v[i]=p;
		//cout<<"Inside function ("<<t(0)<<endl;
	}

};

void view2D::scaling2D(double x,double y){
	Matrix3d trans2D;
	trans2D<<x,0,0,
		 0,y,0,
		 0,0,1;
	int i;
	vertex2D u;
	vertex2D p;
	for(i=0;i<this->n;i++){
		u=this->v[i];
		RowVector3d b(u.x,u.y,1);
		RowVector3d t;
		t=b*trans2D;
		p.x=t(0);
		p.y=t(1);
		p.id=u.id;
		this->v[i]=p;
		//cout<<"Inside function ("<<t(0)<<endl;
	}
};

void view2D::rotation2D(double c){
	double sin_value,cos_value;
	sin_value = sin(c*PI/180);
	cos_value = cos(c*PI/180);
	Matrix3d trans2D;
	trans2D<<cos_value,(-1*sin_value),0,
		 sin_value,cos_value,0,
		 0,0,1;
	int i;
	vertex2D u;
	vertex2D p;
	for(i=0;i<this->n;i++){
		u=this->v[i];
		RowVector3d b(u.x,u.y,1);
		RowVector3d t;
		t=b*trans2D;
		p.x=t(0);
		p.y=t(1);
		p.id=u.id;
		this->v[i]=p;
		//cout<<"Inside function ("<<t(0)<<endl;
	}



};
