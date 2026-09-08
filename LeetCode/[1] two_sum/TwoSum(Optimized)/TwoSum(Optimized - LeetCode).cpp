/*
    Problem: Two Sum
    Platform: LeetCode

    Approach: Optimized - Using unordered_map

    Description:
    Use an unordered_map to store previously visited numbers
    along with their original indices.

    For each element, calculate:
        complement = target - current element

    If the complement already exists in the map, return the
    current index and the stored index of the complement.

    Time Complexity: O(n) average
    Space Complexity: O(n)

    Learning:
    Learned and implemented the STL unordered_map approach
    after understanding its key-value structure, find(),
    insertion, and the complement-based logic.

    Progression:
    Brute Force -> Sorting + Two Pointer -> Hash Map
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {

        int n = arr.size() ;

        unordered_map<int , int>m ;

        vector<int> ans ;

        for(int i = 0 ; i < n ; i++)
        {
            int first = arr[i] ;
            int second = target - first ;

            if(m.find(second) != m.end())
            {
                ans.push_back(i) ;
                ans.push_back(m[second]) ;
                break ;
            }

            m[first] = i ;
        }
        return ans ;
    }
};