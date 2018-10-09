#include "QueueUsingStacks.h"
#include <iostream>

using namespace std;

QueueUsingStacks::QueueUsingStacks()
{
    stack1;


}

QueueUsingStacks::~QueueUsingStacks()
{
    //dtor
}

bool QueueUsingStacks::isFull()
{
    stack<int> temp;
    temp = stack1;
    try
    {
        temp.push(5);
        return false;
    }
    catch(bad_alloc& exception)
    {
        return true;
    }
}
bool QueueUsingStacks::isEmpty()
{
    if(stack1.empty()==true)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool QueueUsingStacks::makeEmpty()
{
    while(stack1.empty()!=true)
    {
        stack1.pop();
    }

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
        print();
        return true;
    }
}
bool QueueUsingStacks::dequeue()
{
    int num;
    stack<int> temp1=stack1;
    stack<int> temp2;
    if(stack1.empty()==true)
    {
        cout<<"Queue is already empty. Cannot dequeue."<<endl;
        return false;
    }
    else
    {
        while(temp1.empty()!=true)
        {
            num = temp1.top();
            temp2.push(num);
            temp1.pop();

        }
        temp2.pop();
        while(temp2.empty()!=true)
        {
            num = temp2.top();
            temp1.push(num);
            temp2.pop();

        }
        stack1=temp1;
        print();

        return true;
    }

}

bool QueueUsingStacks::front()
{
  if(stack1.top()!=NULL)
  {

      return true;
  }
  else
  {
      return false;
  }
}
int QueueUsingStacks::size()
{
    cout<<"Size of Queue is "<<stack1.size()<<endl;
}

void QueueUsingStacks::print()
{
    stack<int> stack2;
    stack<int> stack3 = stack1;
    int temp;
    while(stack3.empty()!=true)
    {
        temp = stack3.top();
        stack2.push(temp);
        stack3.pop();
    }
    int tempValue;
    while(stack2.empty()!=true)
    {
        tempValue= stack2.top();
        cout<<tempValue;
        stack2.pop();
        if(stack2.size()>0)
        {
            cout<<"->";
        }
        else
        {
            cout<<endl;
        }

    }

}
