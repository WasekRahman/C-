#include "SortedType.h"
#include "NodeType.h"
#include <iostream>
#include <exception>
using namespace std;


template class SortedType<int>;
template class SortedType<char>;

template<class ItemType>
SortedType<ItemType>::SortedType()
{
    length=0;
    listData = NULL;
    currentPosition = NULL;
}

template<class ItemType>
SortedType<ItemType>::~SortedType()
{
    MakeEmpty();
}

template<class ItemType>
void SortedType<ItemType>::MakeEmpty()
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

template<class ItemType>
bool SortedType<ItemType>::IsFull() const
{
	NodeType<ItemType>* location;
	try{
	location = new NodeType<ItemType>;
	delete location;
	return false;
	}

	catch(bad_alloc exception){
	 return true;
	}
}

template<class ItemType>
int SortedType<ItemType>::GetLength() const
{
	return length;
}

template<class ItemType>
bool SortedType<ItemType>::GetItem(ItemType item)
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

template<class ItemType>
bool SortedType<ItemType>::PutItem(ItemType item)
{
    NodeType<ItemType>* newItem;
    newItem = new NodeType<ItemType>;
    newItem->SetData(item);
    newItem->SetNext(listData);
    listData = newItem;
    length++;
}

template<class ItemType>
bool SortedType<ItemType>::DeleteItem(ItemType item)
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
        while(item!=(location->GetNext())->GetData())
        {
            location = location->GetNext();
            tempLocation=location->GetNext();
            cout<<tempLocation<<endl;
            location->SetNext((location->GetNext())->GetNext());
        }
        delete tempLocation;
        length--;

    }
}

template<class ItemType>
void SortedType<ItemType>::ResetList()
{
  currentPosition = 0;
}

template<class ItemType>
ItemType SortedType<ItemType>::GetNextItem()
{
	return ItemType();
}
template <class ItemType>
void SortedType<ItemType>::print()
{
    NodeType<ItemType>* tempPtr=listData;

    while(tempPtr!=NULL)
    {
        cout << tempPtr->GetData() << " ";
        tempPtr=tempPtr->GetNext();

    }
    cout<<endl;
}
