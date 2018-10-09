#include "src\quetype.cpp"

#include <iostream>

using namespace std;


void print(QueType<int> queue)
{
    QueType<int> temp;
    int values;
    while(!queue.IsEmpty())
    {
        queue.Dequeue(values);
        temp.Enqueue(values);
        cout << values << " ";
    }
    queue = temp;
    cout << endl;
}

void IsEmpty(QueType<int> queue)
{
    if(queue.IsEmpty()==true)
    {
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }
}

void IsFull(QueType<int> queue)
{
    if(queue.IsFull()==true)
    {
        cout<<"Queue is full"<<endl;
    }
    else{
        cout<<"Queue is not full"<<endl;
    }
}


int main()
{
    QueType<int> queue;
    int item;
    IsEmpty(queue);
    queue.Enqueue(5);
    queue.Enqueue(7);
    queue.Enqueue(4);
    queue.Enqueue(2);
    IsEmpty(queue);
    IsFull(queue);
    queue.Enqueue(6);
    queue.Enqueue(8);
    print(queue);
    IsFull(queue);
    print(queue);
    //queue.Dequeue(item);
    //queue.Dequeue(item);
}

