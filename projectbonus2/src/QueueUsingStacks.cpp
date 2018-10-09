#include "QueueUsingStacks.h"
using namespace std;


QueueUsingStacks::QueueUsingStacks()
{

}

QueueUsingStacks::~QueueUsingStacks()
{
    //dtor
}

bool QueueUsingStacks::enqueue(int value)
{
    if(isFull()==true)
    {
        return false;
    }
    else
    {
        stack1.push(value);
        return true;
    }
}

bool QueueUsingStacks::dequeue(int& value)
{


}
