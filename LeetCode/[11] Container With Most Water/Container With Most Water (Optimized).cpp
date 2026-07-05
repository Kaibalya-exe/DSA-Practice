/*
Problem: Container With Most Water

Approach:
Two Pointer Algorithm

Algorithm:
1. Place one pointer at the beginning.
2. Place another pointer at the end.
3. Calculate current area.
4. Move the pointer with smaller height.
5. Repeat until pointers meet.

Why it works:
The smaller height limits the area.
Moving the larger height can never
increase the maximum area.

Time Complexity: O(n)
Space Complexity: O(1)

Concepts Learned:
- Two Pointer Technique
- Greedy Thinking
- Optimization
- Pointer Movement Logic

Learning Notes:
After solving the brute force
approach and analyzing TLE,
I learned and implemented
the optimized solution.
*/

#include <iostream>

using namespace std;

//Container With Most Water ( Optimized ) :

int main()
{
    int arr[] = { 1 , 8 , 6 , 2 , 5 , 4 , 8 , 3 , 7 };
    //int arr[] = { 1 , 1 };
    //int arr[] = { 1 , 2 , 1 };
    //int arr[] = {2, 3, 4, 5, 18, 17, 6};
    int n = sizeof(arr) / sizeof(int) ;
    
    int water = 0 ;
    int width = 1 ; 
    int height = 1 ;
    int i = 0 ; int j = n - 1 ;
    int left = arr[i] ; 
    int right = arr[j] ;
    
    while (i < j)
    {
        width = j - i ;
        height = min(left , right) ;
        
        water = max(water , width * height) ;
        
        if ( left > right )
        {
            j-- ;
            right = arr[j] ;
        }
        else
        {
            i++ ;
            left = arr[i] ;
        }
    }
    
    cout << water << endl ;

    return 0 ;
}

//LeetCode Solution :

class Solution {
public:
    int maxArea(vector<int>& height) {

        //Optimised Approach :
    
    int n = height.size() ;
    int water = 0 ;
    int width = 1 ; 
    int Height = 1 ;
    int i = 0 ; int j = n - 1 ;
    int left = height[i] ; 
    int right = height[j] ;
    
    while (i < j)
    {
        width = j - i ;
        Height = min(left , right) ;
        
        water = max(water , width * Height) ;
        
        if ( left > right )
        {
            j-- ;
            right = height[j] ;
        }
        else
        {
            i++ ;
            left = height[i] ;
        }
    }

        return water ;
        
    }
};