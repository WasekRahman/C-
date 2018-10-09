#include "stackType.h"
#include <iostream>
#include <string>

using namespace std;

template class StackType<int>;
template <class ItemType>
StackType<ItemType>::StackType()
{
    top = -1;
}
template <class ItemType>
bool StackType<ItemType>::IsEmpty()
{
    return (top == -1);
}
template <class ItemType>
bool StackType<ItemType>::IsFull()
{
    return (top == MAX_ITEMS-1);
}
template <class ItemType>
void StackType<ItemType>::Push(ItemType newItem)
{
    if( IsFull() ){
    throw string("Stack is full");}
    top++;
    items[top] = newItem;
}
template <class ItemType>
void StackType<ItemType>::Pop()
{
    if( IsEmpty() ){
            throw string("Stack is Empty");
        }
    top--;
}
template <class ItemType>
ItemType StackType<ItemType>::Top()
{
    if (IsEmpty()){
        throw string("Stack is Empty");;}
    return items[top];
}

template <class ItemType>
void StackType<ItemType>::print()
{
    int count=top;
    while(count!=-1)
    {
    int item = items[count];
    cout<<item<<endl;
    count--;
    }
}
