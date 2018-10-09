#include <iostream>

using namespace std;

int main()
{
    int row=3;int column=3;
    int index,index2;
    int array[row][column];
    int count=0;
    int count2=0;
    int values;
    cout<<"Enter the values: ";
    for(int index=0;index<row;index++)
    {
        for(int index2=0;index2<column;index2++)
        {
            cin>>values;
            array[index][index2]=values;

        }
    }


for (index=0;index<row;index++)
{
for (index2=0;index2<column;index2++)
{
if((index+index2+2)%2==0)
{

count=count+array[index][index2];
}
else{
    count2=count2+array[index][index2];
}
}
}



  cout<<"Sum: "<<count<<endl;
  cout<<"Sum: "<<count2;

}
