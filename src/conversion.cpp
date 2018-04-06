#include "classes.h"
#include "primitive.h"
#include<Eigen/Core>
#include<string>
#include<iostream>

using namespace Eigen;
using namespace std;

view2D Generate2D(object a,double x,double y,double z){
    //
    //takes an object and the direction cosines of the normal of the plane to which projection is needed
    //
};

void object::orthographicViews(int b){
    //b=0 top       x,-z
    //b=1 front     x,y
    //b=2 side      -z,y
    view3D temp;
    int nvert;
    temp=this->view_threeD;

    nvert=this->view_threeD.nv;
    if(b==0){
        vertex2D** v_array=new vertex2D*[nvert];
        edge2D edge_array[temp.n];
        for(int i=0;i<this->view_threeD.nv;i++){
            v_array[i]=new vertex2D(temp.v[i]->x,(-1*temp.v[i]->z),temp.v[i]->id);
        }
        for(int i=0;i<this->view_threeD.n;i++){
            string sa,sb;
            int j,k,count1=0;
            sa=temp.e[i].a->id;
            sb=temp.e[i].b->id;
            for(int po=0;po<temp.nv;po++){
                if(v_array[po]->id.compare(sa)==0){
                    j=po;
                    count1++;
                }else if (v_array[po]->id.compare(sb)==0){
                    k=po;
                    count1++;
                }
                if(count1==2){
                    break;
                }
            }
            edge2D temp1(v_array[j],v_array[k]);
            edge_array[i]=temp1;
        }
        view2D answer(v_array,edge_array,temp.n,temp.n);
        answer.nv=temp.nv;
        this->topView = answer;
    } else if (b==1){
        vertex2D** v_array=new vertex2D*[nvert];
        edge2D edge_array[temp.n];
        for(int i=0;i<this->view_threeD.nv;i++){
            v_array[i]=new vertex2D(temp.v[i]->x,temp.v[i]->y,temp.v[i]->id);
        }
        for(int i=0;i<this->view_threeD.n;i++){
            string sa,sb;
            int j,k,count1=0;
            sa=temp.e[i].a->id;
            sb=temp.e[i].b->id;
            for(int po=0;po<temp.nv;po++){
                if(v_array[po]->id.compare(sa)==0){
                    j=po;
                    count1++;
                }else if (v_array[po]->id.compare(sb)==0){
                    k=po;
                    count1++;
                }
            }
            edge2D temp1(v_array[j],v_array[k]);
            cout<<"in convert "<<temp1.a->x<<endl;
            edge_array[i]=temp1;
        }
        view2D answer(v_array,edge_array,temp.n,temp.n);
        answer.nv=temp.nv;
        cout<<"in topview Conversion: "<<answer.e[0].a->x<<endl;
        this->frontView = answer;
    } else if(b==2){
        vertex2D** v_array=new vertex2D*[nvert];
        edge2D edge_array[temp.n];
        for(int i=0;i<this->view_threeD.nv;i++){
            v_array[i]=new vertex2D((-1*temp.v[i]->z),temp.v[i]->y,temp.v[i]->id);
        }
        for(int i=0;i<this->view_threeD.n;i++){
            string sa,sb;
            int j,k,count1=0;
            sa=temp.e[i].a->id;
            sb=temp.e[i].b->id;
            for(int po=0;po<temp.nv;po++){
                if(v_array[po]->id.compare(sa)==0){
                    j=po;
                    count1++;
                }else if (v_array[po]->id.compare(sb)==0){
                    k=po;
                    count1++;
                }
                if(count1==2){
                    break;
                }
            }
            edge2D temp1(v_array[j],v_array[k]);
            edge_array[i]=temp1;
        }
        view2D answer(v_array,edge_array,temp.n,temp.n);
        answer.nv=temp.nv;
        this->sideView = answer;
    }
}

