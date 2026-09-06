#include <iostream>

using namespace std;

/*
===========================================================
File        : linked_list_basics.cpp
Topic       : Linked List Basics
Author      : Kaibalya Patra
Language    : C++
Purpose     : Learning and implementing a Singly Linked List
===========================================================

Concepts Covered:
- Node creation
- Dynamic memory allocation
- Pointers
- Head and Tail pointers
- push_front()
- push_back()
- pop_front()
- pop_back()
- Insert at a position
- Search for a key
- Traversing / Printing a Linked List

Time Complexities:
- push_front() : O(1)
- push_back()  : O(1)
- pop_front()  : O(1)
- pop_back()   : O(n)
- insert()     : O(n)
- search()     : O(n)
- print()      : O(n)

Space Complexity:
- O(n)

===========================================================
*/

// Creating a Node
class Node
{
public:
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};


// Singly Linked List
class LinkedList
{
    Node* head;
    Node* tail;

public:

    LinkedList()
    {
        head = tail = NULL;
    }


    // 1. Push Front
    void push_front(int val)
    {
        Node* newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }

        newNode->next = head;
        head = newNode;
    }


    // 2. Push Back
    void push_back(int val)
    {
        Node* newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }


    // 3. Pop Front
    void pop_front()
    {
        if (head == NULL)
        {
            cout << "Empty\n";
            return;
        }

        Node* temp = head;

        head = head->next;

        if (head == NULL)
        {
            tail = NULL;
        }

        delete temp;
    }


    // 4. Pop Back
    void pop_back()
    {
        if (head == NULL)
        {
            cout << "Empty\n";
            return;
        }

        // Only one node
        if (head == tail)
        {
            delete head;
            head = tail = NULL;
            return;
        }

        Node* temp = head;

        while (temp->next != tail)
        {
            temp = temp->next;
        }

        delete tail;

        tail = temp;
        tail->next = NULL;
    }


    // 5. Insert at Position
    void insert(int val, int pos)
    {
        if (pos < 0)
        {
            cout << "Invalid Position\n";
            return;
        }

        if (pos == 0)
        {
            push_front(val);
            return;
        }

        Node* temp = head;

        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "Invalid Position\n";
                return;
            }

            temp = temp->next;
        }

        if (temp == NULL)
        {
            cout << "Invalid Position\n";
            return;
        }

        Node* newNode = new Node(val);

        newNode->next = temp->next;
        temp->next = newNode;

        if (newNode->next == NULL)
        {
            tail = newNode;
        }
    }


    // 6. Search for a Key
    int search(int key)
    {
        Node* temp = head;

        int idx = 0;

        while (temp != NULL)
        {
            if (temp->data == key)
            {
                return idx;
            }

            temp = temp->next;
            idx++;
        }

        return -1;
    }


    // Print Linked List
    void print()
    {
        Node* temp = head;

        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }
};


int main()
{
    LinkedList ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    cout << "Push Front:\n";
    ll.print();


    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);

    cout << "Push Back:\n";
    ll.print();


    ll.pop_front();

    cout << "Pop Front:\n";
    ll.print();


    ll.pop_back();

    cout << "Pop Back:\n";
    ll.print();


    ll.insert(10, 2);

    cout << "Insert at Position 2:\n";
    ll.print();


    cout << "Searching Key 10 at Index:\n";
    cout << ll.search(10) << endl;


    return 0;
}