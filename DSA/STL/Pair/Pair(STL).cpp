/*
 * Topic: C++ STL - Pairs
 *
 * Description:
 * Demonstrates creating pairs, using different data types in pairs,
 * nesting pairs, accessing pair members, and storing pairs in a vector.
 *
 * Concepts Covered:
 * - std::pair
 * - Pair initialization
 * - first and second members
 * - Nested pairs
 * - vector<pair<int, int>>
 * - push_back() and emplace_back()
 * - Range-based for loops with auto
 *
 * Algorithm:
 * No standalone DSA algorithm is implemented. This program demonstrates
 * how pairs can group related values and work with STL containers.
 *
 * Learning Objective:
 * Understand how to store two related values together and how to access
 * and traverse collections of pairs.
 *
 * Time Complexity:
 * Pair member access is O(1). Appending to a vector of pairs is amortized
 * O(1) per insertion.
 */

#include <iostream>
#include <vector>

using namespace std ;

int main()
{
    //Creating a Pair : 
    
    pair<int , int> p = { 1 , 5 };
    pair<float , int> q = {1.5 , 5};
    
    //Can also create a pair inside a pair : 
    
    pair<int , pair<int , int>> r = { 1 , { 2 , 3 }};
    
    //Accessing the pair values : 
    
    cout << r.first << endl ; //Prints  1 ;
    cout << r.second.first << endl ;  //Prints 2 ;
    cout << r.second.second << endl ; //Prints 3 ;
    
    
    //Can create Pair in a Vector : 
    
    vector<pair <int , int>> vec = {{ 1 , 2 } , { 3 , 4 } , { 5 , 6 } , { 7 , 8 }} ;
    
    //with pair in a vector we can perfom the  vector functions in it ;
    
    vec.push_back({9 , 10}) ;     //Adds pair : { 9 , 10 } ;
    
    vec.emplace_back( 11 , 12 ) ; //Adds pair : { 11 , 12 } ; 
    
    //Emplace back is same as push back but we do not need to ,
    //Specify the values in a "{ }" brackets as a pair.
    
    cout << endl ;
    
    
    //Printing all vector pairs : 
    
    for(auto p : vec)
    {
        cout << p.first << " , " << p.second << " " << endl ;
    }
    
    //Output :
    /*
        1 , 2 
        3 , 4 
        5 , 6 
        7 , 8 
        9 , 10
        11 , 12
    */
    
    
    return 0 ;
}