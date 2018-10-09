#include <iostream>
#include "src\StackType.cpp"
using namespace std;

void IsEmpty(StackType <int> stack)
{
    if(stack.IsEmpty()==true)
    {
        cout<<"Stack is empty!\n";
    }
    else
    {
        cout<<"Stack is not empty!\n";
    }
};

void IsFull(StackType <int> stack)
{
    if(stack.IsFull()==true)
    {
        cout<<"Stack is Full!\n";
    }
    else
    {
        cout<<"Stack is not Full!\n";
    }
};


int main()
{
    StackType <int> stack1;
    IsEmpty(stack1);
    stack1.Push(5);
    stack1.Push(7);
    stack1.Push(4);
    stack1.Push(2);
    IsEmpty(stack1);
    IsFull(stack1);
    stack1.printlist();
    stack1.Push(3);
    stack1.printlist();
    IsFull(stack1);
    stack1.Pop();
    stack1.Pop();
    cout<<stack1.Top()<<endl;
    stack1.ReplaceItem(5,9);
    stack1.printlist();
    return 0;
}
