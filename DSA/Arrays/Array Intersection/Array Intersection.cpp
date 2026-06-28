/*
Topic: Arrays

Problem:
Find the common elements (intersection)
between two arrays.

Example:
arr1 = {1,2,3,4,5}
arr2 = {6,7,3,1}

Output:
1 3

Approach:
1. Traverse every element of the first array.
2. Compare it with every element of the second array.
3. If a match is found, print it.
4. Store all common elements in a separate array.

Concepts Practiced:
- Nested loops
- Array traversal
- Frequency counting
- Array intersection
- Storing results dynamically

Time Complexity: O(n*m)
Space Complexity: O(k)

Learning Notes:
After solving the intersection problem,
I extended the solution by storing all
common elements in a separate array.
*/


#include <iostream>

using namespace std;

//WAF to print the intersection of 2 arrays : 
//given arrays : 
//  arr1[] = { 1 , 2 , 3 , 4 , 5 };
//  arr2[] = { 6 , 7 , 3 , 1 };

// result output = 1 , 3.  // common numbers in both array.


int inter(int arr1[] , int n , int arr2[] , int m)
{
    int x = 0 ;
    
    
    for(int i = 0 ; i < n ; i++) 
    {
        int count = 0 ;
        
        for(int j = 0 ; j < m ; j++)
        {
            if (arr1[i] == arr2[j])
            {
                count++ ;
            }
        }
        
        if ( count == 1 )
        {
            cout << arr1[i] << " ";
            x++ ;
        }
    }
    
    int common[x] ;
    int k = 0 ;
    
     for(int i = 0 ; i < n ; i++) 
    {
        int count = 0 ;
        
        for(int j = 0 ; j < m ; j++)
        {
            if (arr1[i] == arr2[j])
            {
                count++ ;
            }
        }
        
        if ( count == 1 )
        {
            common[k] = arr1[i] ;
            k++ ;
        }
    }
    
    for ( int a = 0 ; a < x ; a++)
    {
        cout << common[a] << " " ;
    }
    
    return 0 ;
}

int main()
{
  int  arr1[] = { 1 , 2 , 3 , 4 , 5 };
  int  arr2[] = { 6 , 7 , 3 , 1 };
  
  int n = sizeof(arr1) / sizeof(int);
  int m = sizeof(arr2) / sizeof(int);
  
  inter(arr1, n , arr2 , m);
    
    
    return 0;
}