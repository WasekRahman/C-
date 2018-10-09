#include <iostream>

using namespace std;

int main()
{
    int tests,size,values;
    cout<<"Enter number of tests: ";
    cin>>tests;
    while(tests)
    {
        cout<<"Enter array size: ";
        cin>>size;
        int array[size];
        int count=0,limit;
        for(int index=0;index<size;index++)
        {
            cin>>values;
            array[index]=values;
        }
        if(size<=1)
        {
            count=1;
        }
        else{
        for(int index=size-1;index>0;index--)
        {
           if(array[index]>array[index-1])
           {
               count=count+1;
               limit=array[index-1];
           }
           else if(limit<array[index-1])
            {count=count+1;
           }
        }
        }
        cout<<"Cars with max speed: "<<count<<endl;




tests--;
    }
}
