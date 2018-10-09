#ifndef QUETYPE_H_INCLUDED
#define QUETYPE_H_INCLUDED
#include<iostream>
class FullQueue{};
class EmptyQueue{};
template <class ItemType>
class QueType
{
public:
    QueType();
     QueType(int Max);
    ~QueType();
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
    void EnQue(ItemType);
    void DeQue(ItemType&);
    void setMax(ItemType);
    void Replaceitem(ItemType,ItemType);
    ItemType getmax();
private:
    int Front;
    int rear;
    ItemType* item;
    int maxQue;
};
#endif // QUETYPE_H_INCLUDED
