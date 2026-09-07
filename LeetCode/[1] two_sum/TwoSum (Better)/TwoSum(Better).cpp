/*
    Problem: Two Sum

    Approach: Sorting + Two Pointers

    Description:
    Sort the array and use two pointers:
    - low starts from the beginning
    - high starts from the end

    If the sum is smaller than the target:
        move low forward.

    If the sum is greater than the target:
        move high backward.

    If the sum equals the target:
        the required pair has been found.

    Time Complexity:
    O(n log n) for sorting + O(n) for two-pointer traversal
    Overall: O(n log n)

    Space Complexity:
    O(1) auxiliary space depending on sorting implementation.

    Important Limitation:
    Sorting changes the original indices of the elements.
    Therefore, this approach cannot directly return the
    original indices required by the LeetCode Two Sum problem.

    Learning:
    The two-pointer technique works for finding the pair,
    but modifying the original array caused an index-mapping
    problem.
*/

#include <iostream>
#include <algorithm>

using namespace std ;

//Two Sum : (Better) :

void TwoSum(int arr[] , int n , int target)
{
    int low = 0 ;
    int high = n - 1 ;
    
    while(low < high)
    {
        if (arr[low] + arr[high] == target)
        {
            cout << low << " , " << high ;
            return ;
        }
        else if (arr[low] + arr[high] < target)
        {
            low++ ;
        }
        else
        {
            high-- ;
        }
    } 
}

int main()
{
    int arr[] = { 5 , 2 , 11 , 7 , 15 };
    int target = 9 ;
    
    int n = sizeof(arr) / sizeof(int) ;
    
    sort(arr , arr + n) ;
    
    TwoSum(arr , n , target);
    
    return 0 ;
}