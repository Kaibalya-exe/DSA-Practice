# Singly Linked List Basics

This section contains my first implementation of a **Singly Linked List** while learning Linked Lists in DSA.

I implemented the same basic concept in both **C++ and C**.

The C++ version was written first while learning DSA in C++, and the implementation was then recreated in C because my college uses C for DSA examinations.

---

## What I Learned

Through this implementation, I practiced:

- What a Linked List is
- Structure of a Node
- `data` and `next` pointers
- Dynamic memory allocation
- Pointers
- `new` and `delete` in C++
- `malloc()` and `free()` in C
- `head` and `tail`
- Traversing a linked list
- Inserting nodes
- Deleting nodes
- Handling the beginning and end of a list

---

# What is a Singly Linked List?

A singly linked list is a linear data structure made up of nodes.

Each node contains:

```text
+--------+--------+
|  Data  |  Next  |
+--------+--------+

data stores the value.

next stores the address of the next node.

Example:

10 -> 20 -> 30 -> NULL

The last node points to NULL, indicating the end of the list.

Node Structure
C++
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
C
struct Node
{
    int data;
    struct Node* next;
};

The basic idea is the same in both languages.

The major difference is that C++ allows the node to be represented using a class and constructor, while C uses a structure.

Head and Tail

The linked list maintains two important pointers:

head
 ↓
10 -> 20 -> 30 -> NULL
              ↑
             tail
Head

head points to the first node.

Tail

tail points to the last node.

Keeping a tail pointer allows insertion at the back to be performed efficiently.

Operations Implemented
1. Push Front

Adds a new node at the beginning of the linked list.

Algorithm
Create a new node.
If the list is empty:
Make both head and tail point to the new node.
Otherwise:
Make the new node point to the current head.
Move head to the new node.

Example:

Before:

10 -> 20 -> 30 -> NULL

push_front(5)

After:

5 -> 10 -> 20 -> 30 -> NULL
Complexity
Time: O(1)
Space: O(1) auxiliary
2. Push Back

Adds a new node at the end of the linked list.

Because the implementation maintains a tail pointer, we don't need to traverse the entire list.

Algorithm
Create a new node.
If the list is empty:
Set head and tail to the new node.
Otherwise:
Connect tail->next to the new node.
Move tail to the new node.

Example:

Before:

10 -> 20 -> NULL
             ↑
            tail

push_back(30)

After:

10 -> 20 -> 30 -> NULL
                  ↑
                 tail
Complexity
Time: O(1)
Space: O(1) auxiliary
Important Learning

If there was no tail pointer, inserting at the back would require traversing the list.

That would make it:

O(n)

Maintaining tail makes it:

O(1)
3. Delete Node by Value

The implementation searches for a node containing the given value and removes it.

Two pointers are used:

prev
temp

temp searches for the node.

prev keeps track of the previous node.

Example:

10 -> 20 -> 30 -> 40 -> NULL

Delete 30

10 -> 20 -> 40 -> NULL

The connection is changed from:

20 -> 30 -> 40

to:

20 -> 40

Then the removed node is freed/deleted.

Algorithm
Check whether the list is empty.
Check whether the head contains the target value.
If the head contains the value:
Move head to the next node.
Delete/free the old head.
Otherwise traverse the list.
Keep track of prev and temp.
When the target is found:
Connect prev->next to temp->next.
Delete/free temp.
If the value is not found, report that the node doesn't exist.
Complexity
Time: O(n)
Space: O(1) auxiliary
4. Print / Traversal

Traverses the linked list from head until NULL.

Example:

10 -> 20 -> 30 -> NULL
Algorithm
Create a temporary pointer starting at head.
Continue while the pointer is not NULL.
Print the current node's data.
Move the pointer to the next node.
Print NULL at the end.
Complexity
Time: O(n)
Space: O(1)
Complexity Summary
Operation	Time Complexity	Auxiliary Space
Push Front	O(1)	O(1)
Push Back	O(1)	O(1)
Delete by Value	O(n)	O(1)
Print / Traversal	O(n)	O(1)

The linked list itself requires:

O(n)

space for n nodes.

C++ vs C Implementation

I implemented the same linked list in both languages.

C++

Uses:

class
Constructor
new
delete
Node*
C

Uses:

struct
malloc()
free()
struct Node*

The underlying linked-list logic remains almost the same.

This helped me understand that the data structure itself is independent of the language syntax.

Important Fixes / Edge Cases

While reviewing the implementation, I identified some cases that need to be handled carefully.

1. Deleting from an empty list

The list should be checked before accessing:

head->data

Otherwise, head may be NULL.

2. Deleting the only node

If the list contains only one node and that node is deleted:

10 -> NULL

both pointers should become:

head = NULL
tail = NULL

The C version handles this case.

3. Deleting the tail

When deleting the last node, tail should be updated to the previous node.

Example:

10 -> 20 -> 30 -> NULL

After deleting 30:

10 -> 20 -> NULL
          ↑
         tail
4. Value not found

If the requested value doesn't exist, the program should report that the node was not found instead of silently doing nothing.

5. Memory management

Because nodes are dynamically allocated, they should eventually be released.

C++ uses:

delete

C uses:

free()

A future improvement is to add a destructor / cleanup function that deletes all remaining nodes when the linked list is destroyed.

What I Learned From This Implementation

This was my first practical implementation of a linked list.

The important part wasn't just writing the syntax. I started understanding how the nodes are actually connected through pointers.

The main mental model I learned was:

Node
 |
 +-- data
 |
 +-- next ---> next Node

and:

head -> Node -> Node -> Node -> NULL
                              ^
                             tail

I also understood why a tail pointer is useful for making push_back() an O(1) operation.

Current Level

This implementation covers the fundamentals of singly linked lists.

It is not intended to be a complete linked-list implementation yet.

The focus here was understanding:

Node creation
Pointer connections
Head and tail
Insertion
Deletion
Traversal
Dynamic memory
Next Things to Learn

Planned linked-list topics:

Pop Front
Pop Back
Insert at a specific position
Search in a linked list
Reverse a linked list
Find the middle of a linked list
Slow and fast pointer technique
Detect a cycle
Remove a cycle
Merge two sorted linked lists
Doubly Linked List
Circular Linked List
Linked List problems on LeetCode
Learning Progression

This implementation represents my starting point with Linked Lists.

The goal is to gradually move from understanding the basic data structure to solving linked-list problems independently.

Understand Node
      ↓
Create Linked List
      ↓
Insert Nodes
      ↓
Delete Nodes
      ↓
Traverse
      ↓
Solve Basic Problems
      ↓
Learn Pointer Techniques
      ↓
Solve LeetCode Problems

---

# 5. Two Sum — today's commit

Your current approach is **not wrong as a two-pointer technique for finding the values**.

The problem is that **LeetCode's Two Sum asks for the original indices**.

You did:

```cpp
sort(arr, arr + n);