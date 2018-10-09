#ifndef PQTYPE_H_INCLUDED
#define PQTYPE_H_INCLUDED
#include "heaptype.cpp"

class FullPQ{};
class EmptyPQ{};

template <class itemtype>
class PQType
{
public:
    PQType();
    PQType(int);
    ~PQType();
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
    void Enque(itemtype);
    void Deque(itemtype&);
    void Printque();
    private:
    int length;
    HeapType<itemtype> items;
    int maxitems;
};
#endif // PQTYPE_H_INCLUDED
