# Best Time to Buy and Sell Stock

## Problem Statement

You are given an array where each element represents the price of a stock on a given day.

You may choose one day to buy the stock and another future day to sell it.

Return the maximum profit possible.

---

## Example

Input:

```text
[7,1,5,3,6,4]
```

Output:

```text
5
```

Explanation:

```text
Buy at 1
Sell at 6
Profit = 5
```

---

# My Initial Approach

Initially, I attempted to solve the problem by:

- Finding the lowest buying price.
- Finding the highest selling price.
- Calculating their difference.

Example:

```text
buy = minimum value
sell = maximum value
profit = sell - buy
```

Although this worked for several test cases, it failed on certain edge cases.

---

## Failing Test Case

Input:

```text
[2,4,1]
```

Expected Output:

```text
2
```

My Output:

```text
0
```

---

## Why It Failed

My approach did not correctly enforce the condition that:

```text
buy must occur before sell
```

The algorithm only tracked global minimum and maximum values rather than considering the order of transactions.

---

# Optimized One-Pass Approach

After understanding the mistake, I learned the correct approach.

## Algorithm

1. Store the minimum stock price encountered.
2. Calculate profit at every position.
3. Update the maximum profit.

Pseudo code:

```text
buy = first price

for every price:
    profit = max(profit, price - buy)
    buy = min(buy, price)
```

---

## Solution Complexity

### Time Complexity

```text
O(n)
```

### Space Complexity

```text
O(1)
```

---

# Concepts Learned

Through this problem, I learned:

- Array traversal
- Greedy approach
- Running minimum
- Optimization techniques
- Importance of edge cases
- Why maintaining order constraints matters

---

# Personal Learning Notes

I was able to independently create an initial solution, but after testing additional cases, I realized that the approach was logically flawed.

After understanding the reason behind the failure, I learned and implemented the optimized one-pass solution successfully.

This problem taught me that debugging incorrect logic is often more valuable than immediately finding the correct solution.