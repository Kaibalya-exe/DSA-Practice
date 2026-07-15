/*
-------------------------------------------------
LeetCode 75 - Sort Colors

Algorithm:
Dutch National Flag Algorithm

Time Complexity:
O(n)

Space Complexity:
O(1)

Learning:
Solved using the Dutch National Flag Algorithm,
which sorts the array in a single traversal using
three pointers.

This is the optimal solution for the problem.
-------------------------------------------------
*/

class Solution {
public:
    void sortColors(vector<int>& arr) {

        //Optimized Approach : Dutch National Flag Algorithm 

        int n = arr.size() ;

        int mid = 0 , low = 0 , high = n - 1 ;

        while( mid <= high )
        {
            if (arr[mid] == 0)
            {
                swap(arr[low] , arr[mid]) ;
                low++ ;
                mid++ ;
            }
            else if (arr[mid] == 1)
            {
                mid++ ;
            }
            else
            {
                swap(arr[high] , arr[mid]) ;
                high-- ;
            }
        }

    }
};