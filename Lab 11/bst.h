#ifndef BST_H_INCLUDED
#define BST_H_INCLUDED
#include <iostream>

using namespace std;
class BinarySearchTree
{
private:
    struct tree_node
    {
        tree_node* left;
        tree_node* right;
        int data;
    };
    tree_node* root;
public:
    BinarySearchTree();
    bool isempty()const;
    void Insert(int);
    void Remove(int);
    void print_inorder();
    void inorder(tree_node*);
    void inorder1(tree_node*,int&);
    void preorder(tree_node*);
    void print_preorder();
    void print_postorder();
    void postorder(tree_node*);
    void Count();
};
#endif // BST_H_INCLUDED
