#include "bst.h"

BinarySearchTree::BinarySearchTree()
{
    root=NULL;
}

bool BinarySearchTree::isempty() const
{
    return root==NULL;
}

void BinarySearchTree::Insert(int d)
{
    tree_node* t=new tree_node;
    tree_node* parent;
    t->data=d;
    t->left=NULL;
    t->right=NULL;
    parent=NULL;
    if(isempty())
        root=t;
    else
    {
        tree_node* curr;
        curr=root;
        while(curr)
        {
            parent=curr;
            if(t->data>curr->data)
                curr=curr->right;
            else
                curr=curr->left;
        }
        if(t->data<parent->data)
            parent->left=t;
        else
            parent->right=t;
    }
}

void BinarySearchTree::Remove(int d)
{
    bool found=false;
    if(isempty())
    {
        cout<<"this tree is empty"<<endl;
        return;
    }
    tree_node* curr;
    tree_node* parent;
    curr=root;
    while(curr!=NULL)
    {
        if(curr->data==d)
        {
            found=true;
            break;
        }
        else
        {
            parent=curr;
            if(d>curr->data)
                curr=curr->right;
            else
                curr=curr->left;
        }
    }
    if(!found)
    {
        cout<<"Data not Found"<<endl;
        return;
    }
    if((curr->left==NULL && curr->right!=NULL)||(curr->left!=NULL&&curr->right==NULL))
    {
        if(curr->left==NULL&& curr->right!=NULL)
        {
            if(parent->left==curr)
            {
                parent->left=curr->right;
                delete curr;
            }
            else
            {
                parent->right=curr->right;
                delete curr;
            }
        }
        else
        {
            if(parent->left==curr)
            {
                parent->left=curr->left;
                delete curr;
            }
            else
            {
                parent->right=curr->right;
                delete curr;
            }
        }
        return;
    }
    if(curr->left==NULL && curr->right==NULL)
    {
        if(parent->left==curr)
            parent->left==curr;
        else
            parent->right==NULL;
        delete curr;
        return;
    }
    if(curr->left!=NULL && curr->right!=NULL)
    {
        tree_node* chkr;
        chkr=curr->right;
        if((chkr->left==NULL)&&(chkr->right==NULL))
        {
            curr=chkr;
            delete chkr;
            curr->right=NULL;
        }
        else
        {
            if((curr->right)->left!=NULL)
            {
                tree_node* lcurr;
                tree_node*lcurrp;
                lcurrp=curr->right;
                lcurr=(curr->right)->left;
                while(lcurr->left!=NULL)
                {
                    lcurrp=lcurr;
                    lcurr=lcurr->left;
                }
                curr->data=lcurr->data;
                delete lcurr;
                lcurrp->left=NULL;
            }
            else
            {


                tree_node* tmp;
                tmp=curr->right;
                curr->data=tmp->data;
                curr->right=tmp->right;
                delete tmp;
            }
        }
        return;
    }

}

void BinarySearchTree::print_inorder()
{
    inorder(root);
}
void BinarySearchTree::inorder(tree_node* p)
{
    if(p!=NULL)
    {
        if(p->left)
            inorder(p->left);
        cout<<" "<<p->data<<" ";
        if(p->right)
            inorder(p->right);
    }
    else return;
}

void BinarySearchTree::Count()
{
    int counter=0;
    inorder1(root,counter);
    cout<<"Total number of nodes:"<<counter<<endl;
}
void BinarySearchTree::inorder1(tree_node* p,int& counter)
{

    if(p!=NULL)
    {
        if(p->left)
            inorder1(p->left,counter);
        counter++;
        if(p->right)
            inorder1(p->right,counter);

    }
    else return;
}
void BinarySearchTree::print_preorder()
{
    preorder(root);
}

void BinarySearchTree::preorder(tree_node* p)
{
    if(p!=NULL)
    {
        cout<<" "<<p->data<<" ";
        if(p->left)
            preorder(p->left);
        if(p->right)
            preorder(p->right);
    }
    else return;
}

void BinarySearchTree::print_postorder()
{
    postorder(root);
}

void BinarySearchTree::postorder(tree_node* p)
{
    if(p!=NULL)
    {
        if(p->left)
            postorder(p->left);
        if(p->right)
            postorder(p->right);
        cout<<" "<<p->data<<"";
    }
    else return;
}


