/*
Topic: Arrays

Problem:
Best Time to Buy and Sell Stock

Optimized One-Pass Solution

Approach:
1. Keep track of the minimum buying price.
2. Calculate the profit at every step.
3. Update the maximum profit found.

Algorithm:
buy = minimum stock price seen so far
profit = maximum(arr[i] - buy)

Time Complexity: O(n)
Space Complexity: O(1)

Concepts Practiced:
- Array Traversal
- Greedy Approach
- Running Minimum
- Optimization

Learning Notes:
After discovering the flaw in my initial
approach, I learned the correct one-pass
solution and implemented it successfully.
*/

#include <iostream>

using namespace std;

//Stock buy and sell : 

int main()
{
    //int arr[] = { 7 , 1 , 5 , 3 , 6 , 4 };
    //int arr[] = { 8 , 7 , 6 , 5 , 4 , 3 , 2 };
    int arr[] = { 2 , 4 , 1 }; 
    
    int n = sizeof(arr) / sizeof(int) ;
    
    int buy = arr[0] ;
    int profit = 0 ;
    
    
    for ( int i = 1 ; i < n ; i++ )
    {
        if ( arr[i] > buy )
        {
            profit = max(profit , arr[i] - buy);
        }
        
        buy = min(buy , arr[i]) ;
    }
    
    if ( profit == 0 )
    {
        return 0 ;
    }
    else
    {
        cout << profit ;
    }
    
    
    return 0 ;
}