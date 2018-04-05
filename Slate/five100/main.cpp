#include "mainwindow.h"
#include <QApplication>
#include "classes.h"
#include <primitive.h>
#include<iostream>

object *model;

view3D toptest;
view2D topviewg,sideviewg,frontviewg;
view2D *tvg,*fvg,*svg;
view3D *mm;
edge2D *e_g;
edge2D *e_g1;
edge2D *e_g2;
edge2D *e_gh;
edge2D *e_gh1;
edge2D *e_gh2;

Face *f_g;

int main(int argc, char *argv[])
{
    QApplication alexa(argc, argv);
    //pyramid

    vertex3D** v_array=new vertex3D*[4];
    v_array[0]=new vertex3D(1.50,0.50,0,"A");
    v_array[1]=new vertex3D(1.50,1.50,0,"B");
    v_array[2]=new vertex3D(2.50,1.00,0,"C");
    v_array[3]=new vertex3D(2.00,1.00,0.75,"D");

    edge3D a(v_array[0],v_array[1]),b(v_array[2],v_array[1]),c(v_array[0],v_array[2]),d(v_array[0],v_array[3]),e(v_array[3],v_array[1]),f(v_array[3],v_array[2]);

    edge3D e_array[6];
    e_array[0]=a;
    e_array[1]=b;
    e_array[2]=c;
    e_array[3]=d;
    e_array[4]=e;
    e_array[5]=f;
    model= new object();

    view3D pyramid_3D(v_array,e_array,6);
    pyramid_3D.nv=4;
    toptest = pyramid_3D;
    std::cout<<"y1"<<std::endl;
    model->view_threeD = pyramid_3D;
    mm = new view3D(v_array,e_array,6);
    mm->nv = 4;
    std::cout<<"y2"<<std::endl;
    e_g = new edge2D[mm->n];
    e_g1 = new edge2D[mm->n];
    e_g2 = new edge2D[mm->n];
    e_gh = new edge2D[mm->n];
    e_gh1 = new edge2D[mm->n];
    e_gh2 = new edge2D[mm->n];


    cout<<"t1"<<endl;
    vertex2D** v_a;
    edge2D* e_a;
    e_a=new edge2D[mm->n];
    v_a = getVertex2D(mm,1);
    e_a = getEdge2D(mm,v_a,1);
//      v_b = getVertex2D(mm,0);
//      v_c = getVertex2D(mm,2);
//      e_b = getEdge2D(mm,v_b);
//      e_c = getEdge2D(mm,v_c);
    cout<<"t2"<<endl;
    fvg =new view2D(v_a,e_g1,mm->n,mm->n);
    cout<<"t3"<<endl;
    fvg->nv=mm->nv;
//    for(int i=0;i<mm->n;i++){
//        cout<<"i :"<<e_g[i].a->id<<" ,"<<e_g[i].b->id<<endl;
//        cout<<"first"<<e_g[i].a->x<<" ,"<<e_g[i].a->y<<endl;
//        cout<<"second"<<e_g[i].b->x<<" ,"<<e_g[i].b->y<<endl;
//    }
    vertex2D** v_b;
    edge2D* e_b;
    e_b=new edge2D[mm->n];
    v_b=getVertex2D(mm,0);
    e_b = getEdge2D(mm,v_b,0);
    tvg = new view2D(v_b,e_g,mm->n,mm->n);
    tvg->nv=mm->nv;

    vertex2D** v_c;
    edge2D* e_c;
    e_c = new edge2D[mm->n];
    v_c = getVertex2D(mm,2);
    e_c = getEdge2D(mm,v_c,2);
    svg = new view2D(v_c,e_g2,mm->n,mm->n);
    svg->nv=mm->nv;

    MainWindow w;
    w.show();

    return alexa.exec();
}