view2D orthographicViews3(view3D* a,int b){
    //b=0 top       x,-z
    //b=1 front     x,y
    //b=2 side      -z,y
    view3D* temp;
    int nvert;
    temp=a;

    nvert=a->nv;
    if(b==0){
        vertex2D** v_array=new vertex2D*[nvert];
        edge2D edge_array[temp->n];
        for(int i=0;i<a->nv;i++){
            v_array[i]=new vertex2D(temp->v[i]->x,(-1*temp->v[i]->z),temp->v[i]->id);
        }
        for(int i=0;i<a->n;i++){
            string sa,sb;
            int j,k,count1=0;
            sa=temp->e[i].a->id;
            sb=temp->e[i].b->id;
            for(int po=0;po<temp->nv;po++){
                if(v_array[po]->id.compare(sa)==0){
                    j=po;
                    count1++;
                }else if (v_array[po]->id.compare(sb)==0){
                    k=po;
                    count1++;
                }
                if(count1==2){
                    break;
                }
            }
            edge2D temp1(v_array[j],v_array[k]);
            edge_array[i]=temp1;
        }
        tvg =new view2D(v_array,edge_array,temp->n,temp->n);
        tvg->nv=a->nv;
        return *tvg;
    } else if (b==1){
        vertex2D** v_array=new vertex2D*[nvert];
        edge2D edge_array[temp->n];
        for(int i=0;i<a->nv;i++){
            v_array[i]=new vertex2D(temp->v[i]->x,temp->v[i]->y,temp->v[i]->id);
        }
        for(int i=0;i<a->n;i++){
            string sa,sb;
            int j,k,count1=0;
            sa=temp->e[i].a->id;
            sb=temp->e[i].b->id;
            for(int po=0;po<temp->nv;po++){
                if(v_array[po]->id.compare(sa)==0){
                    j=po;
                    count1++;
                }else if (v_array[po]->id.compare(sb)==0){
                    k=po;
                    count1++;
                }
            }
            edge2D temp1(v_array[j],v_array[k]);
            edge_array[i]=temp1;
        }
        fvg = new view2D(v_array,edge_array,temp->n,temp->n);
        fvg->nv=temp->nv;

        view2D tre= *fvg;
        cout<<"inside tre :"<<tre.e[0].a->x<<endl;
        cout<<"inside tre :"<<tre.e[0].a->x<<endl;
        cout<<"inside tre :"<<tre.e[1].a->x<<endl;
        cout<<"inside tre :"<<tre.e[2].a->x<<endl;
        cout<<"inside tre :"<<tre.e[3].a->x<<endl;
        cout<<"inside tre :"<<tre.e[4].a->x<<endl;
        cout<<"inside tre :"<<tre.e[5].a->x<<endl;
        //cout<<"inside tre :"<<tre.e[1].b->x<<endl;
        return tre;
    } else if(b==2){
        vertex2D** v_array=new vertex2D*[nvert];
        edge2D edge_array[temp->n];
        for(int i=0;i<a->nv;i++){
            v_array[i]=new vertex2D((-1*temp->v[i]->z),temp->v[i]->y,temp->v[i]->id);
        }
        for(int i=0;i<a->n;i++){
            string sa,sb;
            int j,k,count1=0;
            sa=temp->e[i].a->id;
            sb=temp->e[i].b->id;
            for(int po=0;po<temp->nv;po++){
                if(v_array[po]->id.compare(sa)==0){
                    j=po;
                    count1++;
                }else if (v_array[po]->id.compare(sb)==0){
                    k=po;
                    count1++;
                }
                if(count1==2){
                    break;
                }
            }
            edge2D temp1(v_array[j],v_array[k]);
            edge_array[i]=temp1;
        }
        svg = new view2D(v_array,edge_array,temp->n,temp->n);
        svg->nv=temp->nv;
        return *svg;
    }
}


view3D Generate3D(view2D a,view2D b,int c){
    /*
    order:
        topview x,z         x,-z
        frontview z,y       x,y
        sideview x,y        -z,y
        T F 0
        F S 1
        T S 2
    */
    if(c==0){               //a=topview and b=frontview

    }
}

vertex2D** getVertex2D(view3D* a,int b){
    if(b==0){
        vertex2D** v_array=new vertex2D*[a->nv];
        for(int i=0;i<a->nv;i++){
            v_array[i]=new vertex2D(a->v[i]->x,(-1*a->v[i]->z),a->v[i]->id);
        }
        return v_array;
    } else if (b==1){
        vertex2D** v_array=new vertex2D*[a->nv];
        for(int i=0;i<a->nv;i++){
            v_array[i]=new vertex2D(a->v[i]->x,a->v[i]->y,a->v[i]->id);
        }
        return v_array;
    } else if (b==2){
        vertex2D** v_array=new vertex2D*[a->nv];
        for(int i=0;i<a->nv;i++){
            v_array[i]=new vertex2D((-1*a->v[i]->z),a->v[i]->y,a->v[i]->id);
        }
        return v_array;
    }
}

