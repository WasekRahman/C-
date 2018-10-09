#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;


int fib(int n)
{
    if (n==1)
    {
        return 1;
    }
    else if(n==0)
    {
        return 0;
    }
    else {return fib(n-2)+fib(n-1);}
}
int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    else if(n==0)
    {
        return 0;
    }
    else{
        return n*factorial(n-1);
    }
}
int sumOfDigits(int n)
{
    if(n==1)
    {
        return 1;
    }
    else if(n==0)
    {
        return 0;
    }
    else
    {
        return n%10 + sumOfDigits(n/10);
    }

}
int findMin(int a[], int size)
{
    int min;

    if(size==1)
        {return a[0];
        }

    else {
        min=findMin(a,size-1);

        if(min<a[size-1])
            return min;
        else
            return a[size-1];
    }
}
int decToBin(int dec)
{
    if (dec == 0)
    {
        return 0;
    }
    else
    {
        return (dec%2 + 10 * decToBin(dec/2));
    }
}

float sumOfSequence(float x)
{
    if(x==0)
    {
        return 1;
    }
    else{
    return 1/pow(2,x) + sumOfSequence(x-1);
    }
}
int main()
{
    int num, index=0, a[5],value, dec;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Fibonacci : "<<endl;
    while(index<=num)
    {
    cout<<fib(index)<<endl;
    index++;
    }
    cout<<"Factorial: " <<endl;
    cout<<factorial(num)<<endl;
    cout<<"Sum of digits: " <<endl;
    cout<<sumOfDigits(12345)<<endl;
    cout<<"Enter values of array : "<<endl;
    for(int index2=0;index2<5;index2++)
    {
        cin>>value;
        a[index2]=value;
    }
    cout<<"Minimum value : ";
    cout<<findMin(a,5)<<endl;
    cout<<"Enter decimal number to convert to binary: "<<endl;
    cin>>dec;
    cout<<"Binary number: ";
    cout<<decToBin(dec)<<endl;
    cout<<"Sum of sequence : ";
    cout<<sumOfSequence(5.0);


}
