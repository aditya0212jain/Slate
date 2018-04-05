#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "classes.h"
#include <primitive.h>
#include<iostream>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <qfiledialog.h>
#include "oglwidget.h"
#include <workspace2d.h>
#include<string>
#include<vector>
#include<sstream>

using namespace std;

    QString tx;
    QString ty;
    QString tz;
    QString Sx,Sy,Sz;
    int reflect=0;
    int slider_xi=0;

MainWindow *w_temp;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_translate3_x_editingFinished()
{
    tx = ui->translate3_x->text();
    std::cout<<tx.toDouble()<<endl;
    std::cout<<"editingfinished"<<endl;
}

void MainWindow::on_translate3_y_editingFinished()
{
    ty= ui->translate3_y->text();
    std::cout<<ty.toDouble()<<endl;
}


void MainWindow::on_translate3_z_editingFinished()
{
    tz =ui->translate3_z->text();
    std::cout<<tz.toDouble()<<endl;
}

void MainWindow::on_apply_translate3_clicked()
{
    mm->translate3D(tx.toDouble(),ty.toDouble(),tz.toDouble());
    view3D trip= toptest;
    std::cout<<"Applied"<<endl;
    vertex3D** uop=trip.v;
    std::cout<<uop[0]->x<<" "<<uop[0]->y<<" "<<uop[0]->z<<endl;
//    ui->openGLWidget->initializeGL();
//    ui->openGLWidget->re
//    ui->openGLWidget->paintGL();
    ui->openGLWidget->update();
}

void MainWindow::on_scale3_x_editingFinished()
{
    Sx=ui->scale3_x->text();
}

void MainWindow::on_scale3_y_editingFinished()
{
    Sy=ui->scale3_y->text();
}

void MainWindow::on_scale3_z_editingFinished()
{
    Sz=ui->scale3_z->text();
}


void MainWindow::on_apply_scale3_clicked()
{
    mm->scaling3D(Sx.toDouble(),Sy.toDouble(),Sz.toDouble());
    ui->openGLWidget->update();
}



void MainWindow::on_reflect3_y_toggled(bool checked)
{
    if(checked==true){
        reflect=1;
    }
}

void MainWindow::on_reflect3_x_toggled(bool checked)
{
    if(checked==true){
        reflect=0;
    }
}

void MainWindow::on_reflect3_z_toggled(bool checked)
{
    if(checked==true){
        reflect=2;
    }
}

void MainWindow::on_apply_reflect3_clicked()
{
    mm->reflection3D(reflect);
    ui->openGLWidget->update();
}


void MainWindow::on_rotate3_y_valueChanged(int value)
{
    double val;
    val=value*(360.0/2000.0);
    mm->rotation3D(val,1);
    ui->openGLWidget->update();
}



void MainWindow::on_rotate3_z_valueChanged(int value)
{
    double val;
    val=value*(360.0/2000.0);
    mm->rotation3D(val,2);
    ui->openGLWidget->update();
}

void MainWindow::on_rotate3_x_sliderPressed()
{
    //slider_x=ui->rotate3_x->value();
}

void MainWindow::on_translate3_x_returnPressed()
{

}

void MainWindow::on_rotate3_x_sliderMoved(int position)
{
    double val;
    position=position-slider_xi;
    val=position*(360.0/2000.0);
    std::cout<<"value:"<<position<<endl;
    //std::cout<<"val:"<<val<<endl;
    std::cout<<"slider_xi"<<slider_xi<<endl;
    mm->rotation3D(val,0);
    slider_xi=position;
    ui->openGLWidget->update();
}

