#include "src\SortedType.cpp"
#include "src\NodeType.cpp"
#include <iostream>

int main(void)
{
	SortedType<int> list;
	cout<<"Length is " <<list.GetLength()<<endl;
	list.PutItem(5);
	list.PutItem(9);
	list.PutItem(1);
	list.PutItem(8);
	cout<<list.GetLength()<<endl;
	list.print();
	cout<<"Adding new number.. "<<endl;
	list.PutItem(3);
	cout<<"Length is "<<list.GetLength()<<endl;
    list.print();
    bool result;
    int searchnumber;
    cin>>searchnumber;
    list.GetItem(searchnumber,result);
    if(!result)
        {
            cout<<endl<<"Not Found"<<endl;
        }
    else {cout<<endl<<"Found"<<endl;}
    list.DeleteItem(8);
    //list.DeleteItem(9);
    list.print();

}
