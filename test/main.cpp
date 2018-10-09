#include <iostream>
#include "dynarr.cpp"
#include "dynarr.h"


using namespace std;

int main()
{
    cout << "Creating object" << endl;
    dynArr <int> *obj(5); //new dynArr<int>(5);
    for(int i=0;i<5;i++)
    {
         obj->setValue(i, i+3);
    }
    int x,value;
    cin>>value;
    x= obj->getValue(value);
    cout<<"value at index " << value<<" is= "<< x <<endl;
    return 0;
}
