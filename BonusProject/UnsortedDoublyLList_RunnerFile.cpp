#include<iostream>
#include "UnsortedDoublyLList.h"


int main(void)
{
    UnsortedDoublyLList<int> list;
    std::cout << "Current List Size :" << list.getLength() << std::endl;
    list.insert(5);
    list.insert(8);
    list.insert(9);
    list.insert(7);
    list.insertAtFront(1);
    list.insertAtFront(12);
    list.insertAtBack(16);
    list.insertAtFront(122);
    list.insertAtBack(89);
    list.deleteItem(8);
    list.deleteAtFront();
    list.deleteAtBack();

    int ch;
    std::cin >> ch;
    return 0;
}
