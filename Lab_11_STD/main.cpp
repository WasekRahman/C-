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

void print(queue<int> queue)
{
    std::queue<int> temp;
    temp = queue;
    if(temp.empty()==true)
    {
        cout<<"Queue is empty!"<<endl;
    }
    else{while(temp.empty()!=true)
    {
        cout<<temp.front()<<endl;
        temp.pop();
    }
    }
}
bool isFull(queue<int> queue)
{
    std::queue<int> temp;
    temp = queue;
    try{
        temp.push(7);
        temp.pop();
        return false;
    }
    catch(bad_alloc& exception)
    {
        return true;
    }

}
void Full(queue<int> queue)
{
    if(isFull(queue))
    {
        cout<<"Queue is full!"<<endl;
    }
    else
    {
        cout<<"Queue is not full!"<<endl;
    }
}
void length(queue<int> queue)
{
    std::queue<int> temp;
    temp = queue;
    int count=0;
    while(temp.empty()!=true)
    {
        temp.pop();
        count=count+1;
    }
    cout<<"Length is "<<count<<endl;
}


int main()
{
	queue<int> queue[5];
	isEmpty(queue[0]);
	queue[0].push(5);
}
