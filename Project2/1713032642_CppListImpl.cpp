#include <iostream>
#include <list>
#include <iterator>
using namespace std;

void showlist(list <int> list1)
{
    list <int> :: iterator iterate;
    for(iterate = list1.begin(); iterate!= list1.end(); iterate++){
        cout<<*iterate<<"\t";
    }
    cout<<endl;
}

int main()
{

    list <int> list1;
    cout<<"Length is: " <<list1.size()<<endl;

    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(4);
    list1.push_back(9);
    list1.push_back(63);
    showlist(list1);

    list1.push_front(60);
    list1.push_back(90);
    showlist(list1);

    cout<<"First value: " <<list1.front()<<endl;
    cout<<"Last value: " <<list1.back()<<endl;
    cout<<"Normal: ";
    showlist(list1);
    cout<<"Reversed: ";
    list1.reverse();
    showlist(list1);
    cout<<"Size: " <<list1.size()<<endl;
    list1.push_back(99);
    list1.push_front(82);
    showlist(list1);
    list1.pop_back();
    list1.pop_back();
    list1.pop_front();
    list1.pop_front();
    showlist(list1);
    cout<<"Size: "<<list1.size()<<endl;
    list1.push_back(0);
    list1.sort();
    cout<<"Sorted: ";
    showlist(list1);
    list1.reverse();
    cout<<"Reversed: ";
    showlist(list1);
    list1.clear();
    if(list1.empty()==1)
    {
        cout<<"List is empty!";
    }
    else{
        cout<<"List is not empty!";
    }
    cout<<"\n"<<list1.size()<<endl;



    return 0;

}
