/*
Topic: Arrays - Subarrays

Problem:
Find the maximum subarray sum using
the brute force approach.

Concepts Learned:
- What is a subarray
- Number of subarrays formula:
      n*(n+1)/2
- Nested loops
- Running sum
- Maximum value tracking

Approach:
1. Start from every index.
2. Generate all possible subarrays.
3. Calculate their sums.
4. Track the maximum sum.

Time Complexity: O(n²)
Space Complexity: O(1)

Learning Notes:
This was my first introduction to
subarrays and brute force approaches.
*/

#include <iostream>
#include <climits>

using namespace std;

//Maximum Subarray Sum :
// using Kadane's Algorithm ;

int main()
{
    int arr[7] = { 3 , -4 , 5 , 4 , -1 , 7 , -8 };
    int mx = INT_MIN ;
    int cs = 0;
    
    for (int i = 0 ; i < 7 ; i++)
    {
        cs += arr[i] ;
        mx = max(mx , cs) ;
        
        if (cs < 0)
        {
            cs = 0 ;
        }
    }
    
    cout << mx ;
    
    
    return 0;
}