/*
Topic: Arrays

Problem:
Find the majority element.

Definition:
An element appearing more than n/2 times.

Approach:
Brute Force Frequency Counting

Algorithm:
1. Traverse each element.
2. Count its occurrences.
3. Track the maximum frequency.
4. Store the corresponding element.

Time Complexity: O(n²)
Space Complexity: O(1)

Concepts Practiced:
- Frequency counting
- Nested loops
- Majority element logic

Learning Notes:
I was able to determine the frequency
of elements independently but initially
needed help storing the element with
maximum frequency.
*/

#include <iostream>
#include <climits>

using namespace std;

int main()
{
    //majority element : 
    
    int arr[] = { 1 , 2 , 2 , 1 , 1 } ;
    int n = sizeof(arr) / sizeof(int) ;

    int major = 0 ;
    int element = 0 ;
    
    for (int i = 0 ; i < n ; i++)
    {
        int count = 1 ;
        
        for (int j = i + 1 ; j < n ; j++)
        {
            if (arr[i] == arr[j])
            {
                count++ ;
            }
        }
        
        if ( count > major )
        {
            major = count ;
            element = arr[i] ;
        }
    }
    
    if ( major > n/2)
    {
        cout << "majority element : " << element << endl ; 
    }
    
    
    return 0 ;
}