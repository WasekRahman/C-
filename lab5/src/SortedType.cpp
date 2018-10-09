#include "SortedType.h"
#include <iostream>

using namespace std;

template<class ItemType>
SortedType<ItemType>::SortedType()
{
    length = 0;
    currentPos = -1;
}
template<class ItemType>
void SortedType<ItemType>::MakeEmpty()
{
    length = 0;
}
template<class ItemType>
bool SortedType<ItemType>::IsFull() const
{
    return (length == MAX_ITEMS);
}
template<class ItemType>
int SortedType<ItemType>::LengthIs() const
{
    return length;
}
template<class ItemType>
void SortedType<ItemType>::RetrieveItem(ItemType& item, bool& found)

{
    /* Binary Search */
    int midPoint;
    int first = 0;
    int last = length - 1;
    found = false;
    while ((first <= last) && !found)
    {
        midPoint = (first + last) / 2;
        if (item < info[midPoint])
            last = midPoint - 1;
        else if (item > info[midPoint])
            first = midPoint + 1;
        else
        {
            found = true;
            item = info[midPoint];
        }
    }
}
template<class ItemType>
void SortedType<ItemType>::InsertItem(ItemType
                                      item)
{
    int location = 0;
    bool found = false;
    while (location < length && !found)
    {
        if (item < info[location])
            found = true;
        else
            location++;
    }
    for(int index = length;
            index>location;
            index--)
    {
        info[index] = info[index - 1];
    }
    info[location] = item;
    length++;
}
template<class ItemType>
void SortedType<ItemType>::DeleteItem(ItemType
                                      item)
{
    int location = 0;
    bool found = false;
    while (location < length && !found)
    {
        if (item == info[location])
            found = true;
        else
            location++;
    }
    for (int index = location + 1;
            index<length;
            index++)
    {
        info[index - 1] = info[index];
    }
    length--;
}
template<class ItemType>
void SortedType<ItemType>::ResetList()
{
    currentPos = -1;
}
template<class ItemType>
bool SortedType<ItemType>::IsLastItem()
{
    return (currentPos == length - 1);
}
template<class ItemType>
void SortedType<ItemType>::GetNextItem(ItemType&
                                       item)
{
    currentPos++;
    item = info[currentPos];
}


template<class ItemType>
void SortedType<ItemType>::PrintList()
{
    int smallest,temp;
    if(length==0)
    {
        cout<<"List is empty!\n";
    }
    else{

	for(int index=1;index<=LengthIs()-1;index++)
    {
        temp=info[index];
        int index2=index-1;

        while((temp<info[index2])&&(index2>=0))
        {
            info[index2+1]=info[index2];
            index2=index2-1;
        }

        info[index2+1]=temp;
    }
}
for(int index=0;index<LengthIs();index++)
{
    cout<<info[index]<<endl;
}
}
