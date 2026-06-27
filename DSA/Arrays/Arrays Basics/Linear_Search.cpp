/*
Topic: Linear Search

Problem:
Search for a target element in an array
and return its index position.

Concepts Practiced:
- Array traversal
- Linear search algorithm
- Boolean flags
- Breaking loops

Time Complexity: O(n)
Space Complexity: O(1)

Learning Notes:
This exercise introduced me to the concept
of searching algorithms and tracking whether
an element exists in an array.
*/

#include <iostream>

using namespace std;

int main() 
{
  //Linear search : Find the target in the given array and return its index value :


  int arr[] = { 4 , 2 , 7 , 8 , 1 , 2 , 5 }; //given array.
  int target = 8 ;                           //given target.
  int Tindex = 0 ;                           //variable used to store index value ( initial = 0 ).
  bool found = 0 ;                           //used to check the target completion.


  for (int i = 0 ; i < 7 ; i++)
  {
      if (target == arr[i])
      {
          Tindex = i;
          cout << "Target Found! at index : " << Tindex << endl;
          found = 1 ;
          break;
      }
  }
  if (found == 0)
  {
      cout << "Target not found!";
  }

    return 0;
}