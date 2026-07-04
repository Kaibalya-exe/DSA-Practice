/*
Topic: Arrays

Problem:
Best Time to Buy and Sell Stock

My Initial Approach

Approach:
1. Find the minimum buying price.
2. Find the maximum selling price.
3. Calculate the profit.

Observation:
This approach works for some test cases
but fails for cases where the maximum
selling price occurs before the minimum
buying price.

Example Failure:

Input:
[2,4,1]

Expected:
2

My Approach:
0

Reason:
The algorithm does not properly maintain
the constraint that buying must occur
before selling.

Time Complexity: O(n)
Space Complexity: O(1)

Learning Notes:
This attempt helped me understand why
tracking only global minimum and maximum
values is insufficient.
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
    int sell ;
    int profit = 0 ;
    
    for (int i = 0 ; i < n ; i++)
    {
        if (buy > arr[i])
        {
            buy = arr[i] ;
            sell = arr[i] ;
        }
        
        if(sell < arr[i])
        {
            sell = arr[i] ;
        }
    }
    
    if ( buy == sell)
        {
            return 0 ;
        }
        
    if ( buy < sell)
    {
        profit = sell - buy ;
    }
    
    cout << profit ;

    
    
    
    return 0 ;
}