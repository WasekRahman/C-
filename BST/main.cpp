#include "src\quetype.cpp"
#include "src\binarysearchtree.cpp"

#include <iostream>

using namespace std;
void IsEmpty(TreeType<int> tree)
{
    if(tree.IsEmpty()==true)
    {
        cout<<"Tree is empty"<<endl;
    }
    else{
        cout<<"Tree is not empty"<<endl;
    }
}

int main()
{
    TreeType<int> tree;
    IsEmpty(tree);
    int length = tree.LengthIs();
    cout<<length;
    tree.InsertItem(6);
    IsEmpty(tree);
    int length2 = tree.LengthIs();
    cout<<length2;



}
