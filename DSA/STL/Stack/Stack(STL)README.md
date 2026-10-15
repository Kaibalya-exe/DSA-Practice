# C++ STL: Stack

## Overview

This program demonstrates the `std::stack` container adapter from the C++ Standard Template Library (STL).

A stack follows the **LIFO (Last In, First Out)** principle: the last element inserted is the first element removed.

A real-world analogy is a stack of plates. You place a new plate on top, and the plate you remove first is the one currently at the top.

### Concepts covered

- Creating a stack
- Adding elements using `push()`
- Accessing the top element using `top()`
- Removing elements using `pop()`
- Traversing a stack by repeatedly popping
- Preserving popped values using a temporary stack
- Checking the number of elements using `size()`
- Checking whether a stack is empty using `empty()`
- Swapping two stacks using `swap()`

## 1. Header files

```cpp
#include <iostream>
#include <stack>

using namespace std;
```

- `<iostream>` provides output operations such as `cout` and `endl`.
- `<stack>` provides `std::stack`.

## 2. Creating a stack

```cpp
stack<int> s;
```

This creates an empty stack that stores integers.

General syntax:

```cpp
stack<data_type> stack_name;
```

Examples:

```cpp
stack<int> numbers;
stack<char> characters;
stack<string> words;
```

A stack does not provide direct access to arbitrary elements by index. Its interface is designed around the top element.

## 3. Adding elements using `push()`

```cpp
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
```

The `push()` operation inserts an element at the top of the stack.

After these operations, the stack looks like this:

```text
TOP -> 5
       4
       3
       2
       1
```

The last element pushed, `5`, is at the top.

**Time complexity:** O(1).

## 4. Accessing the top using `top()`

```cpp
cout << s.top() << endl;
```

Returns a reference to the top element without removing it.

For the stack containing `1, 2, 3, 4, 5` in insertion order, `s.top()` returns `5`.

Calling `top()` repeatedly without calling `pop()` will keep returning `5`.

**Time complexity:** O(1).

**Important:** Calling `top()` on an empty stack is invalid. Check `empty()` before accessing the top if the stack might be empty.

## 5. Removing the top using `pop()`

```cpp
s.pop();
```

Removes the top element from the stack.

If the stack is:

```text
TOP -> 5
       4
       3
       2
       1
```

After `s.pop()`:

```text
TOP -> 4
       3
       2
       1
```

`pop()` does not return the removed value. If you need that value, read it using `top()` first.

**Time complexity:** O(1).

## 6. Printing all elements by popping

```cpp
while (!s.empty())
{
    cout << s.top() << endl;
    s.pop();
}
```

This loop continues until the stack is empty.

For every iteration:

1. `empty()` checks whether any elements remain.
2. `top()` accesses the current top element.
3. `cout` prints it.
4. `pop()` removes it, exposing the next element.

Output:

```text
5
4
3
2
1
```

The output is in reverse insertion order because a stack follows LIFO.

**Time complexity:** O(n), where `n` is the number of elements.

**Important:** This operation destroys the contents of the stack as the elements are popped. Once the loop finishes, the stack is empty.

## 7. Preserving elements using a temporary stack

The program creates two stacks:

```cpp
stack<int> temp;
stack<int> r;
```

It then pushes elements into `r`:

```cpp
r.push(5);
r.push(4);
r.push(3);
r.push(2);
r.push(1);
```

Since `1` was pushed last, the top of `r` is `1`.

### Copying while accessing the stack

```cpp
while (!r.empty())
{
    cout << r.top() << endl;
    temp.push(r.top());
    r.pop();
}
```

Each iteration performs three operations:

1. Print the top value of `r`.
2. Push that value onto `temp`.
3. Pop the value from `r`.

Because the stack was filled in the order `5, 4, 3, 2, 1`, the loop prints:

```text
1
2
3
4
5
```

After the loop, `r` is empty.

The values were pushed into `temp` in the order `1, 2, 3, 4, 5`, making `5` the top of `temp`.

### Printing the temporary stack

```cpp
while (!temp.empty())
{
    cout << temp.top() << endl;
    temp.pop();
}
```

This prints:

```text
5
4
3
2
1
```

The temporary stack reverses the order of the elements relative to the order in which they were popped from `r`.

### Important lesson

A temporary stack can help preserve values that would otherwise be lost when popping the original stack. However, the example above transfers the values into another stack; it does not preserve the original stack itself.

If you want to restore the original stack, transfer the values back after processing them. Each stack transfer reverses the order, so consider the desired final order carefully.

