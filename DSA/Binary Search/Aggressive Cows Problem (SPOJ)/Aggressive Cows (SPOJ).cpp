/*
------------------------------------------------------------
Problem : Aggressive Cows (SPOJ)

Approach:
1. Sort the stall positions.
2. Binary Search on the answer (minimum distance).
3. Check if all cows can be placed while maintaining
   at least 'mid' distance between consecutive cows.
4. If possible, try a larger distance.
5. Otherwise search for a smaller distance.

Time Complexity:
O(N log N + N log(MaxDistance))

Space Complexity:
O(1)

Concepts Learned:
- Binary Search on Answer
- Greedy Placement
- Feasibility Checking
------------------------------------------------------------
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//Aggressive Cow's Problem :

bool possible(vector<int> &arr , int n , int c , int mid)
{
    int cows = 1 ; int last = arr[0] ;
    
    for (int i = 0 ; i < n ; i++)
    {
        if ((arr[i] - last) >= mid)
        {
            cows++ ;
            last = arr[i] ;
        }
        if (cows == c)
        {
            return true ;
        }
    }
    
    return false ;
}

int main()
{
    vector<int> arr = { 1 , 2 , 8 , 4 , 9 };
    sort(arr.begin() , arr.end()) ;
    
    int n = arr.size() ;
    int c = 3 ;
    
    int start = 1 ;
    int end = arr[n - 1] - arr[0];
    int ans = -1 ;
    
    while ( start <= end )
    {
        int mid = start + ( end - start ) / 2 ;
        
        if (possible(arr , n , c , mid))
        {
            ans = mid ;
            start = mid + 1 ;
        }
        else
        {
            end = mid - 1 ;
        }
    }
    
    cout << ans ;
    
    return 0 ;
}