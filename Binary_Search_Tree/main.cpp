#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* right;
    Node* left;
};

Node* create(int data)
{
    Node* temp= new Node();
    temp->data=data;
    temp->right=temp->left=NULL;
    return temp;
}

void insert(Node* &root,int data)
{
    if(root==NULL)
    {
        root=create(data);
    }
    else if(root->data > data)
    {
        insert(root->left,data);
    }
    else insert(root->right,data);
}
void displayPreorder(Node* root)
{
    if(root!=NULL)
    {
        cout<<root->data<<endl;
        displayPreorder(root->left);
        displayPreorder(root->right);
    }
}
void displayInorder(Node* root)
{
    if(root!=NULL)
    {
        displayInorder(root->left);
        cout<<root->data<<"  ";
        displayInorder(root->right);
    }
}
void search(Node* root,int data)
{
    if(root==NULL)
    {
        cout<<"Does not exist!"<<endl;
    }
    else if(root->data==data)
    {
        cout<<"Found!";
    }
    else if(root->data>data)
    {
        search(root->left,data);
    }
    else if(root->data<data)
    {
        search(root->right,data);
    }
}

void delete(Node* root,int key)
{
    Node* temp= new Node();
    temp=root;
    if(root->data==key)
    {
        root->data==NULL;
    }
    else if(root->data > key)
    {
        delete(root->left,key);
    }
    else if(root->data < key)
    {
        delet(root->right,key);
    }
    displayInorder(root);
}

int main()
{
    Node* root=NULL;
    int number;
    cin>>number;
    root=create(number);
    cout<<root->data<<endl;
    insert(root,5);
    insert(root,7);
    insert(root,2);
    insert(root,4);
    //displayPreorder(root);
    displayInorder(root);
    search(root,1);
}
