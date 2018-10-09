#include "src\pqtype.cpp"
int main()
{
    PQType<int> priorityQueue(10);
    if(priorityQueue.IsEmpty())
        cout<<"Empty"<<endl;
    priorityQueue.Enque(4);
    priorityQueue.Enque(9);
    priorityQueue.Enque(2);
    priorityQueue.Enque(7);
    priorityQueue.Enque(3);
    priorityQueue.Enque(11);
    priorityQueue.Enque(17);
    priorityQueue.Enque(0);
    priorityQueue.Enque(5);
    priorityQueue.Enque(1);



    if(!priorityQueue.IsEmpty())
        cout<<"Not Empty"<<endl;

    priorityQueue.Printque();
    cout<<endl;

    int temp;
    priorityQueue.Deque(temp);
    cout<<temp<<endl;

    priorityQueue.Deque(temp);
    cout<<temp<<endl;

    priorityQueue.Printque();
    cout<<endl;

    priorityQueue.Deque(temp);
    priorityQueue.Deque(temp);
    priorityQueue.Deque(temp);

    priorityQueue.Printque();


}
