#ifndef INC_CLASSES_H
#define INC_CLASSES_H

#include "primitive.h"

class object{
public:
    axis direc;

    view2D topView,frontView,sideView;
    view3D view_threeD;


    view2D Generate2D(object a,double x,double y,double z);
    object Transform3D(object a);
    object(){    }
    //void setView2D(view2D* a,int b);
    void orthographicViews(int b);
};

view3D Generate3D(view2D a,view2D b,view2D c);

//void drawView2D(view2D a);

void drawView3D(view3D a);

view2D orthographicViews(object* a,int b);

view2D orthographicViews3(view3D* a,int b);

vertex2D** getVertex2D(view3D* a,int b);

void getVertex2D(int b);

edge2D* getEdge2D(view3D* a,vertex2D** b,int c);

plane getPlane(Face* a);

int getEdge2DAdvanced(view3D* a, vertex2D** b, int c);

void getEdge2DAdvanced(int c);

bool isHidden(edge3D *a, int c, int d);

bool isHiddenPoint(vertex3D *v,int c);

extern edge2D *e_g;
extern edge2D *e_g1;
extern edge2D *e_g2;
extern edge2D *e_gh;
extern edge2D *e_gh1;
extern edge2D *e_gh2;
extern Face *f_g;

void generateWireframe(int c);

void drawWireframe(view3D a);

//view2D translate2D(view2D a,double x,double y);

//view2D scaling2D(view2D a,double x,double y);

//view2D rotation2D(view2D a,int b,double c);

extern view3D toptest;
extern view2D topviewg,sideviewg,frontviewg;
extern view2D *tvg;
extern view2D *svg;
extern view2D *fvg;
extern view3D *mm;
extern object *model;

#endif  /* INC_CLASSES_H */
