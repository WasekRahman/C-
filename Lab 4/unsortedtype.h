#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED
#include "itemtype.h"


class UnsortedType
{
public:
    UnsortedType();
    void MakeEmpty();
    bool isFull();
    int LengthIs();
    void ResetList();
    void GetNextItem(ItemType&);
    void InsertItem(ItemType);
    void RetrieveItem(ItemType&,bool&);
    void DeleteItem(ItemType);
    void printlist(int y);




private:
 int length;
 ItemType info[MAX_ITEMS];
    int currentPos;

};
#endif // UNSORTEDTYPE_H_INCLUDED
