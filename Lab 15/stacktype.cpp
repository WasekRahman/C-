#include <iostream>
#include "stacktype.h"
using namespace std;

template <class ItemType>
StackType <ItemType>::StackType()
{
    topPtr=NULL;
}

template <class ItemType>
bool StackType<ItemType>::IsEmpty()
{
  return(topPtr==NULL);
}

template <class ItemType>
ItemType StackType<ItemType>::top()
{
    if(IsEmpty())
        throw Emptystack();
    else
        return topPtr->info;
}

template <class ItemType>
bool StackType<ItemType>::IsFull()
{
    NodeType* location;
    try
    {
        location= new NodeType;
        delete location;
        return false;
    }
    catch(bad_alloc& exception)
    {
        return true;
    }
}

template <class ItemType>
void StackType<ItemType>::push(ItemType newItem)
{
    if(IsFull())
        throw Fullstack();
    else
    {
        NodeType* location;
        location=new NodeType;
        location->info=newItem;
        location->next=topPtr;
        topPtr=location;
    }
}


template <class ItemType>
void StackType <ItemType>::Pop()
{
    if(IsEmpty())
        throw Emptystack();
        else
        {
            NodeType* tempPtr;
            tempPtr=topPtr;
            topPtr=topPtr->next;
            delete tempPtr;
        }

}
template <class ItemType>
StackType <ItemType>::~StackType()
{
    NodeType* tempPtr;
    while(topPtr!=NULL)
    {
        tempPtr=topPtr;
        topPtr=topPtr->next;
        delete tempPtr;
    }
}
template <class ItemType>
void StackType<ItemType>::Print()
{
    if(IsEmpty())
        throw Emptystack();
    else
    {
        NodeType* temp;
        temp=topPtr;
        while(temp->next!=NULL)
        {
             cout<<temp->info<<" ";
             temp=temp->next;
        }
        cout<<temp->info<<" ";

    }

    cout<<endl;
}



