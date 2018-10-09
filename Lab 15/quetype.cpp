#include "quetype.h"
using namespace std;
template <class ItemType>
QueType<ItemType>::QueType(int Max)
{
    maxQue=Max+1;
    Front=maxQue-1;
    rear=maxQue-1;
    item=new ItemType[maxQue];
}

template <class ItemType>
QueType<ItemType>::QueType()
{
    maxQue=501;
    Front=maxQue-1;
    rear=maxQue-1;
    item=new ItemType[maxQue];
}
template <class ItemType>
QueType<ItemType>::~QueType()
{
    delete [] item;
}
template <class ItemType>
void QueType<ItemType>::MakeEmpty()
{
    Front=maxQue-1;
    rear=maxQue-1;
}

template <class ItemType>
bool QueType<ItemType>::IsEmpty()
{
    return (rear==Front);
}

template <class ItemType>
bool QueType<ItemType>::IsFull()
{
    return ((rear+1)%maxQue==Front);
}

template <class ItemType>
void QueType<ItemType>::EnQue(ItemType newItem)
{
    if(IsFull())
        throw FullQueue();
    else
    {
        rear=(rear+1)%maxQue;
        item[rear]=newItem;
    }
}

template <class ItemType>
void QueType<ItemType>::DeQue(ItemType& s)
{
    if(IsEmpty())
        throw EmptyQueue();
    else
    {
        Front=(Front+1)%maxQue;
        s=item[Front];

    }
}
template <class ItemType>
ItemType QueType<ItemType>::getmax()
{
    return maxQue;
}

template <class ItemType>
void QueType<ItemType>::setMax(ItemType a)
{
    maxQue=a;
}


template <class ItemType>
void QueType<ItemType>::Replaceitem(ItemType old,ItemType n)
{
    int y;
    for(int i=0;i<getmax();i++)
    {
        try{DeQue(y);}
        catch(EmptyQueue exception){};
        if(y==n){
       try{EnQue(n);}
       catch (FullQueue exception){};}

       else
       {
           try{EnQue(y);}
       catch (FullQueue exception){};
       }

    }
}
