#ifndef BINARYSEARCHTREE_H_INCLUDED
#define BINARYSEARCHTREE_H_INCLUDED
#include "quetype.h"
template <class itemtype>

struct TreeNode
{
    itemtype info;
    TreeNode* left;
    TreeNode* right;
};

enum OrderType{PRE_ORDER,IN_ORDER,POST_ORDER};
template <class itemtype>
class TreeType
{
public:
    TreeType();
    ~TreeType();
    void Makeempty();
    bool Isempty();
    bool Isfull();
    int Lengthis();
    void Retrieveitem(itemtype& item,bool& found);
    void Insertitem(itemtype item);
    void Deleteitem(itemtype item);
    void ResetTree(OrderType order);
    void Getnextitem(itemtype& item,OrderType order,bool& finished);
    void print();
    void leaves();
    void smallest(itemtype& item);
private:
    TreeNode<itemtype>* root;
    QueType <itemtype> preQue;
    QueType <itemtype> inQue;
    QueType <itemtype> postQue;

};
#endif // BINARYSEARCHTREE_H_INCLUDED
