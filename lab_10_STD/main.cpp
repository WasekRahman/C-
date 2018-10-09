#include <iostream>
#include <queue>
#include <exception>

using namespace std;


void isEmpty(queue<int> queue)
{
    if(queue.empty()==true)
    {
        cout<<"Queue is empty!"<<endl;
    }
    else
    {
        cout<<"Queue is not empty!"<<endl;
    }
}
void isFull(queue<int> queue)
{
   if(queue.size()<5)
    {
        cout<<"Queue is not full!"<<endl;
    }
    else
    {
        cout<<"Queue is full!"<<endl;
    }
}
void print(queue<int> queue)
{
    int count = queue.size();
    while(count!=0)
    {
        cout<<queue.front()<<endl;
        queue.pop();
        count--;
    }
}

void replaceItem(queue<int>* queue,int oldItem, int newItem)
{
    std::queue<int>* temp;
    while(queue->empty()!=true)
    {
        if(queue->front()==oldItem)
        {
            queue->pop();
            //queue->push(newItem);
            temp->push(newItem);
        }
        else
        {
            temp->push(queue->front());
            queue->pop();
        }

    }
    while(temp->empty()!=true)
    {
       queue->push(temp->front());
       temp->pop();
    }


}
void Push(queue<int>* queue,int number)
{
    if(queue->size()<5)
    {
        queue->push(number);
    }
    else
    {
        cout<<"Queue overflow!"<<endl;
    }
}



int main()
{
	queue<int> queue;
	isEmpty(queue);
	Push(&queue,5);
	Push(&queue,7);
	Push(&queue,4);
	Push(&queue,2);
	isEmpty(queue);
	isFull(queue);
	Push(&queue,6);
	print(queue);
	cout<<"Replacing item.."<<endl;
	replaceItem(&queue,7,1);
	print(queue);
	isFull(queue);
	Push(&queue,8);
	queue.pop();
	queue.pop();
	print(queue);
	queue.pop();
	queue.pop();
	queue.pop();
	isEmpty(queue);


}
