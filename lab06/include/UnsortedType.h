#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED


template <class ItemType>
class UnsortedType
{
	struct NodeType
	{
		ItemType info;
		NodeType* next;
	};
public:
	UnsortedType();
	~UnsortedType();
	bool IsFull();
	int LengthIs();
	void MakeEmpty();
	void RetrieveItem(ItemType& item,bool& found);
	void InsertItem(ItemType item);
	void DeleteItem(ItemType item);
	void ResetList();
	void GetNextItem(ItemType& item);
	void print();

private:
	NodeType * listData;
	int length;
	NodeType* currentPos;
};
#endif // UNSORTEDTYPE_H_INCLUDED
