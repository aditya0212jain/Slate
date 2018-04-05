#include "workspace2d.h"
#include "ui_workspace2d.h"
#include<classes.h>
#include<primitive.h>
#include<iostream>

using namespace std;

workspace2D::workspace2D(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::workspace2D)
{
    cout<<"lo5"<<endl;
    ui->setupUi(this);
    cout<<"lo6"<<endl;
    ui->frontGLWidget->update();
    ui->topGLWidget->update();
    ui->sideGLWidget->update();
    cout<<"lo7"<<endl;
}

workspace2D::~workspace2D()
{
    delete ui;
}

void workspace2D::on_actionConvert_to_3D_triggered()
{
    //this->parentWidget()->show();
    //this->hide();
}