void MainWindow::on_openAct_triggered()
{
    //w_temp = this;
    QString filename = QFileDialog::getOpenFileName(

                this, tr("Open File"), "/home/aditya","Text File(*.3d);;All files(*.*);;"

                );

    std::cout << filename.toStdString() << std::endl;
    int num_vert,num_edges,num_faces;

    QFile file(filename);

    if(!file.open(QIODevice::ReadOnly))

        QMessageBox::information(0,"info",file.errorString());

    QTextStream in(&file);
    num_vert=stoi(in.readLine().toStdString());
    num_edges=stoi(in.readLine().toStdString());
    num_faces=stoi(in.readLine().toStdString());

    vertex3D** v_new = new vertex3D*[num_vert];
    edge3D* e_new = new edge3D[num_edges];
    Face* f_new[num_faces];
    //Face** f_new = new Face*[num_faces];
    plane *p_new;

    p_new= new plane[num_faces];

    std::cout << num_vert << std::endl;

    std::cout << num_edges << std::endl;

    for(int i=0;i<num_vert;i++){

    double xt,yt,zt;
    string str,namet;
    string buf; // Have a buffer string
    str=in.readLine().toStdString();
    stringstream ss(str); // Insert the string into a stream

    vector<string> tokens; // Create vector to hold our words

    while (ss >> buf)
        tokens.push_back(buf);
    xt = stod(tokens[0]);
    yt = stod(tokens[1]);
    zt = stod(tokens[2]);
    namet = tokens[3];
    v_new[i] = new vertex3D(xt,yt,zt,namet);
    //cout<<tokens[0]<<","<<tokens[1]<<","<<tokens[2]<<","<<tokens[3]<<endl;
    }

    cout<<"o1"<<endl;

    for(int i=0;i<num_edges;i++){
        cout<<i<<endl;
        string str,sa,sb;
        string buf; // Have a buffer string
        str=in.readLine().toStdString();
        stringstream ss(str); // Insert the string into a stream

        vector<string> tokens; // Create vector to hold our words

        while (ss >> buf)
            tokens.push_back(buf);
        sa = tokens[0];
        sb = tokens[1];
        int count1=0,j,k;
        for(int po=0;po<num_vert;po++){
            if(v_new[po]->id.compare(sa)==0){
                j=po;
                count1++;
            }else if (v_new[po]->id.compare(sb)==0){
                k=po;
                count1++;
            }
            if(count1==2){
                break;
            }
        }
        cout<<"o2"<<endl;
        edge3D et(v_new[j],v_new[k]);
        cout<<"o3"<<endl;
        e_new[i] = et;
        cout<<"o4"<<endl;

    }

    for(int i=0;i<num_faces;i++){
        string str;
        string buf; // Have a buffer string
        str=in.readLine().toStdString();
        stringstream ss(str); // Insert the string into a stream

        vector<string> tokens; // Create vector to hold our words

        while (ss >> buf)
            tokens.push_back(buf);
        Face *facet2;
        int toptop=tokens.size();
        vertex3D** v_face = new vertex3D*[toptop];
        for(int to=0;to<tokens.size();to++){
            string tp;
            tp=tokens[to];
            cout<<"token : "<<tp<<endl;
            int po;
            for(po=0;po<num_vert;po++){
                if(tp.compare(v_new[po]->id)==0){
                    break;
                }
            }
            v_face[to]=v_new[po];
            cout<<"v_face :"<<v_face[to]->x<<","<<v_face[to]->y<<","<<v_face[to]->z<<endl;
        }
        facet2 = new Face(v_face,tokens.size());
        f_new[i] = facet2;
        cout<<"face id :"<<f_new[i]->p[0]->id<<","<<f_new[i]->p[1]->id<<","<<f_new[i]->p[2]->id<<endl;
        //cout<<"face x :"<<f_new[i]->p[0]->x<<","<<f_new[i]->p[1]->x<<","<<f_new[i]->p[2]->x<<endl;


        vertex3D *t1,*t2,*t3;
//        t1=facet2->p[0];
//        t2=facet2->p[1];
//        t2=facet2->p[2];
        t1=v_face[0];
        t2=v_face[1];
        t3=v_face[2];
        //cout<<"op1"<<endl;
        cout<<"vertex 1: "<<t1->x<<","<<t1->y<<","<<t1->z<<endl;

        cout<<"vertex 2: "<<t2->x<<","<<t2->y<<","<<t2->z<<endl;

        cout<<"vertex 3: "<<t3->x<<","<<t3->y<<","<<t3->z<<endl;
        //cout<<"inside plane "<<t1->x<<","<<t2->x<<","<<t3->x<<endl;
        Vector3d v((t1->x-t2->x),(t1->y-t2->y),(t1->z-t2->z));
        Vector3d w((t3->x-t2->x),(t3->y-t2->y),(t3->z-t2->z));
        Vector3d cp(((v(1)*w(2))-(v(2)*w(1))),((v(2)*w(0))-(v(0)*w(2))),((v(0)*w(1))-(v(1)*w(0))));
        double dt;
        dt=(-1*((cp(0)*t1->x)+(cp(1)*t1->y)+(cp(2)*t1->z)));
        plane pt1(cp(0),cp(1),cp(2),dt);
        //cout<<"cp :"<<cp(0)<<","<<cp(1)<<","<<cp(2)<<endl;
        cout<<"Plane equation "<<pt1.a<<","<<pt1.b<<","<<pt1.c<<","<<pt1.d<<endl;
        p_new[i] = pt1;

    }


    cout<<"Plaen outside "<<p_new[0].a<<","<<p_new[0].b<<","<<p_new[0].c<<","<<p_new[0].d<<endl;
    cout<<"Plaen outside "<<p_new[1].a<<","<<p_new[1].b<<","<<p_new[1].c<<","<<p_new[1].d<<endl;
    cout<<"Plaen outside "<<p_new[2].a<<","<<p_new[2].b<<","<<p_new[2].c<<","<<p_new[2].d<<endl;
    cout<<"Plaen outside "<<p_new[3].a<<","<<p_new[3].b<<","<<p_new[3].c<<","<<p_new[3].d<<endl;


    mm = new view3D(v_new,e_new,num_edges);
    mm->nv=num_vert;
    mm->f=f_new;
    mm->nf = num_faces;
    //mm->p = new plane*[num_faces];
    mm->p = p_new;

    cout<<"mm plane "<<mm->p[0].a<<mm->p[0].b<<mm->p[0].c<<mm->p[0].d<<endl;
    cout<<"mm plane "<<mm->p[1].a<<endl;
    cout<<"mm plane "<<mm->p[2].a<<mm->p[2].b<<mm->p[2].c<<mm->p[2].d<<endl;
    //cout<<"mm plane "<<mm->p[3]->a<<mm->p[3]->b<<mm->p[3]->c<<mm->p[3]->d<<endl;


    e_g = new edge2D[mm->n];
    e_g1 = new edge2D[mm->n];
    e_g2 = new edge2D[mm->n];
    e_gh = new edge2D[mm->n];
    e_gh1 = new edge2D[mm->n];
    e_gh2 = new edge2D[mm->n];

    ui->openGLWidget->update();

}

