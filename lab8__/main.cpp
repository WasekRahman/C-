#include <iostream>
#include <stack>

using namespace std;

void isEmpty(stack<int> stack1)
{
    if(stack1.empty()==true)
    {
        cout<<"Stack is empty!"<<endl;
    }
    else{
        cout<<"Stack is not empty!"<<endl;
    }
}
int main()
{
    stack stack1;
    stack1 = new int[5];
    isEmpty(stack1);

}
