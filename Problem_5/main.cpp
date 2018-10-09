#include <iostream>

using namespace std;

int main()
{
    int tests, array_size, number,value, time=0;
    int max=0;
    cout<<"Enter number of tests: ";
    cin>>tests;
    while(tests){
    cout<<"Enter array size: ";
    cin>>array_size;
    int array[array_size];
    cout<<"Enter number to be reached: ";
    cin>>number;

    for(int index=0;index<array_size;index++)
    {
        cin>>value;
        array[index]=value;
    }
    for(int index=0;index<array_size;index++)
    {
        int count=0;
        while(array[index]<number){
                array[index]=array[index]+1;
            count=count+1;
        }
        if(count>max)
        {
            max=count;
        }

    }
    cout<<max<<endl;


tests--;
    }




    }

