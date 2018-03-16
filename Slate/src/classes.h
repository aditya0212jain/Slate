#ifndef INC_CLASSES_H
#define INC_CLASSES_H

#include "primitive.h"

class object{
	
	axis direc;
	
	view2D topView,frontView,sideView;
	view3D view_threeD;
	
	view2D orthographicViews(object a);
	view2D Generate2D(object a,double x,double y,double z);
	object Transform3D(object a);
};

object Generate3D(view2D a,view2D b,view2D c);

//void drawView2D(view2D a);

void drawView3D(view3D a);

void drawWireframe(view3D a);

//view2D translate2D(view2D a,double x,double y);

//view2D scaling2D(view2D a,double x,double y);

//view2D rotation2D(view2D a,int b,double c);

#endif  /* INC_CLASSES_H */
