/*
Problem:
Product of Array Except Self

Approach:
Optimized Prefix and Suffix Product Arrays

Idea:
Instead of multiplying every element except itself
using nested loops, precompute:

left[i]  -> Product of all elements to the left
right[i] -> Product of all elements to the right

Final Answer:

answer[i] = left[i] * right[i]

Time Complexity:
O(n)

Space Complexity:
O(n)

Concepts Practiced:
- Arrays
- Prefix Product
- Suffix Product
- Time Complexity Optimization

Learning Notes:
I was able to solve the brute-force approach
independently. After studying the optimized
solution, I understood how prefix and suffix
products eliminate the need for nested loops.
*/

#include <iostream>

using namespace std;

//Product of Array Except Self ( Optimized ) :

int main()
{
    int arr[] = { 1 , 2 , 3 , 4 };
    int n = sizeof(arr) / sizeof(int) ;
    int answer[n] ; // to store answer's here in a new array 
    int left[n] ;
    int right[n] ;
    
    left[0] = 1 ;
    right[n-1] = 1 ;
    
    for ( int i = 1 ; i < n ; i++ ) //left ;
    {
        left[i] = left[i - 1] * arr[i - 1] ;
    }
    
    for ( int i = n - 2 ; i >= 0 ; i-- )
    {
        right[i] = right[i + 1] * arr[i + 1] ;
    }
    
    for ( int i = 0 ; i < n ; i++ )
    {
        answer[i] = left[i] * right[i] ;
        cout << answer[i] << "  " ;
    }
    
    
    
    return 0 ;
}