/*
    Problem: Singly Linked List Basics

    Description:
    Implemented a basic singly linked list using structures
    and pointers in C for college examination preparation.

    Concepts:
    - Structures
    - Pointers
    - Dynamic memory allocation
    - malloc() and free()
    - Singly linked lists
    - Node traversal

    Operations:
    - push_front()
    - push_back()
    - DeleteNode()
    - print()

    Learning:
    Reimplemented the same linked list concepts from C++
    in C to understand how linked lists work without
    classes and objects.
*/

#include <stdio.h>
#include <stdlib.h>

// Creating struct Node :

struct Node
{
    int data;
    struct Node* next;
};

// Connecting Linked List :

struct Node* head = NULL;
struct Node* tail = NULL;

// Inserting in front of the Linked List :

void push_front()
{
    int val;

    printf("Enter the Value to Insert in the front : ");
    scanf("%d", &val);

    struct Node* newNode = malloc(sizeof(struct Node));

    newNode->data = val;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = tail = newNode;
        return;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

// Inserting at the back of the Linked List :

void push_back()
{
    int val;

    printf("Enter the Value to Insert at the back : ");
    scanf("%d", &val);

    struct Node* newNode = malloc(sizeof(struct Node));

    newNode->data = val;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = tail = newNode;
        return;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

// Deleting a Node by its Value :

void DeleteNode()
{
    int key;

    printf("Enter the Node to Delete : ");
    scanf("%d", &key);

    if (head == NULL)
    {
        printf("List is empty!\n");
        return;
    }

    struct Node* temp = head;
    struct Node* prev = NULL;

    // Deleting Head Node :

    if (temp->data == key)
    {
        head = head->next;

        if (head == NULL)
        {
            tail = NULL;
        }

        free(temp);
        return;
    }

    // Deleting any other Node :

    while (temp != NULL)
    {
        if (temp->data == key)
        {
            prev->next = temp->next;

            if (temp == tail)
            {
                tail = prev;
            }

            free(temp);
            return;
        }

        prev = temp;
        temp = temp->next;
    }

    printf("Node not found!\n");
}

// Display / Print the Linked List :

void print()
{
    struct Node* temp = head;

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main()
{
    push_front();
    push_front();
    push_front();

    printf("\n");

    print();

    printf("\n");

    push_back();
    push_back();
    push_back();

    printf("\n");

    print();

    printf("\n");

    DeleteNode();

    printf("\n");

    print();

    printf("\n");

    return 0;
}