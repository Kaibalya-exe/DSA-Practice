/*
Problem: Container With Most Water

Improved Brute Force Approach

Improvement:
Avoided duplicate pair checking.

Fix:

for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)

Although duplicates were removed,
the algorithm still resulted in
Time Limit Exceeded due to O(n²)
complexity.

Time Complexity: O(n²)
Space Complexity: O(1)

Concepts Practiced:
- Pair generation
- Optimization of brute force
- Time complexity analysis
*/

#include <iostream>

using namespace std;

//Container With Most Water :
//brute force approach :

int main()
{
    int arr[] = { 1 , 8 , 6 , 2 , 5 , 4 , 8 , 3 , 7 };
    //int arr[] = { 1 , 1 };
    int n = sizeof(arr) / sizeof(int) ;
    
    int water = 0 ;
    int width = 0 ;
    int height = 0 ;
    
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = i+1 ; j < n ; j++)
        {
            int left = arr[i] ;
            int right = arr[j] ;
            
            width = j - i ;
            
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
tried fixing the duplicate cases problem :
fix : 
 for(int i = 0 ; i < n ; i++)
    {
        for(int j = i+1 ; j < n ; j++)
        {
         
        }
    }

But still gives TLE.
*/