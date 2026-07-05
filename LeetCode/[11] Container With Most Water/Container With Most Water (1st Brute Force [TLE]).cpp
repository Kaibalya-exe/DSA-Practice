/*
Problem: Container With Most Water

My Initial Brute Force Approach

Approach:
Check every possible pair.

Issue:
The algorithm checked duplicate cases:

(1,2)
(2,1)

which are identical.

Example:

i = 1, j = 2
i = 2, j = 1

This caused unnecessary computations.

Time Complexity: O(n²)
Space Complexity: O(1)

Learning Notes:
This was my first attempt at solving
the problem independently.
*/

#include <iostream>

using namespace std;

//Container With Most Water : 
//brute force approach :

int main()
{
    //int arr[] = { 1 , 8 , 6 , 2 , 5 , 4 , 8 , 3 , 7 };
    int arr[] = { 1 , 1 };
    int n = sizeof(arr) / sizeof(int) ;
    
    int water = 0 ;
    int width = 0 ;
    int height = 0 ;
    
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = n - 1 ; j >= 0 ; j--)
        {
            int left = arr[i] ;
            int right = arr[j] ;
            
            width = i - j ;
            
            if (width < 0)
            {
                width = -(width) ;
            }
            
            height = min(left , right) ;
            
            water = max(water , width * height) ;
        }
    }
    
    cout << water ;

    return 0 ;
}

/*
Brute Force approach :
but checked duplicate cases due to i and j crossing each other : 
for example : 
checks for both :
     ( 1 , 2 )  && ( 2 , 1 ) 
causing TLE.
*/