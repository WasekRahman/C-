#include <iostream>
using namespace std;
template<class A>

class Rectangle
{
private:
     A width;
     A height;

public:
   Rectangle(A w, A h);
    A set_height();
    A set_width();
    A area(A width,A height);
    A area();
};

template <class A>
 Rectangle<A>::Rectangle(A w, A h)
{
    width=w;
    height=h;
}

template <class A>
A Rectangle<A>::area(A w, A h)
{
    return w*h;
    }
    template <class A>

    A Rectangle<A>::area()
{
    return width*height;
    }

int main()
{
 Rectangle<double> r1(2.5,2.3);
 cout<<r1.area()<<endl;
}
