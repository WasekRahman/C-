#include "UnsortedType.h"
#include "NodeType.h"
#include <iostream>
#include <exception>

using namespace std;

template class UnsortedType<int>;
template class UnsortedType<char>;

template <class ItemType>
UnsortedType<ItemType>::UnsortedType()
{
    length=0;
    listData = NULL;
    currentPosition = NULL;
}

template<class ItemType>
bool UnsortedType<ItemType>::IsFull() const
{
    NodeType<ItemType>* location;
    try
    {
        location = new NodeType<ItemType>();
        delete location;
    }
    catch (std::bad_alloc exception)
    {
        return true;
    }
    return false;
}

template<class ItemType>
int UnsortedType<ItemType>::GetLength() const
{
    return length;
}

template <class ItemType>
bool UnsortedType<ItemType>::PutItem(ItemType item)
{

    NodeType<ItemType>* newItem;
    newItem = new NodeType<ItemType>;
    newItem->SetData(item);
    newItem->SetNext(listData);
    listData = newItem;
    length++;

}


template <class ItemType>
bool UnsortedType<ItemType>::DeleteItem(ItemType item)
{
    if(length==0)
    {
        return false;
    }
    else
    {
        NodeType<ItemType>* location = listData;
        NodeType<ItemType>* tempLocation = 0;
        if(item==listData->GetData())
        {
            tempLocation=location;
            listData=listData->GetNext();
        }
        else
        {
            while(!(item==(location->GetNext())->GetData()))
            {
                location = location->GetNext();
                tempLocation=location->GetNext();
                location->GetNext()==(location->GetNext())->GetNext();
            }
            delete tempLocation;
            length--;
            return true;
        }
    }
}

template<class ItemType>
void UnsortedType<ItemType>::ResetList()
{
    currentPosition = NULL;
}

template<class ItemType>
ItemType UnsortedType<ItemType>::GetNextItem()
{
    if (currentPosition == NULL)
    {
        currentPosition = listData;
    }
    else
    {
        currentPosition = currentPosition->GetNext();
       int item = currentPosition->GetData();
        return item;
    }

}


template <class ItemType>
bool UnsortedType<ItemType>::GetItem(ItemType item)
{
    NodeType<ItemType>* location = listData;
    bool moreToSearch=(location != NULL);
    while(moreToSearch)
    {
        if(item==location->GetData())
        {
            return true;

        }
        else
        {
            location = location->GetNext();
            moreToSearch=(location !=NULL);
        }
    }
}

template <class ItemType>
void UnsortedType<ItemType>::MakeEmpty()
{
    NodeType<ItemType>* tempPtr;
    while(listData!=NULL)
    {
        tempPtr=listData;
        listData=listData->GetNext();
        delete tempPtr;
    }
    length=0;
}

template <class ItemType>
void UnsortedType<ItemType>::print()
{
    NodeType<ItemType>* tempPtr=listData;

    while(tempPtr!=NULL)
    {
        cout << tempPtr->GetData() << " ";
        tempPtr=tempPtr->GetNext();

    }
    cout<<endl;
}


template <class ItemType>
UnsortedType<ItemType>::~UnsortedType()
{
    MakeEmpty();
}
