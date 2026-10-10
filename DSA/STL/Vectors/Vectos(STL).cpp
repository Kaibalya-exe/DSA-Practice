/*
 * Topic: C++ STL - Vectors and Iterators
 *
 * Description:
 * Demonstrates vector initialization, insertion, deletion, element access,
 * size-related operations, iterators, and forward/reverse traversal.
 *
 * Concepts Covered:
 * - push_back() and emplace_back()
 * - pop_back()
 * - operator[] and at()
 * - front() and back()
 * - erase() and insert()
 * - clear() and empty()
 * - begin(), end(), rbegin(), and rend()
 * - Iterator-based traversal
 *
 * Algorithm:
 * No standalone DSA algorithm is implemented. This program demonstrates
 * common Standard Template Library (STL) vector operations.
 *
 * Learning Objective:
 * Understand how vectors store elements, how their size changes, how
 * iterators navigate them, and how insertion/deletion affect indices.
 *
 * Time Complexity:
 * Varies by operation. See README.md for the complete breakdown.
 */

#include <iostream>

#include <vector>

using namespace std ;

int main()
{
    //Vectors : 
    vector<int> vec = { 1 , 2 , 3 };
    
    //Insert elements at the back :
    vec.push_back(4) ;
    vec.push_back(5) ;
    vec.push_back(6) ;
    
    //Output : 1 , 2 , 3 , 4 , 5 , 6
    
    //Delete / Pop at the back : 
    vec.pop_back() ;                //Pops 6 , last element in the vector.
    
    //Output : 1 , 2 , 3 , 4 , 5
    
    //Emplace_back : same as push_back slightly different.
    vec.emplace_back(6) ;           //Adds 6 , at the back.
    
    //Output : 1 , 2 , 3 , 4 , 5 , 6
    
    //To access vector elements with index values : 
    cout << vec[0] << endl ;        //element at index 0 -> 1 
    cout << vec.at(1) << endl ;     // element at index 1 -> 2
    
    //Front and Back value of a vector : 
    cout << vec.front() << endl ;   //Front element -> 1 ;
    cout << vec.back() << endl ;    //Back element -> 6 ;
    
    //Erase an element in a vector : 
    vec.erase(vec.begin());         //Erases 0th index value --> 1 ;
    vec.erase(vec.begin() + 3 ) ;   //Erases 3rd index value --> 4 but erases --> 5 ;
                                    //here erases 5 as 0th index is erased in first erase.
                                    
    //Output : 2 , 3 , 4 , 6 
                                    
    //Can be used to erase a range of values in a vector as well :
    //vec.erase(vec.begin() , vec.begin() + 3) ;
    
    //Output : 4 , 5 , 6 ;  ( for vector = 1 , 2 , 3 , 4 , 5 , 6)
    
    //Insert a value at a particular index : 
    vec.insert(vec.begin() , 1) ;
    
    //Output : 1 , 2 , 3 , 4 , 6  (According to previous vector functions)
    
    vec.insert(vec.begin() + 4 , 5) ;
    
    //Output : 1 , 2 , 3 , 4 , 5 , 6  (According to previous vector functions)
    
    
    //Clear : clears all the element from the vector.
    vec.clear() ;
    
    //Size = 0 ; 
    //Capacity = 6 , stays unchanged ;
    
    
    //Empty : checks if the vector is empty ;
    if(vec.empty())
    {
        cout << "empty" << endl ;
    }
    else
    {
        cout << "Not empty" << endl ;
    }
    
    //Output : empty (As vector was cleared from the previous vec.clear() command) ;
    
    vec.push_back(1) ;
    vec.push_back(2) ;
    vec.push_back(3) ;
    vec.push_back(4) ;
    vec.push_back(5) ;
    vec.push_back(6) ;
    
    //Vector = { 1 , 2 , 3 , 4 , 5 , 6}
    
    //Vector : Iterators :
    
    cout << *(vec.begin()) << endl ;   //Points to 0th index value = 1 ;
    cout << *(vec.begin() + 3) << endl ;    //Points to 3rd index value = 4 ;
    
    // *(vec.end()) ;  --> points to the nth + 1 position of the vector ;
    
    // [ 1 , 2 , 3 , 4 , 5 , 6 ]      (Given Vector)
    //   ^                 (nth) ^
    //(vec.begin)          (vec.end()) 
    
    
    //Loop with Vector Iterator :
    vector<int>::iterator i ;
    
    for(i = vec.begin() ; i != vec.end() ; i++)
    {
        cout << *(i) << " " ;
    }
    
    cout << endl ;
    
    //Output : 1 , 2 , 3 , 4 , 5 , 6
    
    //Loop with Reverse Vector Iterator :
    vector<int>::reverse_iterator j ;
    
    for(j = vec.rbegin() ; j != vec.rend() ; j++)
    {
        cout << *(j) << " " ;
    }
    
    cout << endl ;
    
    //Output : 6 , 5 , 4 , 3 , 2 , 1
    
    
    //Note : instead of writing reverse_iterator and iterator , we can use 
    //       auto keyword in modern C++.
    
    return 0 ;
}