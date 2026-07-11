# Binary Search on Answer

## Problems Covered

- Book Allocation Problem
- Painter's Partition Problem

---

# Introduction

These two problems introduced me to a new Binary Search pattern called **Binary Search on Answer**.

Unlike traditional Binary Search, we are not searching for an element inside an array.

Instead, we search for the **minimum valid answer**.

---

# Common Pattern

Both problems ask us to minimize the maximum value.

Examples:

Book Allocation

```text
Minimize the maximum pages
assigned to any student.
```

Painter's Partition

```text
Minimize the maximum time
taken by any painter.
```

Both problems can be solved using:

- Binary Search
- Greedy Validation

---

# Binary Search on Answer

Search Space

```text
0 ---------------------- Sum

          mid
```

For every candidate answer:

- Can this value work?

If YES

Move Left

If NO

Move Right

---

# Validation Function

The validation function checks whether
the current answer is possible.

For Book Allocation

- Count students required.

For Painter's Partition

- Count painters required.

If required people exceed the limit,

Current answer is invalid.

---

# Algorithm

1. Calculate the maximum search range.
2. Apply Binary Search.
3. Validate the current answer.
4. Store possible answers.
5. Continue searching for a smaller valid answer.

---

# Complexity

Time Complexity

```text
O(n × log(sum))
```

Space Complexity

```text
O(1)
```

---

# Concepts Practiced

- Binary Search
- Binary Search on Answer
- Greedy Algorithm
- Validation Functions
- Search Space Reduction
- Partition Problems

---

# What I Learned

While solving these problems, I learned:

- Binary Search can be applied to answers instead of array values.
- A validation function determines whether an answer is feasible.
- Many partition problems follow the same underlying pattern.
- Recognizing patterns makes solving similar problems much easier.

---

# Personal Notes

I initially needed guidance to understand the Book Allocation Problem and the idea of Binary Search on Answer.

Once I understood the concept, I applied the same pattern independently to solve the Painter's Partition Problem.

This helped me realize that understanding the underlying algorithm is more valuable than memorizing individual problems.