void MainWindow::on_rotate3_x_valueChanged(int value)
{

}

void MainWindow::on_actionConvert_2D_triggered()
{
    vertex2D** v_a;
    int s_a;
    v_a = getVertex2D(mm,1);
    s_a = getEdge2DAdvanced(mm,v_a,1);
    fvg = new view2D(v_a,e_g1,mm->n,s_a);
    fvg->nv=mm->nv;
    fvg->h=mm->n-s_a;
    fvg->hidden_edge = e_gh1;

    vertex2D** v_b;
    int s_b;
    v_b=getVertex2D(mm,0);
    s_b = getEdge2DAdvanced(mm,v_b,0);
    tvg = new view2D(v_b,e_g,mm->n,s_b);
    tvg->nv=mm->nv;
    tvg->h = mm->n-s_b;
    tvg->hidden_edge = e_gh;

    vertex2D** v_c;
    int s_c;
    v_c = getVertex2D(mm,2);
    s_c = getEdge2DAdvanced(mm,v_c,2);
    svg = new view2D(v_c,e_g2,mm->n,s_c);
    svg->nv=mm->nv;
    svg->h = mm->n-s_c;
    svg->hidden_edge = e_gh2;

    cout<<"tvg h:"<<tvg->h<<endl;
    cout<<"fvg h:"<<fvg->h<<endl;
    cout<<"svg h:"<<svg->h<<endl;

//    vertex2D** v_a;
//    edge2D* e_a;
//    e_a=new edge2D[mm->n];
//    v_a = getVertex2D(mm,1);
//    e_a = getEdge2D(mm,v_a,1);
//    fvg =new view2D(v_a,e_g1,mm->n,mm->n);
//    fvg->nv=mm->nv;

//    vertex2D** v_b;
//    edge2D* e_b;
//    e_b=new edge2D[mm->n];
//    v_b=getVertex2D(mm,0);
//    e_b = getEdge2D(mm,v_b,0);
//    tvg = new view2D(v_b,e_g,mm->n,mm->n);
//    tvg->nv=mm->nv;

//    vertex2D** v_c;
//    edge2D* e_c;
//    e_c = new edge2D[mm->n];
//    v_c = getVertex2D(mm,2);
//    e_c = getEdge2D(mm,v_c,2);
//    svg = new view2D(v_c,e_g2,mm->n,mm->n);
//    svg->nv=mm->nv;


    ui->openGLWidget->hide();
    //this->hide();
}

void MainWindow::on_actionShow3D_triggered()
{
    ui->openGLWidget->show();
}

void MainWindow::on_actionWorkspace2D_triggered()
{
    ui->openGLWidget->hide();
}

