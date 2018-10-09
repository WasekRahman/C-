#include "include\QueueUsingStacks.h"
#include <iostream>
#include <stack>

using namespace std;

void IsFull(QueueUsingStacks queue)
{
    if(queue.isFull()==true)
    {
        cout<<"Queue is full!"<<endl;
    }
    else
    {
        cout<<"Queue is not full!"<<endl;
    }
}

void IsEmpty(QueueUsingStacks queue)
{
    if(queue.isEmpty()==true)
    {
        cout<<"Queue is empty!"<<endl;
    }
    else
    {
        cout<<"Queue is not empty!"<<endl;
    }
}


int main()
{
    QueueUsingStacks queue;
    IsEmpty(queue);
    queue.dequeue();
    queue.enqueue(103);
    queue.enqueue(105);
    queue.enqueue(10);
    queue.enqueue(11);
    queue.dequeue();
    queue.enqueue(9);
    queue.makeEmpty();
    IsEmpty(queue);
    queue.size();
    queue.enqueue(10);
    queue.enqueue(2);
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();




}
