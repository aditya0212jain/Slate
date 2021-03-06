#ifndef INC_PRIMITIVE_H
#define INC_PRIMITIVE_H
#include<string>
#include<Eigen/Core>

using namespace Eigen;
using namespace std;

class vertex2D{
	public:
		double x,y;
		std::string id;
    vertex2D(double a,double b,string c);
    vertex2D(){}
//    vertex2D(double a,double b,string c){
//            x=a;
//            y=b;
//            id=c;
//        }
};

class axis{
	public:
	 double x,y,z;
	
};

class vertex3D{
	public:
		double x,y,z;
		std::string id;
	vertex3D(double a,double b,double c,string d);
    vertex3D(){}

};

class edge2D{
	public:
		vertex2D* a;
		vertex2D* b;
	edge2D(vertex2D* x,vertex2D* y);
//	edge2D(vertex2D x,vertex2D y);
    edge2D(){}
};

class edge3D{
	public:
		vertex3D *a,*b;
		edge3D(vertex3D* x,vertex3D* y);
        edge3D(){}
};

class Face{
	public:
        vertex3D** p;
        int nf;
        Face(){}
        Face(vertex3D** o,int n){
            p = new vertex3D*[n];
            p =o;
        }
};

class view2D{
	public:
		vertex2D** v;//vertex2D v[];
		edge2D* e;
		edge2D* hidden_edge;
        int n=0,nv; // n for number of edges and nv for number of vertices
		int s=0,h=0;///< no. of solid and hidden edges
	view2D(vertex2D** a,int b); // vertices and no. of vertices
	view2D(vertex2D** a,edge2D* b,int c,int d); // (vertices,solid edges,no. of vertices, no. of solid vertices)
	view2D(vertex2D** a,edge2D* b,edge2D* c,int d,int f,int g); // (vertices,solid,hidden,total no.,solid no.,hidden no.)
    view2D(){}
	
	void drawView2D(void);
	void translate2D(double x,double y);
	void scaling2D(double x,double y);
	void rotation2D(double c);
};

class plane{
public:
    double a,b,c,d;
    plane(double x,double y,double z,double w){
        a=x;
        b=y;
        c=z;
        d=w;
    }
    plane(){}
};

class view3D{
	public:
		vertex3D** v;//vertex3D v[];
		edge3D* e;
        Face** f;
        plane* p;
        int n,nv;//n for number of edges and nv for number of vertices
        int nf;// n of faces

	view3D(vertex3D** a,int b){
		v=a;
		n=b;
	}
	
	view3D(vertex3D** a,edge3D* b,int c){
		v=a;
		e=b;
		n=c;
	}
    view3D(){}
	
	void drawView3D(void);
	void drawWireframe(void);
	void translate3D(double x,double y,double z);
	void scaling3D(double x,double y,double z);
	void reflection3D(int b);
	void rotation3D(double a,int b);//0 for x ,1 for y, 2 for z

};



#endif  /* INC_PRIMITIVE_H */
