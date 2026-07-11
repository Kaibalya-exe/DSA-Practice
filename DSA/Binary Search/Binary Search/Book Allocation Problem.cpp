/*
Problem:
Book Allocation Problem

Approach:
Binary Search on Answer

Problem Statement:
Given N books and M students,
allocate contiguous books so that the
maximum pages assigned to any student
is minimized.

Key Idea:

Instead of searching for the student,
we Binary Search the answer
(the maximum pages a student can receive).

Algorithm:

1. Define a search space.
   Minimum = 0
   Maximum = Sum of all pages

2. Pick the middle value.

3. Check whether all books can be
   distributed among M students
   without any student receiving
   more than mid pages.

4. If possible:
      Store answer
      Search left for a smaller value.

5. Otherwise:
      Search right.

Time Complexity:
O(n × log(sum))

Space Complexity:
O(1)

Concepts Practiced:
- Binary Search on Answer
- Greedy Allocation
- Search Space Reduction
- Validation Function

Learning Notes:
This problem introduced me to the idea
of Binary Search on the answer rather
than searching for an element.

The validation function determines
whether a candidate answer is feasible.
*/

#include <iostream>

using namespace std;

//Book allocation problem :

bool valid (int arr[] , int n , int m , int mid )
{
    int student = 1 ; int pages = 0 ;
    
    for (int i = 0 ; i < n ; i++ )          //0(n)
    {
        if (arr[i] > mid)
        {
            return false ;
        }
        
        if (pages + arr[i] <= mid)
        {
            pages += arr[i] ;
        }
        else
        {
            student++ ;
            pages = arr[i] ;
        }
    }
    return student > m ? false : true ;
}

int main()
{
    int arr[] = { 2 , 1 , 3 , 4 } ;
    int n = sizeof(arr) / sizeof(int) ; // no. of books
    int m = 2 ; // no. of students to distribute books to
    int max = 0 ; //maximum possible pages
    
    if ( m > n )  //Edge case :
    {
        return -1 ;
    }
    
    for (int i = 0 ; i < n ; i++ )      //0(n)
    {
        max += arr[i] ;
    }
    
    //Range :
    int start = 0 ;
    int end = max ;
    
    int ans = 0 ;
    
    while ( start <= end )          //0(Log(Range)) -> 0(Log Range * n)
    {
        int mid = start + ( end - start ) / 2 ;
        
        if (valid(arr , n , m , mid) )  //Left :
        {
            ans = mid ;
            end = mid - 1 ;
        }
        else                            //Right :
        {
            start = mid + 1 ;
        }
    }
    
    cout << ans << endl ; 
    
    return 0 ;
}