#include "rectangle.h"
#include<iostream>

using namespace std;

Rectangle::Rectangle()
{
    height=0;
    width=0;
}

void Rectangle::set(double h,double w)
{
    height=h;
    width=w;
}

double Rectangle::set_height()
{
    if(height<0){

        height=0;
        cout<<"error"<<endl;
    }

    return height;


}

double Rectangle::set_width()
{
    if(width<0)
    {

     width=0;
      cout<<"error"<<endl;
    }

    return width;

}

double Rectangle::area()
{
    double Area;
    Area=height*width;
    return Area;
}

void Rectangle::print()
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
    Rectangle r2;
    r2.set(h,w);
    cout<<r2.area()<<endl;
    r2.print();
}

