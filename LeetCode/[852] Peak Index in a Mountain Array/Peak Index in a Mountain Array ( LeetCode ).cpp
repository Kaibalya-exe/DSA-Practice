/*
LeetCode #852 - Peak Index in a Mountain Array

Approach:
Binary Search

Time Complexity:
O(log n)

Space Complexity:
O(1)

Concepts Learned:
- Binary Search
- Mountain Arrays
- Peak Finding

Learning Notes:
This problem strengthened my understanding
of Binary Search beyond searching for values.
I learned how Binary Search can also locate
special positions, such as the peak of a
mountain array.
*/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int n = arr.size() ;

        int start = 1 ;
        int end = n - 2 ;
        int peak ;

        while ( start <= end )
        {
            int mid = start + ( end - start ) / 2 ;

            if ( arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1] )
            {
                peak = mid ;
                return peak ;
            }
            
            else if ( arr[mid] > arr[mid - 1] )   //Going up to peak :
            {
                start = mid + 1 ;
            }
                
            else                            //Coming Down from peak :
            {
                end = mid - 1 ;
            }
        }
        
        return -1 ;
    }
};