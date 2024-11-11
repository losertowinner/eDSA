#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        data = 0;
        next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class SinglyLinkedList
{
    Node *head;

public:
    SinglyLinkedList()
    {
        head = NULL;
    }

    void insertAtHead(int data)
    {
        Node *new_node = new Node(data);

        if (head == NULL)
        {
            head = new_node;
            return;
        }

        new_node->next = this->head;
        this->head = new_node;
    }

    void show()
    {
        Node *temp = head;

        if (head == NULL)
        {
            cout << "List empty" << endl;
            return;
        }

        while (temp != NULL)
        {
            cout << temp->data << "\t";
            temp = temp->next;
        }
    }
};