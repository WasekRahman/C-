#include <iostream>
#include "unsortedtype.h"
using namespace std;

int main()
{
    UnsortedType <int> mylist;

    int num;
    int numberofintegers;
    if(mylist.lengthIs()==0)
    {
        cout<<"List is empty!"<<endl;
    }
    cin>>numberofintegers;
    for(int index=0;index<numberofintegers;index++)
    {
        cin>>num;
        mylist.insertItem(num);

    }
    if(mylist.lengthIs()==0)
    {
        cout<<"List is empty!"<<endl;
    }
    else if(mylist.lengthIs()>0)
    {
       cout<<"Length is " <<mylist.lengthIs()<<endl;
    }
    mylist.print();
    cout<<"Add number"<<endl;
    int newnum;
    cin>>newnum;
    mylist.AddItem(newnum);
    mylist.print();
    cout<<"New length: "<<mylist.lengthIs()<<endl;
    bool result;
    int searchnumber;
    while(result!=true)
    {
    cin>>searchnumber;
    mylist.retrieveItem(searchnumber,result);
    if(!result)
        {
            cout<<endl<<"Not Found"<<endl;
        }
    else cout<<endl<<"Found"<<endl;
    }
    int delnum;
    cout<<"Delete number: ";
    cin>>delnum;
    mylist.deleteItem(delnum);
    mylist.print();
    mylist.makeEmpty();
    if(mylist.lengthIs()==0)
    {
        cout<<"List is empty!"<<endl;
    }
    else if(mylist.lengthIs()>0)
    {
       cout<<"Length is " <<mylist.lengthIs()<<endl;
    }

}
