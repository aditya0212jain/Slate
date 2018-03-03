#ifndef INC_PRIMITIVE_H
#define INC_PRIMITIVE_H

class vertex2D{
	public:
		double x,y;
};

class axis{
	public:
	 double x,y,z;
	
}

class vertex3D{
	public:
		double x,y,z;
};

class edge2D{
	public:
		vertex2D a,b;
};

class edge3D{
	public:
		vertex3D a,b;
};

class Face{
	public:
		vertex3D p1,p2,p3,p4;
};

class view2D{
	public:
		vertex2D[] v;
		edge2D[] e;
};

class view3D{
	public:
		vertex3D[] v;
		edge3D[] e;
		Face[] f;
		
};

#endif  /* INC_PRIMITIVE_H */