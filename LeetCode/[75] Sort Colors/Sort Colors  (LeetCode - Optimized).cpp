/*
-------------------------------------------------
LeetCode 75 - Sort Colors

Approach:
Counting Sort

Time Complexity:
O(n)

Space Complexity:
O(1)

Learning:
Implemented an optimized frequency-count approach
before learning the most optimal algorithm.
-------------------------------------------------
*/

class Solution {
public:
    void sortColors(vector<int>& arr) {

        //Optimized Appraoch :
        int n = arr.size() ;
        int count_0 = 0 , count_1 = 0 , count_2 = 0 ;

        for(int i = 0 ; i < n ; i++)
        {
            if (arr[i] == 0)
            {
                count_0++ ;
            }
            else if (arr[i] == 1)
            {
                count_1++ ;
            }
            else
            {
                count_2++ ;
            }
        }

        int index = 0 ;

        for(int i = 0 ; i < count_0 ; i++)
        {
            arr[index] = 0 ;
            index++ ;
        }

        for(int i = 0 ; i < count_1 ; i++)
        {
            arr[index] = 1 ;
            index++ ;
        }

        for(int i = 0 ; i < count_2 ; i++)
        {
            arr[index] = 2 ;
            index++ ;
        }
    }
};