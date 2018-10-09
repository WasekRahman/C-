#include "include\SortedType.h"
#include "include\NodeType.h"
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
        if(location->GetData()==item)
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
     NodeType<ItemType>* newNode;
    NodeType<ItemType>* predLoc;
    NodeType<ItemType>* location;
    bool moreToSearch;

    location = listData;
    predLoc = NULL;
    moreToSearch = (location != NULL);
    while (moreToSearch)
    {
        if (location->GetData()< item)
        {
            predLoc = location;
            location = location->GetNext();
            moreToSearch = (location != NULL);
        }
        else moreToSearch = false;
    }
    newNode = new NodeType<ItemType>;
    newNode->SetData(item);

    if (predLoc == NULL)
    {
        newNode->SetNext(listData);
        listData = newNode;
    }
    else
    {
        newNode->SetNext(location);
        predLoc->SetNext(newNode);
    }
    length++;
}



template<class ItemType>
bool SortedType<ItemType>::DeleteItem(ItemType item)
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
void SortedType<ItemType>::ResetList()
{
  currentPosition = NULL;
}

template<class ItemType>
ItemType SortedType<ItemType>::GetNextItem()
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
