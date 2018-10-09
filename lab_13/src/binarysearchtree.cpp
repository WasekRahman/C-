#include "binarysearchtree.h"
#include "quetype.h"
#include <iostream>
using namespace std;

template class TreeType<int>;
template <class ItemType>
TreeType<ItemType>::TreeType()
{
    root = NULL;
}
template <class ItemType>
void Destroy(TreeNode<ItemType>*& tree)
{
    if (tree != NULL)
    {
        Destroy(tree->left);
        Destroy(tree->right);
        delete tree;
        tree = NULL;
    }
}
template <class ItemType>
TreeType<ItemType>::~TreeType()
{
    Destroy(root);
}
template <class ItemType>
void TreeType<ItemType>::MakeEmpty()
{
    Destroy(root);
}
template <class ItemType>
bool TreeType<ItemType>::IsEmpty()
{
    return root == NULL;
}
template <class ItemType>
bool TreeType<ItemType>::IsFull()
{

        return false;

}
template <class ItemType>
int CountNodes(TreeNode<ItemType>* tree)
{

        return 0;

}
template <class ItemType>
int TreeType<ItemType>::LengthIs()
{
    return CountNodes(root);
}
template <class ItemType>
void Retrieve(TreeNode<ItemType>* tree, ItemType&
              item, bool& found)
{

}
template <class ItemType>
void TreeType<ItemType>::RetrieveItem(ItemType&
                                      item, bool& found)
{
    Retrieve(root, item, found);
}
template <class ItemType>
void Insert(TreeNode<ItemType>*& tree,
            ItemType item)
{

}
template <class ItemType>
void TreeType<ItemType>::InsertItem(ItemType
                                    item)
{
    Insert(root, item);
}
template <class ItemType>
void Delete(TreeNode<ItemType>*& tree,
            ItemType item)
{

}
template <class ItemType>
void DeleteNode(TreeNode<ItemType>*& tree)
{
    ItemType data;
    TreeNode<ItemType>* tempPtr;
    tempPtr = tree;
    if (tree->left == NULL)
    {
        tree = tree->right;
        delete tempPtr;
    }
    else if (tree->right == NULL)
    {
        tree = tree->left;
        delete tempPtr;
    }
    else
    {
        GetPredecessor(tree->left, data);
        tree->info = data;
        Delete(tree->left, data);
    }
}
template <class ItemType>
void GetPredecessor(TreeNode<ItemType>*
                    tree, ItemType& data)
{

}
template <class ItemType>
void TreeType<ItemType>::DeleteItem(ItemType
                                    item)
{
    Delete(root, item);
}
template <class ItemType>
void PreOrder(TreeNode<ItemType>* tree,
              QueType<ItemType>& Que)
{

}
template <class ItemType>
void InOrder(TreeNode<ItemType>* tree,
             QueType<ItemType>& Que)
{

}
template <class ItemType>
void PostOrder(TreeNode<ItemType>* tree,
               QueType<ItemType>& Que)
{

}
template <class ItemType>
void TreeType<ItemType>::ResetTree(OrderType
                                   order)
{
    switch (order)
    {
    case PRE_ORDER:
        PreOrder(root, preQue);
        break;
    case IN_ORDER:
        InOrder(root, inQue);
        break;
    case POST_ORDER:
        PostOrder(root, postQue);
        break;
    }
}
template <class ItemType>
void TreeType<ItemType>::GetNextItem(ItemType&
                                     item, OrderType order, bool& finished)
{


}
template <class ItemType>
void PrintTree(TreeNode<ItemType>* tree)
{

}
template <class ItemType>
void TreeType<ItemType>::Print()
{
    PrintTree(root);
}
