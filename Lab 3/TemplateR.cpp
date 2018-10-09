#include "Templater.h"
template <class A>
#include<iostream>

using namespace std;




template <class A>
A Rectangle<A>::set_height()
{
    if(height<0){

        height=0;
        cout<<"error"<<endl;
    }

    return height;


}
template <class A>
A Rectangle<A>::set_width()
{
    if(width<0)
    {

     width=0;
      cout<<"error"<<endl;
    }

    return width;

}
template <class A>
A Rectangle<A>::area()
{
    double Area;
    Area=height*width;
    return Area;
}



