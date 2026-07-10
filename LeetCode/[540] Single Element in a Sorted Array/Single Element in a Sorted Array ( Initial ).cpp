/*
LeetCode #540 - Single Element in a Sorted Array

Approach:
Binary Search using Index Parity

Time Complexity:
O(log n)

Space Complexity:
O(1)

Concepts Learned:
- Binary Search
- Index Parity
- Edge Cases
- Sorted Arrays

Learning Notes:
This problem taught me that Binary Search
can also be based on structural properties
of an array instead of comparing values.

Using even and odd index pairing makes it
possible to efficiently locate the single
non-duplicate element.
*/

class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        
        int n = arr.size() ;

        int start = 0 ;
        int end = n - 1 ;

        if ( n == 1 )
        {
            return arr[0] ;
        }

        while ( start <= end )
    {
        int mid = start + ( end - start ) / 2 ;

        if ( mid == 0 && arr[0] != arr[1] )
        {
            return arr[mid] ;
        }

        if ( mid == n - 1 && arr[n - 1] != arr[n - 2] )
        {
            return arr[mid] ;
        }
        
        if ( arr[mid - 1] != arr[mid] && arr[mid] != arr[mid +1] )
        {
            return arr[mid] ;
        }
        else if ( mid % 2 == 0 ) //Index of mid = Even ;
        {
            if ( arr[mid + 1] == arr[mid] )
            {
                start = mid + 1 ;
            }
            else
            {
                end = mid - 1 ;
            }
        }
        else if ( mid % 2 != 0 ) //Index of mid = Odd ;
        {
            if ( arr[mid] == arr[mid + 1] )
            {
                end = mid - 1 ;
            }
            else
            {
                start = mid + 1 ;
            }
        }
    }
        return 0 ;
    }
};