void getVertex2D(int b){
    if(b==0){
        vertex2D** v_array=new vertex2D*[mm->nv];
        for(int i=0;i<mm->nv;i++){
            v_array[i]=new vertex2D(mm->v[i]->x,(-1*mm->v[i]->z),mm->v[i]->id);
        }
        tvg->v = v_array;
    } else if (b==1){
        vertex2D** v_array=new vertex2D*[mm->nv];
        for(int i=0;i<mm->nv;i++){
            v_array[i]=new vertex2D(mm->v[i]->x,mm->v[i]->y,mm->v[i]->id);
        }
        fvg->v =v_array;
    } else if (b==2){
        vertex2D** v_array=new vertex2D*[mm->nv];
        for(int i=0;i<mm->nv;i++){
            v_array[i]=new vertex2D((-1*mm->v[i]->z),mm->v[i]->y,mm->v[i]->id);
        }
        svg->v = v_array;
    }
}

edge2D* getEdge2D(view3D* a,vertex2D** b,int c){
    edge2D edge_array[a->n];
    cout<<"inside 3D edge:"<<endl;
//    for(int i=0;i<mm->n;i++){
//        cout<<"i :"<<a->e[i].a->id<<" ,"<<a->e[i].b->id<<endl;
//        cout<<"first"<<a->e[i].a->x<<" ,"<<a->e[i].a->y<<endl;
//        cout<<"second"<<a->e[i].b->x<<" ,"<<a->e[i].b->y<<endl;
//    }
  //  cout<<"p1"<<endl;
    for(int i=0;i<a->n;i++){
        string sa,sb;
        int j,k,count1=0;
        sa=a->e[i].a->id;
        sb=a->e[i].b->id;

        for(int po=0;po<a->nv;po++){
            if(b[po]->id.compare(sa)==0){
                j=po;
                count1++;
            }else if (b[po]->id.compare(sb)==0){
                k=po;
                count1++;
            }
            if(count1==2){
                break;
            }
        }
        edge2D tou(b[j],b[k]);
        edge_array[i]=tou;
    }
   // cout<<"inside edge:"<<endl;
    for(int i=0;i<mm->n;i++){
     //   cout<<"i :"<<edge_array[i].a->id<<" ,"<<edge_array[i].b->id<<endl;
       // cout<<"first"<<edge_array[i].a->x<<" ,"<<edge_array[i].a->y<<endl;
       // cout<<"second"<<edge_array[i].b->x<<" ,"<<edge_array[i].b->y<<endl;
        if(c==0){
            e_g[i]=edge_array[i];
        }else if (c==1){
        e_g1[i]=edge_array[i];
        }
        else if (c==2) {
            e_g2[i]=edge_array[i];
        }
    }
    return edge_array;
}

int getEdge2DAdvanced(view3D* a,vertex2D** b,int c){//returns no. of solid lines and updates the edge arrays for both hidden and solid

        edge2D edge_array[a->n];
        edge2D hidden_edge_array[a->n];
        int s=0,h=0;

        for(int i=0;i<a->n;i++){
            string sa,sb;
            int j,k,count1=0;
            sa=a->e[i].a->id;
            sb=a->e[i].b->id;

            for(int po=0;po<a->nv;po++){
                if(b[po]->id.compare(sa)==0){
                    j=po;
                    count1++;
                }else if (b[po]->id.compare(sb)==0){
                    k=po;
                    count1++;
                }
                if(count1==2){
                    break;
                }
            }
            edge2D tou(b[j],b[k]);

            if(isHidden(&a->e[i],c,mm->nf)==true){
                h++;
                hidden_edge_array[i]=tou;

            }else{
                s++;
                edge_array[i]=tou;
            }
        }

        for(int i=0;i<s;i++){
            if(c==0){
                e_g[i]=edge_array[i];
            }else if (c==1){
            e_g1[i]=edge_array[i];
            }
            else if (c==2) {
                e_g2[i]=edge_array[i];
            }
        }

        for(int i=0;i<h;i++){
            if(c==0){
                e_gh[i]=hidden_edge_array[i];
            }else if (c==1){
            e_gh1[i]=hidden_edge_array[i];
            }
            else if (c==2) {
                e_gh2[i]=hidden_edge_array[i];
            }
        }

        return s;

}

