#include "queueType.h"
#include <iostream>

using namespace std;

template class queueType<int>;
template<class ItemType>
queueType<ItemType>::queueType(int max)
{
    maxQue = max + 1;
    front = maxQue - 1;
    rear = maxQue - 1;
    items = new ItemType[maxQue];
}
template<class ItemType>
queueType<ItemType>::queueType()
{
    maxQue = 501;
    front = maxQue - 1;
    rear = maxQue - 1;
    items = new ItemType[maxQue];
}

template<class ItemType>
queueType<ItemType>::~queueType()
{
    delete [] items;
}
template<class ItemType>
void queueType<ItemType>::MakeEmpty()
{
    front = - 1;
    rear = - 1;
}
template<class ItemType>
bool queueType<ItemType>::IsEmpty()
{

    if(items[maxQue]==NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}
template<class ItemType>
bool queueType<ItemType>::IsFull()
{
    return ((rear+1)%maxQue == front);
}
template<class ItemType>
void queueType<ItemType>::Enqueue(ItemType newItem)
{
        int count=0;
		if(IsFull())
		{
			cout<<"Queue is Full"<<endl;
			return;
		}
        else if (IsEmpty())
		{
			front = rear = 0;
		}
		else
		{
		    rear = (rear+1)%maxQue;
		}
		items[rear] = newItem;


}
template<class ItemType>
void queueType<ItemType>::Dequeue(ItemType& item)
{

}
template<class ItemType>
void queueType<ItemType>::LengthIs()
{
    cout<<"Length is: "<<maxQue<<endl;
}

template<class ItemType>
void queueType<ItemType>::print()
{
        if(front==-1 && rear==-1){
            cout<<"The Queue is empty";

        }
        cout<<"The values are: "<<endl;
        for(int index=front;index<=rear;index++){
            cout<<items[index]<<endl;
        }
}
