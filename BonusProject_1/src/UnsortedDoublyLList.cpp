#include "UnsortedDoublyLList.h"
#include <exception>
#include <iostream>

template class UnsortedDoublyLList<int>;
//template class UnsortedDoublyLList<float>;


template<class ItemType>
UnsortedDoublyLList<ItemType>::UnsortedDoublyLList()
{
	head = NULL;
	tail = head;
	length = 0;
	iterator = NULL;
}

template<class ItemType>
UnsortedDoublyLList<ItemType>::~UnsortedDoublyLList()
{
	makeEmpty();
}

template<class ItemType>
bool UnsortedDoublyLList<ItemType>::isEmpty()
{
	return (length == 0);
}

template<class ItemType>
bool UnsortedDoublyLList<ItemType>::isFull()
{
	try
	{
		NodeType<ItemType>* newNode = new NodeType<ItemType>(ItemType());
		delete newNode;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
		return true;
	}

	return false;
}

template<class ItemType>
void UnsortedDoublyLList<ItemType>::makeEmpty()
{
	//Do Delete at front or delete from back continuously.
	head = NULL;
	tail = head;
	length = 0;
	iterator = NULL;

}

template<class ItemType>
int UnsortedDoublyLList<ItemType>::getLength()
{
	return length;
}

template<class ItemType>
bool UnsortedDoublyLList<ItemType>::hasNext()
{
	//Check if iterator's has reached tail.
	 if(iterator != this->tail)
     {
         return false;
     }
     else return true;
}

template<class ItemType>
bool UnsortedDoublyLList<ItemType>::hasPrevious()
{
	//Check if iterator's is at begining.
	if(iterator != this->head){
        return false;
	}
	else return true;
}

template<class ItemType>
ItemType UnsortedDoublyLList<ItemType>::getNext()
{
	//If there is a hasNext(), then getNext() returns a valid item
	if (hasNext())
	{
		return ItemType();
	}

	std::cout << "No valid GetNext calls can be made." << std::endl;
	return ItemType();
}

template<class ItemType>
ItemType UnsortedDoublyLList<ItemType>::getPrevious()
{
	//If there is a hasPrevious(), then getPrevious() returns a valid item
	if (hasPrevious())
	{
		return ItemType();
	}

	std::cout << "No valid GetPrevious calls can be made." << std::endl;
	return ItemType();
}

template<class ItemType>
bool UnsortedDoublyLList<ItemType>::insert(ItemType item)
{
	if (isFull())
	{
		printContent();
		return false;
	}

	//You can insert at front or back. Both takes O(1) time.
	else {insertAtFront(item);
	return true;}
}

template<class ItemType>
bool UnsortedDoublyLList<ItemType>::insertAtFront(ItemType item)
{
	if (isFull())
	{
		printContent();
		return false;
	}

	//There can be two possible cases.
	//1) No head exists. In this case there will not be any tails,
	//   So, you create a new node, assign it to both head and tail.
	//2) Head exists. If head exists, tail is also going to exist.
	//   In this case, add a new node in front of head.


	printContent();
	return true;
}

template<class ItemType>
bool UnsortedDoublyLList<ItemType>::insertAtBack(ItemType item)
{
	if (isFull())
	{
		printContent();
		return false;
	}

	//There can be two possible cases.
	//1) No tail exists. In this case there will not be any heads,
	//   So, you create a new node, assign it to both head and tail.
	//2) Tail exists. If Tail exists, Head is also going to exist.
	//   In this case, add a new node at end of tail.


	printContent();
	return true;
}

template<class ItemType>
bool UnsortedDoublyLList<ItemType>::deleteItem(ItemType item)
{
	if (isEmpty())
	{
		printContent();
		return false;
	}


	//Three cases.
	//1) Head is the item to delete.
	//   You have a deleteAtFront() function to handle this case.
	//2) Tail is the item to delete.
	//   You have a deleteAtBack() function to handle this case.
	//3) None of case 1 and 2. Item may or may not exist in the doubly list.
	//   Traverse the whole list.
	//   If you find the item, you delete that node.
	//   To delete the node, you need to save that node to a temporary item
	//   connect the predecessor of that node with the successor of that node.
	//   Remember, this is a doubly linked list.
	//What About Iterator?
	//   What if the node you are being able to delete is also being pointed by the iterator?
	//   How would you handle that case?
	//   Should you move your iterator forward? backward? keep it as it is?
	//   What if the item to delete was the last item, your iterator was also pointing to the last item.
	//        Does it make sense to move the iterator forward in this case?
	//   What if the item to delete was the First item, your iterator was also pointing to the First item.
	//        Does it make sense to move the iterator backward in this case?
	bool found = false;

	printContent();
	return found;
}

template<class ItemType>
bool UnsortedDoublyLList<ItemType>::deleteAtFront()
{
	if (isEmpty())
	{
		printContent();
		return false;
	}

	//Delete the head of the linkedList.
	//Move the iterator forward or backwards.
	//Ideally, you should move the iterator forward in this case.

	printContent();
	return true;
}

template<class ItemType>
bool UnsortedDoublyLList<ItemType>::deleteAtBack()
{
	if (isEmpty())
	{
		printContent();
		return false;
	}

	//Delete the head of the linkedList.
	//Move the iterator forward or backwards.
	//Ideally, you should move the iterator backwards in this case.

	printContent();
	return true;
}

template<class ItemType>
void UnsortedDoublyLList<ItemType>::printContent()
{
	NodeType<ItemType>* current = head;
	while (current)
	{
		std::cout << current->getData() << " ";
		current = current->getNext();
	}
	std::cout << std::endl;
}