void getEdge2DAdvanced(int c){

    edge2D* edge_array;
    edge_array = new edge2D[mm->n];
    edge2D* hidden_edge_array;
    hidden_edge_array = new edge2D[mm->n];
    int s=0,h=0;

    if(c==0){
        cout<<"inside edge generation for c=0"<<endl;
        for(int i=0;i<mm->n;i++){
            cout<<"edge i: "<<i<<endl;
            string sa,sb;
            int j,k,count1=0;
            sa=mm->e[i].a->id;
            sb=mm->e[i].b->id;
            cout<<"sa sb "<<sa<<" , "<<sb<<endl;
            for(int po=0;po<mm->nv;po++){
                if(tvg->v[po]->id.compare(sa)==0){
                    j=po;
                    count1++;
                }else if (tvg->v[po]->id.compare(sb)==0){
                    k=po;
                    count1++;
                }
                if(count1==2){
                    break;
                }
            }
            edge2D tou(tvg->v[j],tvg->v[k]);

            if(isHiddenPoint(mm->e[i].a,0)==true||isHiddenPoint(mm->e[i].b,0)==true){

                hidden_edge_array[h]=tou;
                h++;
                cout<<"hidden edge :" <<tou.a->id<<","<<tou.b->id<<endl;
               //

            }else{

                edge_array[s]=tou;
                s++;
            }
        }

        tvg->e = edge_array;
        tvg->hidden_edge = hidden_edge_array;
        tvg->n = mm->n;
        tvg->s = s;
        tvg->nv = mm->nv;
        tvg->h = h;

        for(int i=0;i<tvg->s;i++){
            cout<<"inside edge_array: "<<edge_array[i].a->id<<","<<edge_array[i].b->id<<endl;
            cout<<"inside topview edges : "<<tvg->e[i].a->id<<","<<tvg->e[i].b->id<<endl;
            cout<<tvg->e[i].a->id<<","<<tvg->e[i].a->x<<","<<tvg->e[i].a->y<<endl;

            cout<<tvg->e[i].b->id<<","<<tvg->e[i].b->x<<","<<tvg->e[i].b->y<<endl;
        }

    }

    else if(c==1){

        for(int i=0;i<mm->n;i++){
            string sa,sb;
            int j,k,count1=0;
            sa=mm->e[i].a->id;
            sb=mm->e[i].b->id;

            for(int po=0;po<mm->nv;po++){
                if(fvg->v[po]->id.compare(sa)==0){
                    j=po;
                    count1++;
                }else if (fvg->v[po]->id.compare(sb)==0){
                    k=po;
                    count1++;
                }
                if(count1==2){
                    break;
                }
            }
            edge2D tou(fvg->v[j],fvg->v[k]);

//            if(isHidden(&mm->e[i],c,mm->nf)==true){
//                h++;
//                hidden_edge_array[i]=tou;

//            }else{
//                s++;
                edge_array[i]=tou;
            //}
        }
        fvg->e = edge_array;
        fvg->n = mm->n;
        fvg->s = mm->n;
        fvg->nv = mm->nv;
        fvg->h = 0;

    }

    else if (c==2){

        for(int i=0;i<mm->n;i++){
            string sa,sb;
            int j,k,count1=0;
            sa=mm->e[i].a->id;
            sb=mm->e[i].b->id;

            for(int po=0;po<mm->nv;po++){
                if(svg->v[po]->id.compare(sa)==0){
                    j=po;
                    count1++;
                }else if (svg->v[po]->id.compare(sb)==0){
                    k=po;
                    count1++;
                }
                if(count1==2){
                    break;
                }
            }
            edge2D tou(svg->v[j],svg->v[k]);

//            if(isHidden(&mm->e[i],c,mm->nf)==true){
//                h++;
//                hidden_edge_array[i]=tou;

//            }else{
//                s++;
                edge_array[i]=tou;
            //}
        }
        svg->e = edge_array;
        svg->n = mm->n;
        svg->s = mm->n;
        svg->nv = mm->nv;
        svg->h = 0;
    }

}

