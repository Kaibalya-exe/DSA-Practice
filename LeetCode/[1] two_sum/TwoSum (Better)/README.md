Approach 2: Sorting + Two Pointers

After solving the brute-force version, I tried to improve the time complexity.

The idea was:

Sort the array.
Place one pointer at the beginning.
Place another pointer at the end.
Compare their sum with the target.

Example:

[2, 5, 7, 11, 15]
 ↑              ↑
low            high

If:

arr[low] + arr[high] < target

move:

low++

because we need a larger value.

If:

arr[low] + arr[high] > target

move:

high--

because we need a smaller value.

If:

arr[low] + arr[high] == target

the pair has been found.

Two Pointer Algorithm
low = 0
high = n - 1

while low < high:

    sum = arr[low] + arr[high]

    if sum == target:
        pair found

    else if sum < target:
        low++

    else:
        high--
Complexity

Sorting:

O(n log n)

Two-pointer traversal:

O(n)

Overall:

O(n log n)

This is better than the brute-force:

O(n²)
The Problem I Discovered

Although the two-pointer logic correctly finds the values, it does not directly solve the LeetCode version.

The reason is:

sort(arr, arr + n);

changes the positions of the elements.

Consider:

Original:

[3, 2, 4]

Original indices:

3 -> 0
2 -> 1
4 -> 2

After sorting:

[2, 3, 4]

Now the indices are:

2 -> 0
3 -> 1
4 -> 2

The values are still there, but their original positions have been lost.

Therefore, for:

nums = [3, 2, 4]
target = 6

the required answer is:

[1, 2]

because:

nums[1] + nums[2]
= 2 + 4
= 6

But after sorting, the two-pointer approach sees:

2 + 4

at positions:

0 and 2

Those are not the original indices.

Important Lesson

This attempt taught me an important DSA concept:

An optimization can improve time complexity but still fail if it destroys information required by the problem.

The two-pointer algorithm itself was not the problem.

The problem was:

Sorting
   ↓
Original order changes
   ↓
Original indices are lost
   ↓
Cannot directly return LeetCode's required answer
Progression

My current progression for Two Sum:

Brute Force
O(n²)
   ↓
Understood the basic pair-searching logic
   ↓
Sorting + Two Pointers
O(n log n)
   ↓
Found the pair more efficiently
   ↓
Discovered the original-index problem
   ↓
Next: Optimized approach

The next goal is to find an approach that improves the complexity without losing the original indices.

Brute Force vs Better Approach
Approach	Time	Main Idea	Problem
Brute Force	O(n²)	Check every pair	Slow for large arrays
Sorting + Two Pointer	O(n log n)	Sort + move two pointers	Original indices are lost
Next Approach	Target: O(n)	Preserve indices while searching	To be implemented
What I Learned
Brute force is useful for establishing the basic logic.
Two pointers can significantly reduce unnecessary comparisons.
Sorting enables the two-pointer technique for many problems.
However, sorting the original array can destroy useful information.
Time complexity is not the only thing that matters.
We must also preserve whatever information the problem requires.
The best solution is not simply the fastest-looking algorithm; it must satisfy the complete problem requirements.