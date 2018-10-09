#include <iostream>

using namespace std;

int main()
{
    int row,column, Values, biggest;
    cout<<"Enter row: ";
    cin>>row;
    cout<<"Enter column: ";
    cin>>column;
    int array[row][column];
    for(int index=0;index<row;index++)
    {
        for(int index2=0;index2<column;index2++)
        {
        cin>>Values;
        array[index][index2]=Values;
        }
    }
    biggest=array[0][0];
    for(int index=0;index<row;index++)
    {
        for(int index2=0;index2<column;index2++)
        {
        if(array[index][index2]>biggest)
        {
            biggest=array[index][index2];
        }
        }
    }
    int smallest=array[0][0];
    for(int index=0;index<row;index++)
    {
        for(int index2=0;index2<column;index2++)
        {
        if(array[index][index2]<smallest)
        {
            smallest=array[index][index2];
        }
        }
    }
    double count=0;
    for(int index=0;index<row;index++)
    {
        for(int index2=0;index2<column;index2++)
        {
        count=count+array[index][index2];
        }
    }
    double average=count/(row*column);
    cout<<"The largest number is "<<biggest<<endl;
    cout<<"The smallest number is "<<smallest<<endl;
    cout<<"The average is "<<average;

}
