#include "UnsortedType.h"
#include <iostream>
#include <exception>

using namespace std;

template class UnsortedType<int>;
template class UnsortedType<float>;
template class UnsortedType<double>;

template <class ItemType>
UnsortedType<ItemType>::UnsortedType()
{
    length=0;
    listData = NULL;
    currentPos = NULL;
}

template <class ItemType>
int UnsortedType<ItemType>::LengthIs()
{
	return length;
}

template<class ItemType>
bool UnsortedType<ItemType>::IsFull()
{
	NodeType* location;
	try{
	location = new NodeType;
	delete location;
	return false;
	}

	catch(bad_alloc exception){
	 return true;
	}
}

template <class ItemType>
void UnsortedType<ItemType>::InsertItem(ItemType item)
{

    NodeType* newItem;
    newItem = new NodeType;
    newItem->info= item;
    newItem->next= listData;
    listData = newItem;
    length++;
}


template <class ItemType>
void UnsortedType<ItemType>::DeleteItem(ItemType item)
{
    NodeType* location = listData;
    NodeType* tempLocation = 0;
    if(item==listData->info)
    {
        tempLocation=location;
        listData=listData->next;
    }
    else
    {
        while(!(item==(location->next)->info))
        {
            location = location->next;
            tempLocation=location->next;
            location->next=(location->next)->next;
        }
        delete tempLocation;
        length--;
    }
}

template<class ItemType>
void UnsortedType<ItemType>::ResetList()
{
    currentPos = 0;
}

template<class ItemType>
void UnsortedType<ItemType>::GetNextItem(ItemType& item)
{

    currentPos = currentPos->next;
    item = currentPos->info;

}


template <class ItemType>
void UnsortedType<ItemType>::RetrieveItem(ItemType& item, bool& found)
{
  NodeType* location = listData;
  bool moreToSearch=(location != NULL);
  found=false;
  while(moreToSearch && !found)
  {
      if(item==location->info)
        found=true;
      else{
        location = location->next;
        moreToSearch=(location !=NULL);
      }
  }
}

template <class ItemType>
void UnsortedType<ItemType>::MakeEmpty()
{
    NodeType* tempPtr;
    while(listData!=NULL)
    {
        tempPtr=listData;
        listData=listData->next;
        delete tempPtr;
    }
    length=0;
}
template <class ItemType>
void UnsortedType<ItemType>::print()
{
    NodeType* tempPtr=listData;

    while(tempPtr!=NULL)
    {
        cout << tempPtr->info << " ";
        tempPtr=tempPtr->next;

    }
    cout<<endl;
}


template <class ItemType>
UnsortedType<ItemType>::~UnsortedType()
{
    MakeEmpty();
}
