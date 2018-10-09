#include "binarysearchtree.h"
#include "quetype.cpp"
#include <iostream>

using namespace std;
template <class itemtype>
TreeType <itemtype>::TreeType()
{
    root= NULL;
}

template <class itemtype>
void Destroy(TreeNode<itemtype>*& tree)
{
    if(tree!=NULL)
    {
        Destroy(tree->left);
        Destroy(tree->right);
        delete tree;
        tree=NULL;
    }
}

template <class itemtype>
TreeType<itemtype>::~TreeType()
{
    Destroy(root);
}

template <class itemtype>
bool TreeType<itemtype>::Isempty()
{
    return root==NULL;
}

template <class itemtype>
bool TreeType <itemtype>::Isfull()
{
    TreeNode<itemtype>* location;
    try
    {
        location = new TreeNode <itemtype>;
        delete location;
        return false;
    }
    catch(bad_alloc& exception)
    {
        return true;
    }
}

template <class itemtype>
int CountNodes(TreeNode <itemtype>* tree)
{
    if(tree==NULL)
        return 0;
    else
        return CountNodes(tree->left)+CountNodes(tree->right)+1;
}
template <class itemtype>
int TreeType <itemtype>::Lengthis()
{
    return CountNodes(root);
}
template <class itemtype>
void Retrieve(TreeNode<itemtype>* tree,itemtype & item,bool& found)
{
    if(tree==NULL)
        found=false;
    else if(item<tree->info)
        Retrieve(tree->left,item,found);
    else if (item>tree->info)
        Retrieve(tree->right,item,found);
    else
        {
            item=tree->info;
            found=true;

        }
}
template <class itemtype>
void TreeType <itemtype>::Retrieveitem(itemtype& item,bool& found)
{
    Retrieve(root,item,found);
}

template <class itemtype>
void Insert(TreeNode <itemtype>*& tree,itemtype item)
{
    if (tree==NULL)
    {
        tree= new TreeNode <itemtype>;
        tree->right=NULL;
        tree->left=NULL;
        tree->info=item;
    }
    else if (item <tree->info)
        Insert(tree->left,item);
    else
        Insert(tree->right,item);
}

template <class itemtype>
void TreeType <itemtype>::Insertitem(itemtype item)
{
    Insert(root,item);
}

template <class itemtype>
void Delete(TreeNode<itemtype>*& tree,itemtype item)
{
    if(item < tree->info)
        Delete(tree->left,item);
    else if(item>tree->info)
        Delete(tree->right,item);
    else
        DeleteNode(tree);
}

template <class itemtype>
void DeleteNode(TreeNode <itemtype>*& tree)
{
    itemtype Data;
    TreeNode <itemtype>* tempPtr;
    tempPtr=tree;
    if(tree->left==NULL)
    {
        tree=tree->right;
        delete tempPtr;
    }
    else if(tree->right==NULL)
    {
        tree=tree->left;
        delete tempPtr;
    }
    else
        {
            getPredecessor(tree->left,Data);
            tree->info=Data;
            Delete(tree->left,Data);
        }
}
template <class itemtype>
void getPredecessor(TreeNode <itemtype>* tree,itemtype& data)
{
    while (tree->right!=NULL)
        tree=tree->right;
    data =tree->info;

}
template <class itemtype>
void TreeType <itemtype>::Deleteitem(itemtype item)
{
    Delete(root,item);
}


template <class itemtype>
void Preorder(TreeNode<itemtype>* tree,QueType <itemtype>& que)
{
    if(tree!=NULL)
    {
        que.Enqueue(tree->info);
        Preorder(tree->left,que);
        Preorder(tree->right,que);
    }
}
template <class itemtype>
void Inorder(TreeNode<itemtype>* tree,QueType <itemtype>& que)
{
    if(tree!=NULL)
    {
        Inorder(tree->left,que);
        que.Enqueue(tree->info);
        Inorder(tree->right,que);
    }
}

template <class itemtype>
void Postorder(TreeNode<itemtype>* tree,QueType <itemtype>& que)
{
    if(tree!=NULL)
    {
        Postorder(tree->left,que);
        Postorder(tree->right,que);
        que.Enqueue(tree->info);
    }
}

template <class itemtype>
void TreeType <itemtype>::ResetTree(OrderType order)
{
    switch(order)
    {
    case PRE_ORDER:
        Preorder(root,preQue);
        break;

    case IN_ORDER:
        Inorder(root,inQue);
        break;

    case POST_ORDER:
        Postorder(root,postQue);
        break;
    }
}

template <class itemtype>
void TreeType<itemtype>::Getnextitem(itemtype& item,OrderType order,bool& finished)
{
    finished=false;
    switch(order)
    {
    case PRE_ORDER:
        preQue.Dequeue(item);
        if(preQue.IsEmpty())
            finished=true;
        break;

    case IN_ORDER:
        inQue.Dequeue(item);
        if(inQue.IsEmpty())
            finished=true;
        break;

    case POST_ORDER:
        postQue.Dequeue(item);
        if(postQue.IsEmpty())
            finished=true;
        break;
    }
}
template <class itemtype>
void PrintTree(TreeNode<itemtype>* tree)
{
    if(tree!=NULL)
    {
        PrintTree(tree->left);
        cout<<tree->info<<" ";
        PrintTree(tree->right);
    }
}

template <class itemtype>
void TreeType<itemtype>::print()
{
    PrintTree(root);
}

template <class itemtype>
void TreeType<itemtype>::leaves()
{
    int c=0;
    Count(root,c);
    cout<<"Total leaves : "<<c<<endl;
}

template <class itemtype>
void Count(TreeNode<itemtype>* tree,int& c)
{
    if(tree!=NULL)
    {
        Count(tree->left,c);
        Count(tree->right,c);
        if(tree->left==NULL&&tree->right==NULL)
            c++;
    }



}

template <class itemtype>
void TreeType<itemtype>::smallest(itemtype& item)
{
    checker(root,item);
    cout<<"Smallest: "<<item<<endl;
}

template <class itemtype>
void checker(TreeNode <itemtype>* tree,itemtype& item)
{
    if(tree->left!=NULL)
        checker(tree->left,item);
    else if(tree->left==NULL)
    {
        item=tree->info;
    }
}