void MainWindow::on_action_Open_D_triggered()
{
    //w_temp = this;
    QString filename = QFileDialog::getOpenFileName(

                this, tr("Open File"), "/home/aditya","Text File(*.2d);;Text File(*.3d);;All files(*.*);;"

                );

    std::cout << filename.toStdString() << std::endl;

    QFile file(filename);

    if(!file.open(QIODevice::ReadOnly))

        QMessageBox::information(0,"info",file.errorString());

    QTextStream in(&file);
    int no_view,which_view,num_vert,num_edges,num_hidden;

    tvg = new view2D();
    svg = new view2D();
    fvg = new view2D();


    no_view=stoi(in.readLine().toStdString());
    cout<<"no of view"<<no_view<<endl;


    for(int no_view1=0;no_view1<no_view;no_view1++){
//taking values of each view
    which_view=stoi(in.readLine().toStdString());
    cout<<"which view "<<which_view<<endl;

    num_vert=stoi(in.readLine().toStdString());
    num_edges=stoi(in.readLine().toStdString());
    num_hidden=stoi(in.readLine().toStdString());
    cout<<"vertices "<<num_vert<<endl;
    cout<<"edges "<<num_edges<<endl;
    cout<<"hidden "<<num_hidden<<endl;
    vertex2D** v_new = new vertex2D*[num_vert];
    edge2D* e_new = new edge2D[num_edges];
    edge2D* hidden_new = new edge2D[num_hidden];

    for(int i=0;i<num_vert;i++){

    double xt,yt;
    string str,namet;
    string buf; // Have a buffer string
    str=in.readLine().toStdString();
    stringstream ss(str); // Insert the string into a stream

    vector<string> tokens; // Create vector to hold our words

    while (ss >> buf)
        tokens.push_back(buf);
    xt = stod(tokens[0]);
    yt = stod(tokens[1]);
    namet = tokens[2];
    v_new[i] = new vertex2D(xt,yt,namet);
    cout<<tokens[0]<<","<<tokens[1]<<","<<tokens[2]<<endl;
    }


    for(int i=0;i<num_edges;i++){
        string str,sa,sb;
        string buf; // Have a buffer string
        str=in.readLine().toStdString();
        stringstream ss(str); // Insert the string into a stream

        vector<string> tokens; // Create vector to hold our words

        while (ss >> buf)
            tokens.push_back(buf);
        sa = tokens[0];
        sb = tokens[1];
        int count1=0,j,k;
        for(int po=0;po<num_vert;po++){
            if(v_new[po]->id.compare(sa)==0){
                j=po;
                count1++;
            }else if (v_new[po]->id.compare(sb)==0){
                k=po;
                count1++;
            }
            if(count1==2){
                break;
            }
        }
        //cout<<"o2"<<endl;
        edge2D et(v_new[j],v_new[k]);
        //cout<<"o3"<<endl;
        e_new[i] = et;
        //cout<<"o4"<<endl;

    }
    for (int i=0;i<num_hidden;i++){
        cout<<i<<endl;
        string str,sa,sb;
        string buf; // Have a buffer string
        str=in.readLine().toStdString();
        stringstream ss(str); // Insert the string into a stream

        vector<string> tokens; // Create vector to hold our words

        while (ss >> buf)
            tokens.push_back(buf);
        sa = tokens[0];
        sb = tokens[1];
        int count1=0,j,k;
        for(int po=0;po<num_vert;po++){
            if(v_new[po]->id.compare(sa)==0){
                j=po;
                count1++;
            }else if (v_new[po]->id.compare(sb)==0){
                k=po;
                count1++;
            }
            if(count1==2){
                break;
            }
        }
        edge2D et(v_new[j],v_new[k]);
        //cout<<"o3"<<endl;
        hidden_new[i]=et;

    }

    if(which_view==0){
        tvg = new view2D(v_new,e_new,hidden_new,num_edges+num_hidden,num_edges,num_hidden);
        tvg->nv=num_vert;
        cout<<"topview "<<endl;
        for(int j=0;j<num_vert;j++){
            cout<<"vert: "<<tvg->v[j]->x<<","<<tvg->v[j]->y<<" "<<tvg->v[j]->id<<endl;
        }
        for(int j=0;j<num_edges;j++){
            cout<<"edges: "<<tvg->e[j].a->id<<","<<tvg->e[j].b->id<<endl;
        }
        for(int j=0;j<num_hidden;j++){
            cout<<"vert: "<<tvg->v[j]->x<<","<<tvg->v[j]->y<<" "<<tvg->v[j]->id<<endl;
        }

    }else if (which_view==1){
        fvg = new view2D(v_new,e_new,hidden_new,num_edges+num_hidden,num_edges,num_hidden);
        fvg->nv=num_vert;
    } else {
        svg = new view2D(v_new,e_new,hidden_new,num_edges+num_hidden,num_edges,num_hidden);
        svg->nv=num_vert;
    }
    }
    ui->front_GL->update();
    ui->top_GL->update();
    ui->side_GL->update();
    ui->openGLWidget->hide();
}
