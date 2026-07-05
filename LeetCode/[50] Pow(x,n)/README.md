# Pow(x,n)

## Problem Statement

Implement the function:

```cpp
pow(x,n)
```

without using built-in power functions.

---

## Approach

This problem can be solved using:

# Binary Exponentiation

Instead of multiplying x repeatedly:

```text
x*x*x*x*x*x...
```

we repeatedly square the number.

Example:

```text
2^10

2^10
= (2²)^5
= (4²)^2 * 4
= 1024
```

---

## Negative Powers

For:

```text
2^-3
```

convert to:

```text
(1/2)^3
```

and solve normally.

---

## Complexity

Time Complexity:

```text
O(log n)
```

Space Complexity:

```text
O(1)
```

---

## Concepts Learned

- Binary Exponentiation
- Fast Power Algorithm
- Corner Cases
- Negative Powers
- Logarithmic Complexity