**Time complexity:** O(n) for transferring and printing all elements.

**Auxiliary space:** O(n) for the temporary stack.

## 8. Checking stack size using `size()`

```cpp
cout << r.size() << endl;
```

The `size()` function returns the number of elements currently in the stack.

Since the preceding loop popped every element from `r`, the result is:

```text
0
```

**Time complexity:** O(1).

## 9. Checking whether the stack is empty using `empty()`

```cpp
if (r.empty())
{
    cout << "empty" << endl;
}
```

The `empty()` function returns `true` if the stack contains no elements and `false` otherwise.

It is useful for checking whether it is safe to access or remove an element.

For example:

```cpp
if (!s.empty())
{
    cout << s.top() << endl;
    s.pop();
}
```

**Time complexity:** O(1).

## 10. Swapping two stacks using `swap()`

The program creates two stacks:

```cpp
stack<int> a;
stack<int> b;
```

Stack `a` receives the values `5, 4, 3, 2, 1`, so its top is `1`.

Stack `b` receives the values `10, 9, 8, 7, 6`, so its top is `6`.

### Swapping

```cpp
a.swap(b);
```

This exchanges the contents of the two stacks.

Before swapping:

- Stack `a` contains the values `5, 4, 3, 2, 1` in push order.
- Stack `b` contains the values `10, 9, 8, 7, 6` in push order.

After swapping:

- Stack `a` contains the former contents of `b`.
- Stack `b` contains the former contents of `a`.

When printed by repeatedly calling `top()` and `pop()`, stack `a` outputs `6, 7, 8, 9, 10`, and stack `b` outputs `1, 2, 3, 4, 5`.

**Complexity:** The complexity of `swap()` depends on the underlying container's swap operation. For the usual standard containers, swapping is constant-time under their standard conditions.

### Important improvement

You do not need to empty both stacks, print their contents, and recreate them just to demonstrate swapping. You can create both stacks, print their contents without permanently removing elements only if you use a copy, and then call `a.swap(b)`.

The current example intentionally pops all elements while printing, then recreates the stacks before swapping. This is valid, but it combines two separate concepts: destructive traversal and swapping.

## 11. Time complexity summary

| Operation | Time complexity |
|---|---|
| `push()` | O(1) |
| `top()` | O(1) |
| `pop()` | O(1) |
| `empty()` | O(1) |
| `size()` | O(1) |
| Traversing by repeated `top()` and `pop()` | O(n) |
| Copying all elements into a temporary stack | O(n) time, O(n) extra space |
| `swap()` | Depends on underlying container; typically O(1) for standard containers |

Here, `n` represents the number of elements in the stack.

## 12. Common mistakes and lessons learned

1. **Expecting stack elements to be accessed by index:** The standard stack interface exposes only the top element.
2. **Confusing `top()` and `pop()`:** `top()` reads the top value; `pop()` removes it.
3. **Calling `top()` or `pop()` on an empty stack:** Always check `empty()` first when emptiness is possible.
4. **Forgetting that printing by popping destroys the stack:** Copy the stack first if the original must remain unchanged.
5. **Misunderstanding insertion order:** The last pushed value becomes the first popped value.
6. **Assuming a temporary stack preserves the original order:** Transferring between stacks reverses the order.
7. **Recreating stacks unnecessarily:** Understand which operations actually require elements to be removed and which do not.

## 13. Algorithms and optimization

This program demonstrates STL stack operations rather than implementing a standalone DSA algorithm. There is no direct brute-force-to-optimized progression for the file itself.

Stacks are frequently used in algorithms such as:

- Valid Parentheses.
- Next Greater Element.
- Stock Span.
- Min Stack.
- Infix, postfix, and prefix expression evaluation.
- Monotonic stack problems.
- Depth-first search and other iterative traversals.

A stack is useful whenever the most recently encountered item must be processed first.

## 14. Key takeaways

- A stack follows LIFO: Last In, First Out.
- `push()` inserts at the top.
- `top()` reads the top without removing it.
- `pop()` removes the top but does not return its value.
- `empty()` and `size()` provide useful state information.
- Popping all elements is a destructive way to traverse a stack.
- A temporary stack can store values removed from another stack.
- `swap()` exchanges the contents of two stacks.
- Always check whether a stack is empty before accessing or removing its top element.

## Future learning

- Queue and deque in STL.
- Valid Parentheses using a stack.
- Next Greater Element.
- Monotonic stacks.
- Min Stack.
- Stack applications in expression evaluation and graph traversal.
