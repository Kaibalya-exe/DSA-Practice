/*
    Problem: Two Sum

    Approach: Optimized - Using unordered_map

    Description:
    Find two elements whose sum equals the target using
    an unordered_map to store previously visited elements
    and their original indices.

    Algorithm:
    For every element:
        1. Calculate the required complement:
           second = target - current element
        2. Check whether the complement already exists
           in the unordered_map.
        3. If it exists, the required pair is found.
        4. Otherwise, store the current element and its index.

    Time Complexity: O(n) average
    Space Complexity: O(n)

    Learning:
    Learned the basics of STL unordered_map, key-value
    storage, find(), and using a hash map to solve Two Sum
    without modifying the original array.

    Progression:
    Brute Force -> Sorting + Two Pointer -> Hash Map
*/

#include <iostream> 
#include <unordered_map>

using namespace std ;

//TwoSum (Optimized - Using unordered_map) ;

int main()
{
    int arr[] = { 5 , 2 , 11 , 7 , 15 } ;
    
    int n = sizeof(arr) / sizeof(int) ;
    
    int target = 17 ;
    
    unordered_map<int , int>m ;
    
    for(int i = 0 ; i < n ; i++)
    {
        int first = arr[i] ;
        int second = target - first ;
        
        if(m.find(second) != m.end())
        {
            cout << i << " , " << m[second] << endl ;
            break ;
        }
        
        m[first] = i;
    }
    
    return 0 ;
}