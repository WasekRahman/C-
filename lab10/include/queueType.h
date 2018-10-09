#ifndef queueType_H_INCLUDED
#define queueType_H_INCLUDED

class FullQueue
{};
class EmptyQueue
{};
template<class ItemType> class queueType
{
public:
    queueType();
    queueType(int max);
    ~queueType();
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
    void Enqueue(ItemType);
    void Dequeue(ItemType&);
    void LengthIs();
    void print();
private:
    int front;
    int rear;
    ItemType* items;
    int maxQue;
};

#endif // queueType_H_INCLUDED
