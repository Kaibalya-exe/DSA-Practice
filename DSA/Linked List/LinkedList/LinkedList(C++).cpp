/*
    Problem: Singly Linked List Basics

    Description:
    Implemented a basic singly linked list using C++ classes.
    Practiced node creation, insertion at front and back,
    deletion by value, and traversal.

    Concepts:
    - Classes and objects
    - Pointers
    - Dynamic memory allocation
    - Singly linked lists
    - Node traversal
    - new and delete

    Operations:
    - push_front()
    - push_back()
    - DeleteNode()
    - print()

    Learning:
    This implementation was first practiced in C++ while
    learning linked lists in DSA.
*/

#include <iostream>

using namespace std ;

//Creating Class Node :

class Node
{
    public :
        int data ;
        Node* next ;
        
        Node(int val)
        {
            data = val ;
            next = NULL ;
        }
};

//Connecting Linked List :

class LinkedList
{
    Node* head ;
    Node* tail ;
    
    public : 
        LinkedList()
        {
            head = tail = NULL ;
        }
        
    //Inserting in front of the Linked List :     
        
    void push_front()
    {
        int val ;
        
        cout << "Enter the Value to Insert in the front : " ;
        cin >> val ;
        
        Node* newNode = new Node(val) ;
        
        if (head == NULL)
        {
            head = tail = newNode ;
            return ;
        }
        else
        {
            newNode -> next = head; 
            head = newNode ;
        }
    }
    
    //Inserting at the back of the Linked List :
    
    void push_back()
    {
        int val ;
        
        cout << "Enter the Value to Insert in the back : " ;
        cin >> val ;
        
        Node* newNode = new Node(val) ;
        
        if (head == NULL)
        {
            head = tail = newNode ;
            return ;
        }
        else
        {
            tail -> next = newNode ;
            tail = newNode ;
        }
    }
    
    //Deleting a Node by it's Value : 
    
    void DeleteNode()
    {
        int key ;
        
        cout << "Enter the Node to Delete : " ;
        cin >> key ;
        
        Node* temp = head ;
        Node* prev = NULL ;
        
        if(temp -> data == key)
        {
            head = head -> next ;
            temp -> next = NULL ;
            delete temp ;
            return ;
        }
        
        while(temp != NULL)
        {
            if(temp -> data == key)
            {
                prev -> next = temp -> next;
                delete temp ;
                return ;
            }
            
            prev = temp ;
            temp = temp -> next ;
        }
    }
    
    
    //Display / Print the Linked List : 
    
    void print()
    {
        Node* temp = head ;
        
        while (temp != NULL)
        {
            cout << temp -> data << " -> " ;
            temp = temp -> next ;
        }
        
        cout << "NULL" << endl ;
    }
};

int main()
{
    LinkedList ll ;
    
    ll.push_front() ;
    ll.push_front() ;
    ll.push_front() ;
    
    cout << endl ;
    
    ll.print() ;
    
    cout << endl ;
    
    ll.push_back() ;
    ll.push_back() ;
    ll.push_back() ;

    cout << endl ;
    
    ll.print() ;
    
    cout << endl ;
    
    ll.DeleteNode();
    
    cout << endl ;
    
    ll.print() ;
    
    cout << endl ;
    
    return 0 ;
}