#include <iostream>
#include "src\queueType.cpp"

using namespace std;

void IsEmpty(queueType <int> Queue)
{
    if(Queue.IsEmpty()==true)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<"Not empty"<<endl;
    }
}
int main()
{

    int maxsize;
    cout<<"Enter max size of Queue: "<<endl;
    cin>>maxsize;
    queueType <int> Queue(maxsize);
    IsEmpty(Queue);
    Queue.LengthIs();
    int count=0,values;

    while(count<4)
    {
        cin>>values;
        Queue.Enqueue(values);
        count++;
    }
    Queue.print();
    return 0;
}
