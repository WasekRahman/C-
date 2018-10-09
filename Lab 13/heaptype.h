#ifndef HEAPTYPE_H_INCLUDED
#define HEAPTYPE_H_INCLUDED
template <class itemtype>
struct HeapType
{
    void ReheapDown(int root,int bottom);
    void ReheapUp(int root,int bottom);
    itemtype* elements;
    int numElements;
};
#endif // HEAPTYPE_H_INCLUDED
