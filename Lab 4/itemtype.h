#ifndef ITEMTYPE_H
#define ITEMTYPE_H
#include<iostream>

using namespace std;

const int MAX_ITEMS = 10;
enum RelationType{LESS,GREATER,EQUAL};
class ItemType
{
public :
    ItemType();
    RelationType ComparedTo(ItemType);
    void print(int x);
    void Initialize(int number);
    int getVal();


private :
    int value;
};
#endif // ITEMTYPE_H
