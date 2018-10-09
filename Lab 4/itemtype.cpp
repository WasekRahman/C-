#include "itemtype.h"

ItemType::ItemType()
{
    value=0;
}

RelationType ItemType::ComparedTo(ItemType otheritem)
{
        if(value<otheritem.value)
            return LESS;
        else if (value>otheritem.value)
            return GREATER;
        else
            return EQUAL;
}

void ItemType::Initialize(int number)
{
    value=number;
}

void ItemType::print(int x)
{
    switch(x)
    {
    case 1:
        if(value%2==0)
            cout<<value<<" ";
            break;

    case 2:
        if(value%2!=0)
            cout<<value<<" ";
        break;

    case 3:
        int counter=0;
        if(value!=2&&value%2==0)
            break;
        else{
        for(int i=1;i<=value;i++)
        {
            if(value%i==0)
                counter++;

        }
        if(counter<3)
            cout<<value<<" ";
        break;
        }
           }
}

int ItemType::getVal()
{
    return value;
}
