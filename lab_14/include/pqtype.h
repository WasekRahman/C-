#ifndef PQTYPE_H_INCLUDED
#define PQTYPE_H_INCLUDED
#include "heaptype.h"
class FullPQ
{};
class EmptyPQ
{};
template<class ItemType>
class PQType
{
public:
    PQType();
    ~PQType();
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
    void Enqueue(ItemType);
    void Dequeue(ItemType&);
    void PrintQueue();
private:
    int length;
    HeapType<ItemType> items;
    int maxItems;
};
#endif // PQTYPE_H_INCLUDED
