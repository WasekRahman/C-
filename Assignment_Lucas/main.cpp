#include <iostream>

using namespace std;

int lucas(int n)
{
    if(n==0)
    {
        return 2;
    }
    else if(n==1)
    {
        return 1;
    }
    else {
        return lucas(n-1) + lucas(n-2);
    }
}

int main()
{
    int number;
    cout<<"Enter a value: ";
    cin>>number;
    for(int index=0;index<=number;index++)
    {
       cout<<lucas(index)<<endl;
    }
    cout<<"Lucas values for 11 and 13 are: "<<endl;
    cout<<lucas(11)<<endl;
    cout<<lucas(13);

}
