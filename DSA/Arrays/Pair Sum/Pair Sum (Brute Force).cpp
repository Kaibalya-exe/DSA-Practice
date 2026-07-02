/*
Topic: Arrays

Problem:
Find a pair of elements whose sum equals
the target value.

Approach:
Brute Force

Algorithm:
1. Traverse every element.
2. Compare it with every other element.
3. Check whether their sum equals target.
4. Print the pair and their indices.

Time Complexity: O(n²)
Space Complexity: O(1)

Concepts Practiced:
- Nested loops
- Pair generation
- Array traversal
- Brute force problem solving

Learning Notes:
This was my initial approach before
learning the optimized two-pointer method.
*/

#include <iostream>

using namespace std; 

//pair sum :

int main()
{
    //brute force : 
    int arr[] = { 2 , 7 , 11 , 15 } ;
    int n = sizeof(arr) / sizeof(int) ;
    int target = 18 ;
    
    for ( int i = 0 ; i < n ; i++)
    {
        for ( int j = i + 1 ; j < n ; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << arr[i] << " , " << arr[j] << endl;
                cout << i << " , " << j << endl;
            }
        }
    }
    
    return 0 ;
}