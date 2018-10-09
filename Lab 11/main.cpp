#include "bst.cpp"
using namespace std;

int main()
{
    BinarySearchTree b;
    int ch,tmp,tmp1;
    while(1)
    {

        cout<<endl<<endl;
        cout<<"Binary Search Tree operation"<<endl;
        cout<<"1.Insertion/creation"<<endl;
        cout<<"2.Removal"<<endl;
        cout<<"3.Inorder Traversal"<<endl;
        cout<<"4.total nodes"<<endl;
        cout<<"5.print preorder"<<endl;
        cout<<"6.print postorder"<<endl;
        cout<<"7.Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"Enter number to be inserted"<<endl;
            cin>>tmp;
            b.Insert(tmp);
            break;

        case 2:
            cout<<"Enter data to be deleted"<<endl;
            cin>>tmp1;
            b.Remove(tmp1);
            break;

        case 3:
            cout<<endl;
            cout<<"Inorder traversal"<<endl;
            cout<<"-----------------"<<endl;
            b.print_inorder();
            break;
        case 4:
             b.Count();
             break;

        case 5:
            b.print_preorder();
            break;

        case 6:
            b.print_postorder();

            break;

        case 7:
            return 0;
        }
    }
}
