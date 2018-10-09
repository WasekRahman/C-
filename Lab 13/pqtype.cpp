#include "pqtype.h"
#include <iostream>
using namespace std;
template <class itemtype>
PQType<itemtype>::PQType(int Max)
{
    maxitems=Max;
    items.elements=new itemtype[Max];
    length=0;
}

template <class itemtype>
PQType<itemtype>::PQType()
{
    length=0;
}

template <class itemtype>
PQType<itemtype>::~PQType()
{
    delete [] items.elements;
}

template <class itemtype>
void PQType<itemtype>::MakeEmpty()
{
    length=0;
}

template <class itemtype>
bool PQType<itemtype>::IsEmpty()
{
    return length==0;
}

template <class itemtype>
bool PQType<itemtype>::IsFull()
{
    return length==maxitems;
}

template <class itemtype>
void PQType<itemtype>::Enque(itemtype newItem)
{
    if(length==maxitems)
        throw FullPQ();
    else
    {

        length++;
        items.elements[length-1]=newItem;
        items.ReheapUp(0,length-1);
    }
}

template <class itemtype>
void PQType<itemtype>::Deque(itemtype& item)
{
    if(length==0)
        throw EmptyPQ();
    else
        {
            item=items.elements[0];
            items.elements[0]=items.elements[length-1];
            length--;
            items.ReheapDown(0,length-1);
        }
}

template <class itemtype>
void PQType<itemtype>::Printque()
{
    if(length==0)
        throw EmptyPQ();
    else
    {
        for(int i=0;i<length;i++)
        {
            cout<<items.elements[i]<<" ";
        }
    }
}
