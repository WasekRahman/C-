#include "src\UnsortedType.cpp"
#include "src\NodeType.cpp"
#include <iostream>

void InsertRandomNumber(UnsortedType<int>& list)
{
	list.PutItem(2);
	list.PutItem(1);
	list.PutItem(3);
	list.PutItem(4);
	list.PutItem(6);
	list.PutItem(5);
}

void FindSomeNumber(UnsortedType<int>& list ,int data)
{
	if (list.GetItem(data))
		std::cout << data << " is found." << std::endl;
	else
		std::cout << data << " Not found." << std::endl;

	return;
}

void GetNextItem(UnsortedType<int>& list)
{
	int item = list.GetNextItem();
	std::cout << "NextItem:" << item << std::endl;
}

int main(void)
{
	UnsortedType<int> list;
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
	list.print();
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
