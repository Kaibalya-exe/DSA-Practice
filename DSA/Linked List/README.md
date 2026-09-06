# Linked List

This folder contains my learning and implementation of **Singly Linked Lists in C++**.

This was my introduction to Linked Lists and involved learning how nodes are created, connected and manipulated using **pointers, classes and dynamic memory allocation**.

---

## 📌 Topics Covered

- What is a Linked List?
- Singly Linked List
- Node creation
- Pointers
- Dynamic memory allocation
- `new` and `delete`
- `head` pointer
- `tail` pointer
- Traversing a Linked List
- `push_front()`
- `push_back()`
- `pop_front()`
- `pop_back()`
- Inserting at a position
- Searching for a key
- Handling edge cases
- Time and space complexity

---

# 1. What is a Linked List?

A Linked List is a linear data structure made up of individual **nodes**.

Unlike an array, Linked List elements do not have to be stored in consecutive memory locations.

Each node contains:

```text
+---------+---------+
|  Data   |  Next   |
+---------+---------+

The data stores the value, while next stores the address of the next node.

A simple Linked List looks like:

10 -> 20 -> 30 -> NULL

The last node points to NULL, indicating the end of the list.

2. Creating a Node

A Node can be represented using a class:

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

Each Node contains:

int data;

to store the value and:

Node* next;

to store the address of the next Node.

3. Pointers

Pointers are fundamental to Linked Lists.

Node* next;

next does not store another Node directly.

It stores the memory address of another Node.

For example:

Node 1                 Node 2

+------+-------+       +------+-------+
|  10  |   ●---------->|  20  | NULL  |
+------+-------+       +------+-------+

The pointer connects the nodes together.

4. Dynamic Memory Allocation

Nodes are dynamically created using new.

Node* newNode = new Node(val);

This creates a Node in dynamically allocated memory.

When a Node is no longer required, its memory should be released using:

delete temp;

This was an important introduction to manual memory management in C++.

5. Head and Tail

A Linked List generally maintains a head pointer.

head
 ↓
10 -> 20 -> 30 -> NULL

I also implemented a tail pointer:

head                 tail
 ↓                     ↓
10 -> 20 -> 30 -> NULL

head points to the first Node.

tail points to the last Node.

Maintaining tail makes insertion at the end much more efficient.

6. push_front()

push_front() inserts a new Node at the beginning.

Before:

10 -> 20 -> 30 -> NULL

After:

5 -> 10 -> 20 -> 30 -> NULL

Implementation:

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
Time Complexity
O(1)
7. push_back()

push_back() inserts a Node at the end.

Before:

10 -> 20 -> 30 -> NULL

After:

10 -> 20 -> 30 -> 40 -> NULL

Because a tail pointer is maintained, we can directly access the last Node.

tail->next = newNode;
tail = newNode;
Time Complexity
O(1)
8. pop_front()

pop_front() removes the first Node.

Before:

10 -> 20 -> 30 -> NULL

After:

20 -> 30 -> NULL

The head is moved to the next Node:

head = head->next;

The old Node is then deleted.

delete temp;
Time Complexity
O(1)
Important Edge Case

If the list contains only one Node:

head
 ↓
10
 ↑
tail

After removing it:

head = NULL
tail = NULL

Both pointers must be updated.

9. pop_back()

pop_back() removes the last Node.

Before:

10 -> 20 -> 30 -> NULL

After:

10 -> 20 -> NULL

Because this is a Singly Linked List, there is no pointer from the last Node back to the previous Node.

Therefore, we have to traverse the list to find the Node immediately before tail.

10 -> 20 -> 30
      ↑
   previous

Then:

tail = temp;
tail->next = NULL;
Time Complexity
O(n)
Important Edge Cases

The operation needs to handle:

Empty List

and:

Single Node

separately.

10. Insert at a Position

A Node can also be inserted at a particular position.

For example:

10 -> 20 -> 30

Insert:

insert(15, 2);

Result:

10 -> 20 -> 15 -> 30

The list needs to be traversed until the required position.

The new Node is then connected:

newNode->next = temp->next;
temp->next = newNode;

If the new Node becomes the last Node, tail must also be updated.

Time Complexity
O(n)
11. Searching for a Key

To search for a value, the list is traversed from the head.

Example:

10 -> 20 -> 30 -> 40 -> NULL
          ↑
        target

The index is returned if the target is found.

If it isn't found:

return -1;
Time Complexity
O(n)
12. Traversing the Linked List

To print or process every Node, start from head and repeatedly follow next.

Node* temp = head;

while (temp != NULL)
{
    cout << temp->data;
    temp = temp->next;
}

Example:

10 -> 20 -> 30 -> NULL

The traversal stops when:

temp == NULL
Time Complexity
O(n)
13. Complexity Summary
Operation	Time Complexity
push_front()	O(1)
push_back()	O(1)
pop_front()	O(1)
pop_back()	O(n)
Insert	O(n)
Search	O(n)
Traversal	O(n)
Space Complexity

For n Nodes:

O(n)

Each Node requires memory for its data and pointer.

14. Array vs Linked List

One of the main differences I learned:

Feature	Array	Linked List
Memory	Contiguous	Non-contiguous
Size	Usually fixed	Dynamic
Random Access	O(1)	O(n)
Insert at Beginning	O(n)	O(1)
Delete at Beginning	O(n)	O(1)
Extra Pointer Memory	No	Yes
Dynamic Allocation	Not required	Required

Arrays are excellent when fast random access is required.

Linked Lists are useful when frequent insertion and deletion operations are required.

15. Important Edge Cases

While implementing the Linked List, the following cases need special attention.

Empty List
head = NULL
tail = NULL

Operations should not attempt to dereference NULL.

One Node
head
 ↓
10
 ↑
tail

Removing this Node must result in:

head = NULL
tail = NULL
Insert at Position 0

This can be handled using:

push_front();
Insert at the End

tail must be updated.

Invalid Position

The program should prevent invalid memory access when a requested position does not exist.

16. Key C++ Concepts Learned

This implementation helped me practice:

Classes

Used a Node class and a LinkedList class.

Objects
LinkedList ll;
Pointers
Node* head;
Node* tail;
Node* temp;
Dynamic Memory
new Node(val);
Memory Deallocation
delete temp;
Member Access Through Pointers
temp->data;
temp->next;
17. Learning Journey

This was my first implementation of a Linked List from scratch.

The biggest difference from arrays was that I had to stop thinking in terms of indexes and start thinking in terms of connections between Nodes.

Instead of:

arr[0] -> arr[1] -> arr[2]

I now have:

Node -> Node -> Node -> NULL

The core idea became:

Node
 ↓
Pointer
 ↓
Next Node
 ↓
Next Node
 ↓
NULL

Understanding how head, tail, and next interact was the main learning objective of this implementation.

18. Implementation

The main implementation in this folder demonstrates:

Node creation
Head and Tail management
Front insertion
Back insertion
Front deletion
Back deletion
Positional insertion
Searching
Traversal
Edge-case handling

File:

linked_list_basics.cpp
19. What's Next?

After understanding the basic Singly Linked List, the next concepts to learn are:

 Reverse a Linked List
 Reverse using recursion
 Find middle of Linked List
 Fast and Slow Pointer
 Detect a cycle
 Remove a cycle
 Merge two sorted Linked Lists
 Remove Nth Node
 Doubly Linked List
 Circular Linked List
 Linked List sorting
 Linked List LeetCode problems
Progress

Topic: Linked List
Language: C++
Status: Basics Completed ✅

Learning DSA by understanding the data structure first, implementing it from scratch, and then solving problems based on it.