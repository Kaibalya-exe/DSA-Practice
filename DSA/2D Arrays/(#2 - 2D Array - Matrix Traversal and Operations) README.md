# Matrix Traversal & Basic Matrix Operations

## 📌 Overview

This folder contains my practice programs while learning **2D Arrays (Matrices)** in C++.

Instead of jumping directly into interview problems, I practiced the fundamental operations that helped me understand how matrix indexing and traversal work.

The progression starts from simple traversal and gradually moves towards optimized diagonal traversal.

---

# Topics Covered

- Row Major Traversal
- Column Major Traversal
- Row Sum
- Column Sum
- Maximum Row Sum
- Maximum Column Sum
- Primary Diagonal
- Secondary Diagonal
- Total Diagonal Sum
- Matrix Traversal
- Matrix Indexing
- Time Complexity Optimization

---

# Programs Included

## 1. Row Major & Column Major Traversal

Traverses every element of the matrix using:

- Row-wise traversal
- Column-wise traversal

Learned:

- Nested loops
- Matrix indexing
- Difference between row-major and column-major order

Complexity

Time: **O(rows × cols)**

Space: **O(1)**

---

## 2. Row Sum & Column Sum

Calculates

- Sum of every row
- Sum of every column

Learned

- Independent row computation
- Independent column computation

Complexity

Time: **O(rows × cols)**

Space: **O(1)**

---

## 3. Maximum Row & Column Sum

Finds

- Maximum row sum
- Maximum column sum

Concepts

- Running maximum
- Matrix aggregation

Complexity

Time: **O(rows × cols)**

Space: **O(1)**

---

## 4 & 5. Diagonal Sum (My Own Approach)

Before learning the standard solution, I attempted to solve the diagonal sum problem entirely using my own logic.

I separately computed:

- Primary diagonal
- Secondary diagonal

Then combined them to obtain the total diagonal sum.

Although correct, this approach traversed the whole matrix.

Complexity

Time: **O(n²)**

Space: **O(1)**

---

## 6. Standard Diagonal Pattern

After understanding the standard solution, I learned the diagonal indexing pattern:

Primary Diagonal

```cpp
arr[i][i]
```

Secondary Diagonal

```cpp
arr[i][n - i - 1]
```

This simplified the implementation significantly.

---

## 7. Optimized Diagonal Sum

Finally, I optimized the solution by directly accessing diagonal elements instead of scanning every matrix element.

### Algorithm

For every row:

```cpp
Primary += arr[i][i]
Secondary += arr[i][n-i-1]
```

### Complexity

Time: **O(n)**

Space: **O(1)**

---

# My Learning Journey

This practice session helped me understand:

- Matrix traversal
- Nested loops
- Matrix indexing
- Row and column operations
- Diagonal traversal
- Standard matrix patterns
- How mathematical indexing can reduce time complexity

The biggest takeaway was realizing that many matrix problems become much simpler once the indexing pattern is understood.

---

# Future Topics

- Matrix Transpose
- Spiral Matrix
- Search in Sorted Matrix
- Rotate Matrix
- Set Matrix Zeroes
- Wave Traversal
- Boundary Traversal
