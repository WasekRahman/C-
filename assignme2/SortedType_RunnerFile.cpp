#include "SortedType.h"
#include <iostream>

void InsertRandomNumber(SortedType<int>& list)
{
	list.PutItem(2);
	list.PutItem(1);
	list.PutItem(3);
	list.PutItem(4);
	list.PutItem(6);
	list.PutItem(5);
}

void FindSomeNumber(SortedType<int>& list ,int data)
{
	if (list.GetItem(data))
		std::cout << data << " is found." << std::endl;
	else
		std::cout << data << " Not found." << std::endl;

	return;
}

void GetNextItem(SortedType<int>& list)
{
	int item = list.GetNextItem();
	std::cout << "NextItem:" << item << std::endl;
}

int main(void)
{
	SortedType<int> list;
	std::cout << list.GetLength() << std::endl;
	InsertRandomNumber(list);
	std::cout << "Length :" << list.GetLength() << std::endl;
    list.print();
	FindSomeNumber(list, 2);
	FindSomeNumber(list, 9);
	std::cout << "Length :" << list.GetLength() << std::endl;

	list.DeleteItem(4);
	std::cout << "Length :" << list.GetLength() << std::endl;

	list.MakeEmpty();
	std::cout << "Length :" << list.GetLength() << std::endl;

	InsertRandomNumber(list);
	list.GetNextItem();
	for (int counter = 1; counter < list.GetLength(); counter++)
	{
		GetNextItem(list);
	}
	list.ResetList();
	InsertRandomNumber(list);
	list.GetNextItem();
	for (int counter = 1; counter < list.GetLength(); counter++)
	{
		GetNextItem(list);
	}


	int i;
	std::cin >> i;
	return 0;
}
