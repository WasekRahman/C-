#include "rectangle.cpp"

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
