#include <iostream>
#include "src/StackType.cpp"

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
    StackType <int> stack ;

    IsEmpty(stack);
    stack.Push(5);
    stack.Push(7);
    stack.Push(4);
    stack.Push(2);

    IsEmpty(stack);
    IsFull(stack);
    stack.print();
    stack.Push(3);
    IsFull(stack);
    stack.print();
    stack.Pop();
    stack.Pop();
    cout<<"Top item after removing two items: " <<stack.Top();
}

