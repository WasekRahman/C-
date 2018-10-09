#include "triangle.h"
#include<iostream>

using namespace std;



void Triangle::set(double h,double w)
{
    height=h;
    width=w;
}

double Triangle::set_height()
{
    if(height<0){

        height=0;
    }

    return height;


}

double Triangle::set_width()
{
    if(width<0)
    {

     width=0;
    }

    return width;

}

double Triangle::area()
{
    double Area;
    Area=0.5*height*width;
    return Area;
}

void Triangle::print()
{
    cout<<"Height: "<<height<<endl;
    cout<<"Widthc: "<<width<<endl;
}

int main()
{

    cout<<"Enter Height and width"<<endl;
    double h,w;
    cin>>h;
    cin>>w;
    Triangle r2;
    r2.set(h,w);
    cout<<r2.area()<<endl;
    r2.print();
}


