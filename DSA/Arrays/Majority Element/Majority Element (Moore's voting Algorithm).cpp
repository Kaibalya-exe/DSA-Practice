/*
Topic: Arrays

Problem:
Find the majority element.

Approach:
Moore's Voting Algorithm

Algorithm:
1. Maintain a candidate.
2. Maintain a frequency counter.
3. Increment if same element.
4. Decrement if different.
5. Candidate remaining is majority.

Time Complexity: O(n)
Space Complexity: O(1)

Concepts Practiced:
- Majority element pattern
- Moore's Voting Algorithm
- Optimization techniques

Learning Notes:
This problem introduced me to one of the
most elegant optimization algorithms in DSA.
*/

#include <iostream>

using namespace std;

//majority element : using Moore's voting algorithm.

int main()
{
    int arr[] = { 1 , 2 , 2 , 1 , 1 } ;
    int n = sizeof(arr) / sizeof(int) ;
    
    int freq = 0 ; 
    int ans = 0 ;
    
    for (int i = 0 ; i < n ; i++)
    {
        if (freq == 0)
        {
            ans = arr[i];
        }
        if (ans == arr[i])
        {
            freq++ ;
        }
        else
        {
            freq-- ;
        }
    }
    
    cout << ans ;
    
    return 0;
}