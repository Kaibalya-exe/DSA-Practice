/*
Topic: Arrays - Kadane's Algorithm

Problem:
Find the maximum subarray sum using
an optimized approach.

Concepts Learned:
- Running sum
- Greedy optimization
- Kadane's Algorithm

Approach:
1. Maintain a current sum.
2. Add current element.
3. Update maximum sum.
4. If current sum becomes negative,
   reset it to zero.

Time Complexity: O(n)
Space Complexity: O(1)

Learning Notes:
This problem introduced me to one of
the most important optimization
algorithms in array problems.
*/

#include <iostream>

using namespace std;

int main() 
{
    int arr[] = { 1 , 2 , 3 , 4 , 5 };
    int mx = 0 ;
    //printing all possible subarrays :
    //Brute force approach :
    
    for (int i = 0 ; i < 5 ; i++)
    {
        int cs = 0 ;
        
        for ( int j = i ; j < 5 ; j++)
        {
            cs += arr[j] ;
            mx = max(cs , mx);
        }
        cout << endl ;
    }
    
    cout << mx ;

    return 0;
}