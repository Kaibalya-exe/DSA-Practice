/*
-------------------------------------------------
LeetCode : 75. Sort Colors
Difficulty : Medium

Approach:
Brute Force (Bubble Sort)

Time Complexity:
O(n²)

Space Complexity:
O(1)

Learning:
Solved using Bubble Sort before studying
the optimal Dutch National Flag Algorithm.

This solution prioritizes understanding first,
optimization later.
-------------------------------------------------
*/

class Solution {
public:
    void sortColors(vector<int>& arr) {

        //Brute Force Appraoch : Bubble Sort 

        int n = arr.size() ;

        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < n - i - 1 ; j++)
            {
                if (arr[j] >= arr[j+1])
                {
                    swap(arr[j] , arr[j+1]) ;
                }
            }
        }
    }
};