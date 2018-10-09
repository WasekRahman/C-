#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED
#include "itemtype.h"

class Fullstack
{

};

class Emptystack
{

};

template <class ItemType>
class StackType
{
    struct NodeType
    {
        ItemType info;
        NodeType* next;
    };

public:
    StackType();
    ~StackType();
    void push(ItemType);
    ItemType top();
    bool IsEmpty();
    bool IsFull();
    void Pop();
    void Print();
    void ReplaceItem(ItemType,ItemType);
private:
    NodeType* topPtr;
};
#endif // STACKTYPE_H_INCLUDED