void generateWireframe(int c){
/*
order:
    topview x,z         x,-z
    frontview z,y       x,y
    sideview x,y        -z,y
    T F 0
    F S 1
    T S 2
*/
    vertex3D* vTemp;


    string idTemp;
    if(c==0){
        //a = tvg , b = fvg
            vertex3D** fv = new vertex3D*[tvg->nv];
            edge3D* e_new = new edge3D[tvg->n];
            int ecount=0;
            int num=tvg->nv;
        for(int i=0;i<num;i++){
            vTemp = new vertex3D();
            idTemp=tvg->v[i]->id;
            vTemp->x=tvg->v[i]->x;
            vTemp->z=-1*tvg->v[i]->y;
            vTemp->id=idTemp;
            int j=0;
            while(j<num){
                if(idTemp.compare(fvg->v[j]->id)==0){
                    vTemp->y=fvg->v[i]->y;
                    break;
                }
            j++;
            }
            fv[i]=vTemp;
            cout<<"fv : "<<fv[i]->x<<","<<fv[i]->y<<","<<fv[i]->z<<","<<fv[i]->id<<endl;
        }
        cout<<"tvg s"<<tvg->s<<endl;
        cout<<"fv check"<<fv[0]->id<<","<<fv[1]->id<<","<<fv[2]->id<<endl;
        for(int i=0;i<tvg->s;i++){
            string sa,sb;
            sa = tvg->e[i].a->id;
            sb = tvg->e[i].b->id;
            cout<<"sa sb "<<sa<<","<<sb<<endl;
            int count1=0,j=0,k=0;
            cout<<"num : "<<num<<endl;
            for(int po=0;po<num;po++){
                cout<<"fv[po]->id : "<<fv[po]->id<<endl;
                if(fv[po]->id.compare(sa)==0){
                    j=po;
                    count1++;
                }else if (fv[po]->id.compare(sb)==0){
                    k=po;
                    count1++;
                }
                if(count1==2){
                    break;
                }
            }
            cout<<"o1"<<endl;
            cout<<"j: "<< j<<" k: "<<k<<endl;
            edge3D et(fv[j],fv[k]);
            cout<<"edge "<<et.a->id<<endl;
            ecount = i;
            cout<<"o2"<<endl;
            e_new[i] = et;
            cout<<"i in loop"<<i<<endl;
        }
        cout<<"tvg h "<<tvg->h<<endl;
        ecount = tvg->s;
        for(int i=0;i<tvg->h;i++){
            string sa,sb;
            sa = tvg->hidden_edge[i].a->id;
            sb = tvg->hidden_edge[i].b->id;
            int count1=0,j,k;
            for(int po=0;po<num;po++){
                if(fv[po]->id.compare(sa)==0){
                    j=po;
                    count1++;
                }else if (fv[po]->id.compare(sb)==0){
                    k=po;
                    count1++;
                }
                if(count1==2){
                    break;
                }
            }
            edge3D et(fv[j],fv[k]);
            e_new[ecount] = et;
            ecount++;
        }
        //mm = new view3D(fv,e_new,tvg->n);
        mm->v = fv;
        mm->n = tvg->n;
        mm->e = e_new;
        mm->nv = tvg->nv;
//        cout<<"tvg n"<<tvg->n<<endl;
//        cout<<"mm n "<<mm->n<<endl;
//        for(int i=0;i<mm->nv;i++){
//            cout<<"mm vert:"<<mm->v[i]->x<<","<<mm->v[i]->y<<","<<mm->v[i]->z<<","<<mm->v[i]->id<<endl;
//        }
//        for(int i=0;i<mm->n;i++){
//            cout<<"mm edge: "<<mm->e[i].a->id<<","<<mm->e[i].b->id<<endl;
//            cout<<mm->e[i].a->id<<","<<mm->e[i].a->x<<","<<mm->e[i].a->y<<","<<mm->e[i].a->z<<endl;

//                  cout<<mm->e[i].b->id<<","<<mm->e[i].b->x<<","<<mm->e[i].b->y<<","<<mm->e[i].b->z<<endl;
//        }

    }
    else if(c==1){
/*-----------------------        // a = fvg , b = svg ----------------------------------------*/

        vertex3D** fv = new vertex3D*[fvg->nv];
        edge3D* e_new = new edge3D[fvg->n];
        int ecount=0;
        int num=fvg->nv;
        for(int i=0;i<num;i++){
            vTemp = new vertex3D();
            idTemp=fvg->v[i]->id;
            vTemp->z=fvg->v[i]->x;
            vTemp->y=fvg->v[i]->y;
            vTemp->id=idTemp;
            int j=0;
            while(j<num){
                if(idTemp.compare(svg->v[j]->id)==0){
                    vTemp->x=svg->v[i]->x;
                    break;
                }
            j++;
            }
            fv[i]=vTemp;
        }
        for(int i=0;i<fvg->s;i++){
            string sa,sb;
            sa = fvg->e[i].a->id;
            sb = fvg->e[i].b->id;
            int count1=0,j,k;
            for(int po=0;po<num;po++){
                if(fv[po]->id.compare(sa)==0){
                    j=po;
                    count1++;
                }else if (fv[po]->id.compare(sb)==0){
                    k=po;
                    count1++;
                }
                if(count1==2){
                    break;
                }
            }
            edge3D et(fv[j],fv[k]);
            ecount = i;
            e_new[i] = et;
        }
        ecount = fvg->s;
        for(int i=0;i<fvg->h;i++){
            string sa,sb;
            sa = fvg->hidden_edge[i].a->id;
            sb = fvg->hidden_edge[i].b->id;
            int count1=0,j,k;
            for(int po=0;po<num;po++){
                if(fv[po]->id.compare(sa)==0){
                    j=po;
                    count1++;
                }else if (fv[po]->id.compare(sb)==0){
                    k=po;
                    count1++;
                }
                if(count1==2){
                    break;
                }
            }
            edge3D et(fv[j],fv[k]);
            e_new[ecount] = et;
            ecount++;
        }

        mm->v = fv;
        mm->n = fvg->n;
        mm->e = e_new;
        mm->nv = fvg->nv;


    }
    else if (c==2){
/*------------------------       // a = tvg , b = svg------------------------------------------*/

        vertex3D** fv = new vertex3D*[tvg->nv];
        edge3D* e_new = new edge3D[tvg->n];
        int ecount=0;
        int num=tvg->nv;
        for(int i=0;i<num;i++){
            vTemp = new vertex3D();
            idTemp=tvg->v[i]->id;
            vTemp->x=-1*tvg->v[i]->x;
            vTemp->z=tvg->v[i]->y;
            vTemp->id=idTemp;
            int j=0;
            while(j<num){
                if(idTemp.compare(svg->v[j]->id)==0){
                    vTemp->y=svg->v[i]->y;
                    break;
                }
            j++;
            }
            fv[i]=vTemp;
        }

        for(int i=0;i<tvg->s;i++){
            string sa,sb;
            sa = tvg->e[i].a->id;
            sb = tvg->e[i].b->id;
            int count1=0,j,k;
            for(int po=0;po<num;po++){
                if(fv[po]->id.compare(sa)==0){
                    j=po;
                    count1++;
                }else if (fv[po]->id.compare(sb)==0){
                    k=po;
                    count1++;
                }
                if(count1==2){
                    break;
                }
            }
            edge3D et(fv[j],fv[k]);
            ecount = i;
            e_new[i] = et;
        }
        ecount = tvg->s;
        for(int i=0;i<tvg->h;i++){
            string sa,sb;
            sa = tvg->hidden_edge[i].a->id;
            sb = tvg->hidden_edge[i].b->id;
            int count1=0,j,k;
            for(int po=0;po<num;po++){
                if(fv[po]->id.compare(sa)==0){
                    j=po;
                    count1++;
                }else if (fv[po]->id.compare(sb)==0){
                    k=po;
                    count1++;
                }
                if(count1==2){
                    break;
                }
            }
            edge3D et(fv[j],fv[k]);
            e_new[ecount] = et;
            ecount++;
        }
        mm->v = fv;
        mm->n = tvg->n;
        mm->e = e_new;
        mm->nv = tvg->nv;
    }
}

