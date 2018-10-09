#include "QueueUsingVector.h"
#include <iostream>

using namespace std;

QueueUsingVector::QueueUsingVector()
{
    vector1;


}

QueueUsingVector::~QueueUsingVector()
{

}

bool QueueUsingVector::isFull()
{
    vector<int> temp;
    temp = vector1;
    try
    {
        temp.push_back(5);
        return false;
    }
    catch(bad_alloc& exception)
    {
        return true;
    }
}
bool QueueUsingVector::isEmpty()
{
    if(vector1.empty()==true)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool QueueUsingVector::makeEmpty()
{
    while(vector1.empty()!=true)
    {
        vector1.pop_back();
    }

}
bool QueueUsingVector::enqueue(int value)
{
    if(isFull()==true)
    {
        return false;
    }
    else
    {
        vector1.push_back(value);
        print();
        return true;
    }
}
bool QueueUsingVector::dequeue()
{
    int num;
    vector<int> temp1=vector1;
    vector<int> temp2;
    if(vector1.empty()==true)
    {
        cout<<"Queue is already empty. Cannot dequeue."<<endl;
        return false;
    }
    else
    {
        while(temp1.empty()!=true)
        {
            num = temp1.back();
            temp2.push_back(num);
            temp1.pop_back();

        }
        temp2.pop_back();
        while(temp2.empty()!=true)
        {
            num = temp2.back();
            temp1.push_back(num);
            temp2.pop_back();

        }
        vector1=temp1;
        print();

        return true;
    }

}

bool QueueUsingVector::front()
{
  if(vector1.back()!=NULL)
  {

      return true;
  }
  else
  {
      return false;
  }
}
int QueueUsingVector::size()
{
    cout<<"Size of Queue is "<<vector1.size()<<endl;
}

void QueueUsingVector::print()
{
    vector<int> vector2;
    vector<int> vector3 = vector1;
    int temp;
    while(vector3.empty()!=true)
    {
        temp = vector3.back();
        vector2.push_back(temp);
        vector3.pop_back();
    }
    int tempValue;
    while(vector2.empty()!=true)
    {
        tempValue= vector2.back();
        cout<<tempValue;
        vector2.pop_back();
        if(vector2.size()>0)
        {
            cout<<"->";
        }
        else
        {
            cout<<endl;
        }


    }

}
