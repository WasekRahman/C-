#include <iostream>
#include "src/SortedType.cpp"

using namespace std;

int main()
{
    SortedType<int> list;
    list.PrintList();
    cout<<list.LengthIs()<<endl;
    list.InsertItem(5);
    list.InsertItem(7);
    list.InsertItem(4);
    list.InsertItem(2);
    list.InsertItem(1);
    list.PrintList();
    bool found;
    int num=6;
    list.RetrieveItem(num,found);
    if(found==true)
    {
        cout<<"Found!"<<endl;
    }
    else{
        cout<<"Not found!"<<endl;
    }
    int num2=7;
    bool found2;
    list.RetrieveItem(num2,found2);
    if(found2==true)
    {
        cout<<"Found!"<<endl;
    }
    else{
        cout<<"Not found!"<<endl;
    }
    if(list.IsFull()==true)
    {
        cout<<"Full!\n";
    }
    else{
        cout<<"Not full!\n";
    }
}
