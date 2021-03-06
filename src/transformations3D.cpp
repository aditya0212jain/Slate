#include "classes.h"
#include "primitive.h"
#include<Eigen/Core>
#include<iostream>

#define PI 3.14159265
using namespace Eigen;
using namespace std;
	
void view3D::translate3D(double x,double y,double z){
    std::cout<<"inside translate3"<<endl;
	Matrix4d trans3D;
	trans3D<<1,0,0,0,
		 0,1,0,0,
		 0,0,1,0,
		 x,y,z,1;
	vertex3D *u;
    for(int i=0;i<this->nv;i++){
        std::cout<<"loop for i:"<<i<<endl;
		vertex3D* p=new vertex3D();
		u=this->v[i];
        std::cout<<"w1"<<endl;
		RowVector4d b(u->x,u->y,u->z,1);
		RowVector4d t;
		t=b*trans3D;
        u->x=t(0);
        u->y=t(1);
        u->z=t(2);
        //u->id=u->id;
        std::cout<<"w2"<<endl;
        //this->v[i]=p;
        //std::cout<<"w3"<<endl;

	}			
    std::cout<<"o"<<endl;
}


void view3D::scaling3D(double x,double y,double z){
	Matrix4d trans3D;
	trans3D<<x,0,0,0,
		 0,y,0,0,
		 0,0,z,0,
		 0,0,0,1;
	vertex3D *u;
    for(int i=0;i<this->nv;i++){
		vertex3D* p=new vertex3D();
		u=this->v[i];
		RowVector4d b(u->x,u->y,u->z,1);
		RowVector4d t;
		t=b*trans3D;
        u->x=t(0);
        u->y=t(1);
        u->z=t(2);
        //u->id=u->id;
        //this->v[i]=p;

	}			
};


void view3D::reflection3D(int b){
	Matrix4d trans3Dx,trans3Dy,trans3Dz,trans3D;
	trans3Dx<<-1,0,0,0,
		  0,1,0,0,
		  0,0,1,0,
		  0,0,0,1;
	trans3Dy<<1,0,0,0,
		  0,-1,0,0,
		  0,0,1,0,
		  0,0,0,1;	
	trans3Dz<<-1,0,0,0,
		  0,1,0,0,
		  0,0,-1,0,
		  0,0,0,1;	
	if(b==0){
		trans3D=trans3Dx;}// b =0 for x=0 , b=1 for y=0, b=2 for z=0
	else if (b==1){
		trans3D=trans3Dy;}
	else if(b==2){
		trans3D=trans3Dz;}
	vertex3D *u;
    for(int i=0;i<this->nv;i++){
		vertex3D* p=new vertex3D();
		u=this->v[i];
		RowVector4d b(u->x,u->y,u->z,1);
		RowVector4d t;
		t=b*trans3D;
        u->x=t(0);
        u->y=t(1);
        u->z=t(2);
        //u->id=u->id;
        //this->v[i]=p;

	}



};

	
void view3D::rotation3D(double a,int b){
	double sin_value,cos_value;
	sin_value = sin(a*PI/180);
	cos_value = cos(a*PI/180);
	Matrix4d trans3Dx,trans3Dy,trans3Dz,trans3D;
	trans3Dx<<1,0,0,0,
		  0,cos_value,sin_value,0,
		  0,(-1*sin_value),cos_value,0,
		  0,0,0,1;
	trans3Dy<<cos_value,0,(-1*sin_value),0,
		  0,1,0,0,
		  sin_value,0,cos_value,0,
		  0,0,0,1;	
	trans3Dz<<cos_value,sin_value,0,0,
		  (-1*sin_value),cos_value,0,0,
		  0,0,1,0,
		  0,0,0,1;	
	if(b==0){
		trans3D=trans3Dx;}// b =0 for x , b=1 for y, b=2 for z
	else if (b==1){
		trans3D=trans3Dy;}
	else if (b==2){
		trans3D=trans3Dz;}
	vertex3D *u;
    for(int i=0;i<this->nv;i++){
		vertex3D* p=new vertex3D();
		u=this->v[i];
		RowVector4d b(u->x,u->y,u->z,1);
		RowVector4d t;
		t=b*trans3D;
        u->x=t(0);
        u->y=t(1);
        u->z=t(2);
        //u->id=u->id;
        //this->v[i]=p;

	}	


};


