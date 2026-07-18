# 2D Arrays & Linear Search

## 📌 Overview

This program demonstrates the fundamentals of **2D Arrays** in C++ and performs a **Linear Search** to find a target element inside a matrix.

It is my first implementation using 2D arrays and helped me understand how rows and columns are stored and traversed using nested loops.

---

## 📚 Concepts Learned

- What is a 2D Array
- Matrix representation in C++
- Row and Column indexing
- Declaring and Initializing a 2D Array
- Accessing elements using indexes
- Nested loops for traversal
- Linear Search in a 2D Array
- Time Complexity Analysis

---

## 🧠 Theory

A **2D Array** is an array of arrays.

It stores elements in the form of **rows and columns**, similar to a matrix.

Example:

1  2  3
4  5  6
7  8  9
10 11 12

The element at:

- arr[0][0] = 1
- arr[2][1] = 8
- arr[3][2] = 12

---

## 🔍 Algorithm (Linear Search)

1. Traverse every row.
2. Traverse every column inside that row.
3. Compare each element with the target.
4. If found:
   - Print its row and column index.
   - Stop searching.
5. If traversal completes without finding the element, the target does not exist.

---

## ⏱️ Time Complexity

- Worst Case: **O(rows × columns)**
- Best Case: **O(1)** (target found immediately)

---

## 💾 Space Complexity

O(1)

No extra memory is used.

---

## ✅ What I Learned

- How 2D arrays are stored in memory.
- How nested loops are used to traverse matrices.
- How row and column indexing works.
- How to perform Linear Search in a matrix.
- Difference between searching in 1D and 2D arrays.
- Building confidence before moving to more advanced matrix problems.

---

## 🚀 Future Topics

- Largest & Smallest Element in Matrix
- Row Sum / Column Sum
- Matrix Transpose
- Diagonal Sum
- Spiral Matrix
- Search in Sorted Matrix
- Rotate Matrix