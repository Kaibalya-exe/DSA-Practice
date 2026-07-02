# Majority Element

## Problem Statement

Find the element that appears more than n/2 times in the array.

---

## Approach 1: Brute Force

### Algorithm

- Traverse every element.
- Count its occurrences.
- Keep track of the highest frequency.
- Return the corresponding element.

### Complexity

Time Complexity:

```text
O(n²)
```

Space Complexity:

```text
O(1)
```

---

## Approach 2: Moore's Voting Algorithm

### Idea

The majority element occurs more than n/2 times.

Therefore, every non-majority element can be paired and cancelled with a majority element.

Eventually, only the majority element remains.

### Complexity

Time Complexity:

```text
O(n)
```

Space Complexity:

```text
O(1)
```

---

## What I Learned

- Frequency counting
- Majority element problems
- Optimization techniques
- Candidate tracking
- Moore's Voting Algorithm

---

## Learning Notes

Initially, I solved the problem using brute force.

Although I could calculate frequencies independently, I needed help tracking the element with the maximum frequency.

Afterwards, I learned Moore's Voting Algorithm and successfully implemented the optimized solution.