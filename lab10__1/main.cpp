#include <iostream>
#include <stack>

using namespace std;

void print(stack <int> temp)
{
    cout<<"The values are: "<<endl;
    while (!temp.empty())
    {
        cout<< temp.top()<<endl;
        temp.pop();
    }

}
void empty(stack <int> stack)
{
    if(stack.empty()==true)
    {
        cout<<"Stack is empty!"<<endl;
    }
    else
    {
        cout<<"Stack is not empty!"<<endl;
    }
}



void full(stack <int> stack)
{
    if(stack.top() == NULL)
    {
        cout<<"Stack is not full"<<endl;
    }
    else
    {
        cout<<"Stack is full"<<endl;
    }
}

replaceItem(stack <int> temp,stack <int> stack,int old, int newItem)
{

   while (stack.empty()!=true)
    {
        if(stack.top()==old)
        {
            stack.pop();
            stack.push(newItem);

        }
        else
        {
            temp.push(stack.top());
            stack.pop();

        }
    }
     stack=temp;
     print(stack);
}

int main ()
{
    stack <int> stack,temp;
    empty(stack);
    stack.push(5);
    stack.push(7);
    stack.push(4);
    stack.push(2);
    empty(stack);
    cout<<"Size of stack: "<<stack.size()<<endl;
    print(stack);
    full(stack);
    stack.push(3);
    stack.push(7);
    stack.push(11);
    stack.push(8);
    stack.push(21);
    print(stack);
    stack.pop();
    stack.pop();
    cout<<"After popping two values, top value: "<<stack.top()<<endl;
    cout<<"After replacing values "<<endl;
    replaceItem(temp,stack,7,33);
    print(stack);

    return 0;
}
