#include "classes.h"
#include "primitive.h"
#include<Eigen/Core>
#include<string>

using namespace Eigen;
using namespace std;

view2D Generate2D(object a,double x,double y,double z){
	//
	//takes an object and the direction cosines of the normal of the plane to which projection is needed
	//
};

view2D orthographicViews(object a){
	//
	//returns all the orthographic Views of the object relative to the current axises 
	//
	//
}

object Generate3D(view2D a,view2D b,view2D c){
	//
	//takes three 2D views and produces an object
	//
	//
};

view3D generateWireframe(view2D a,view2D b,int c){
/*
order:
	topview x,z
	frontview z,y
	sideview x,y
	T F 0
	F S 1
	T S 2
*/
	vertex3D vTemp;
	int num=a.n;
	vertex3D fv[num];
	string idTemp;
	if(c==0){
		for(int i=0;i<num;i++){
			idTemp=a.v[i].id; 		
			vTemp.x=a.v[i].x;
			vTemp.z=a.v[i].y;
			vTemp.id=idTemp;
			int j=0;
			while(j<num){
				if(idTemp.compare(b.v[j].id)==0){
					vTemp.y=b.v[i].y;
					break;				
				}		
			j++;
			}
			fv[i]=vTemp;
		}
	}
	else if(c==1){
		for(int i=0;i<num;i++){
			idTemp=a.v[i].id; 		
			vTemp.z=a.v[i].x;
			vTemp.y=a.v[i].y;
			vTemp.id=idTemp;
			int j=0;
			while(j<num){
				if(idTemp.compare(b.v[j].id)==0){
					vTemp.x=b.v[i].x;
					break;				
				}		
			j++;
			}
			fv[i]=vTemp;
		}
	}
	else if (c==2){
		for(int i=0;i<num;i++){
			idTemp=a.v[i].id; 		
			vTemp.x=a.v[i].x;
			vTemp.z=a.v[i].y;
			vTemp.id=idTemp;
			int j=0;
			while(j<num){
				if(idTemp.compare(b.v[j].id)==0){
					vTemp.y=b.v[i].y;
					break;				
				}		
			j++;
			}
			fv[i]=vTemp;
		}
	}
	view3D result(fv,num);

	return result;
};
