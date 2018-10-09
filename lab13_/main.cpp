#include "src\binarysearchtree.cpp"
int main()
{
    TreeType<int> tree;
    if(tree.IsEmpty())
        cout<<"Empty"<<endl;

    tree.InsertItem(4);
    tree.InsertItem(9);
    tree.InsertItem(2);
    tree.InsertItem(7);
    tree.InsertItem(3);
    tree.InsertItem(11);
    tree.InsertItem(17);
    tree.InsertItem(0);
    tree.InsertItem(5);
    tree.InsertItem(1);

    if(!tree.IsEmpty())
        cout<<"Not Empty"<<endl;

    cout<<"Length is: "<<tree.LengthIs()<<endl;
    bool temp;
    int value=3;
    tree.RetrieveItem(value,temp);


    tree.Print();

}