bool isHidden(edge3D *e,int c,int d){
    double pop1,pop2;
    for(int i=0;i<d;i++){
        plane pt;
        pt=mm->p[i];
        pop1= (pt.a*e->a->x)+(pt.b*e->a->y)+(pt.c*e->a->z)+pt.d;
        pop2= (pt.a*e->b->x)+(pt.b*e->b->y)+(pt.c*e->b->z)+pt.d;
        if(c==0){
        pop1= pop1*pt.b;
        pop2= pop2*pt.b;
        } else if (c==1){
        pop1= pop1*pt.c;
        pop2= pop2*pt.c;
        } else if (c==2){
        pop1= pop1*pt.a;
        pop2=pop2*pt.a;
        }
        if(pop1<0||pop2<0){
            return true;
        }
    }
    return false;                              // c for view, d for number of planes c=0 for top view y = infinite,c=1 for frontview z =infinite, c=2 for sideview x = infinite

}

bool isHiddenPoint(vertex3D *v,int c){
    for(int i=0;i<mm->nf;i++){
        double pop,pop1;
        pop = mm->p[i].a*v->x+mm->p[i].b*v->y+mm->p[i].c*v->z+mm->p[i].d;
        if(c==0){
            pop1 = pop*mm->p[i].b;
        } else if (c==1){
            pop1 = pop*mm->p[i].c;
        } else{
            pop1 = pop*mm->p[i].a;
        }
        if(pop1<0){
            return true;
        }
    }
    return false;
}
