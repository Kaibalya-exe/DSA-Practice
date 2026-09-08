# Two Sum

## Problem

Given an array of integers `nums` and an integer `target`, find two different elements whose sum equals the target.

The LeetCode version requires returning the **original indices** of the two elements.

Example:

```text
nums = [2, 7, 11, 15]
target = 9

Answer:

[0, 1]

Because:

nums[0] + nums[1]
= 2 + 7
= 9
My Learning Progression

This problem was solved through multiple approaches.

Brute Force
    ↓
Sorting + Two Pointers
    ↓
Problem discovered: sorting changes original indices
    ↓
Optimized: unordered_map / Hash Map
    ↓
O(n) average solution

The progression was important because each approach taught something different.

Approach 1: Brute Force

My first approach was to check every possible pair.

For every element, compare it with every element after it and check whether their sum equals the target.

Algorithm
for i = 0 to n-1
    for j = i+1 to n-1

        if nums[i] + nums[j] == target
            return [i, j]
Example
nums = [5, 2, 11, 7, 15]
target = 9

Check pairs until:

2 + 7 = 9

The corresponding indices are:

[1, 3]
Complexity
Time: O(n²)
Space: O(1)
Learning

The brute-force approach was straightforward and helped establish the basic logic of the problem.

However, it performs many unnecessary comparisons when the input becomes large.

Approach 2: Sorting + Two Pointers

I then tried to improve the brute-force approach using:

Sorting
Two pointers

After sorting, one pointer starts from the beginning and another from the end.

low = 0
high = n - 1

If:

arr[low] + arr[high] < target

move low forward.

If:

arr[low] + arr[high] > target

move high backward.

If:

arr[low] + arr[high] == target

the required pair has been found.

Complexity
Sorting: O(n log n)
Two pointers: O(n)

Overall: O(n log n)
Problem With the Sorting Approach

Although the two-pointer technique correctly finds the two values, it creates a problem for the LeetCode version.

LeetCode requires the original indices.

Consider:

Original:

[3, 2, 4]

Original indices:

3 -> 0
2 -> 1
4 -> 2

After sorting:

[2, 3, 4]

Now the positions have changed.

The pair:

2 + 4 = 6

is now found at:

[0, 2]

But the required answer is:

[1, 2]

because those are the original indices.

Important Lesson

The issue was not the two-pointer algorithm itself.

The problem was modifying the original array through sorting.

Sorting
   ↓
Order changes
   ↓
Indices change
   ↓
Original indices are lost

This taught me that improving time complexity is not enough.

The optimized solution must also preserve all information required by the problem.

Approach 3: Optimized Using unordered_map

The final approach uses a C++ STL container called:

unordered_map

I had no prior knowledge of unordered_map.

I first learned:

What STL is
What unordered_map stores
Key-value pairs
find()
Insertion
How hashing allows fast average lookups
How to use it for the Two Sum complement technique
How to dry-run the algorithm

After understanding the implementation and dry-running the logic, I coded the solution myself.

Core Idea

Instead of sorting the array, keep the original array unchanged.

For every element:

current = arr[i]

calculate the number that is required to reach the target:

complement = target - current

Then check whether that complement has already appeared.

If it has, we already know its original index.

Example Dry Run

Consider:

arr = [5, 2, 11, 7, 15]
target = 17

Start with an empty map:

map = {}
i = 0
current = 5
complement = 17 - 5 = 12

Is 12 in the map?

No

Store:

5 -> 0

Map:

{5: 0}
i = 1
current = 2
complement = 17 - 2 = 15

Is 15 in the map?

No

Store:

2 -> 1

Map:

{5: 0, 2: 1}
i = 2
current = 11
complement = 17 - 11 = 6

Is 6 in the map?

No

Store:

11 -> 2
i = 3
current = 7
complement = 17 - 7 = 10

Is 10 in the map?

No

Store:

7 -> 3
i = 4
current = 15
complement = 17 - 15 = 2

Is 2 already in the map?

Yes

The map tells us:

2 -> index 1

Current index:

4

Therefore:

[4, 1]

is the answer.

Algorithm
Create an empty unordered_map

For every index i:

    current = arr[i]

    complement = target - current

    If complement exists in the map:
        return current index and stored index

    Otherwise:
        store current value with index i

In code:

unordered_map<int, int> m;

for (int i = 0; i < n; i++)
{
    int first = arr[i];
    int second = target - first;

    if (m.find(second) != m.end())
    {
        // Answer found
    }

    m[first] = i;
}
Why Does This Work?

For every number x, we ask:

What number do I need to reach target?

That number is:

target - x

Instead of searching the entire array for that number, the unordered_map stores previously visited numbers.

Therefore, we can quickly check whether the required complement has already been seen.

Why We Store the Index

The map stores:

number -> index

For example:

5 -> 0
2 -> 1
11 -> 2

This is important because LeetCode asks for the original indices.

Unlike the sorting approach, the original array is never modified.

Therefore, the indices remain correct.

unordered_map

This was also my first practical use of the C++ STL unordered_map.

An unordered_map stores data as key-value pairs.

Example:

unordered_map<int, int> m;

Here:

key   -> value
number -> index

Example:

m[5] = 0;

means:

5 -> 0

To check whether a key exists:

m.find(5) != m.end()

If it exists, the iterator returned by find() is not equal to m.end().

Why unordered_map is Useful Here

Average-case lookup is:

O(1)

So instead of searching through the array every time, the complement can be checked quickly.

This allows the overall solution to run in:

O(n)

on average.

Complexity
Approach	Time Complexity	Space Complexity	Main Issue
Brute Force	O(n²)	O(1)	Too many comparisons
Sorting + Two Pointer	O(n log n)	O(1) auxiliary*	Original indices change
unordered_map	O(n) average	O(n)	Uses extra memory

* Auxiliary space depends on the sorting implementation.

Brute Force → Better → Optimized
Brute Force
Check every pair
O(n²)

↓

Better
Sort + Two Pointers
O(n log n)

↓

Problem
Sorting changes original indices

↓

Optimized
unordered_map
O(n) average

This was the first problem where I experienced the importance of choosing an appropriate data structure to improve an algorithm.

What I Learned
1. STL

I had not previously worked with unordered_map.

I learned its basic structure and implementation before using it in the solution.

2. Key-Value Storage

I learned that an unordered_map can associate one value with another.

For this problem:

number -> index
3. Complement Technique

For every number:

complement = target - current

This turns the problem into a fast lookup problem.

4. Hash Map for Optimization

The hash map allows us to avoid repeatedly scanning the array.

This reduces the average time complexity from:

O(n²)

to:

O(n)
5. Preserving Information

My sorting approach taught me that an optimization can introduce a new problem.

Sorting improved the search process but destroyed the original ordering.

The hash-map approach avoids modifying the input and therefore preserves the required indices.

6. Understanding Before Coding

I did not know the unordered_map approach beforehand.

I first studied:

How unordered_map works
How find() works
How insertion works
How the complement is calculated
How the map changes during each iteration
A complete dry run

After understanding those concepts, I implemented the solution myself.

This is an important part of my learning process: understanding the logic and implementation rather than blindly copying the final code.

Important Edge Case

The map should be checked before inserting the current element.

if (m.find(second) != m.end())
{
    // found
}

m[first] = i;

This is important because the same element should not be used twice.

For example:

nums = [3, 3]
target = 6

At the first 3, there is no previous 3.

Only after storing the first 3 can the second 3 find it.

Therefore the two different indices are correctly identified.