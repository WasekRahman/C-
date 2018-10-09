#include "NodeType.h"

template<class ItemType>
class SortedType
{
public:
	SortedType();
	~SortedType();
	void MakeEmpty();
	bool IsFull() const;				//Tests if the list is full
	int  GetLength() const;
	bool GetItem(ItemType& item,bool& found);		//Tests if the list contains the item. If not, return false;
	bool PutItem(ItemType item);		//Tests if the item can be inserted in the list. If not, return false;
	bool DeleteItem(ItemType item);		//Tests if the item can be deleted from the list. If not, return false;
	void ResetList();					//Reset the iterator of the list.
	ItemType GetNextItem();
	void print();
private:
	NodeType<ItemType>* listData;
	int	length;
	NodeType<ItemType>*  currentPosition;
};
