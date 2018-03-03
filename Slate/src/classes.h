#ifndef INC_CLASSES_H
#define INC_CLASSES_H

#include "primitive.h"

class object{
	
	axis direc;
	
	view2D topView,frontView,sideView;
	view3D view_threeD;
	
	view2D[] orthographicViews(object a);
	view2D Generate2D(object a,double x,double y,double z);
	object Transform3D(object a);
	
	object translate3D(object a,double x,double y,double z);
	object scaling3D(object a,double x,double y,double z);
	object reflection3D(object a,int b);
	object rotation3D(object a,vertex3D v,edge3D e,int i,double o);
	
};

object Generate3D(view2D a,view2D b,view2D c);

view2D translate2D(view2D a,double x,double y);

view2D scaling2D(view2D a,double x,double y);

view2D rotation2D(view2D a,int b,double c);

#endif  /* INC_CLASSES_H */