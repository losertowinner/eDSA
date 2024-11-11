#include <iostream>
#include "SinglyLinkedList.h"
using namespace std;

int main()
{
    SinglyLinkedList list;

    list.insertAtHead(4);
    list.insertAtHead(3);
    list.insertAtHead(2);
    list.insertAtHead(1);

    cout << "Elements of the list are: ";

    list.show();
    cout << endl;

    return 0;
}