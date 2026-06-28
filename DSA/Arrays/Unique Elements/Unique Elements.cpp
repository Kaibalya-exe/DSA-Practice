/*
Topic: Arrays

Problem:
Print all unique (non-repeating) elements from a given array.

Approach:
1. Traverse each element.
2. Count its frequency by comparing it with every other element.
3. If frequency equals one, print the element.
4. Store all unique elements in a separate array.

Concepts Practiced:
- Nested loops
- Frequency counting
- Array traversal
- Dynamic thinking
- Working with variable-sized results

Time Complexity: O(n²)
Space Complexity: O(n)

Learning Notes:
After finding the unique elements, I challenged myself
to store them in a separate array whose size depends
on the number of unique elements found.
*/


#include <iostream>

using namespace std;

//WAF to print all the unique values from the given array.


//finding the unique values first : 
int unique(int arr[])
{
    int n = 0 ;
    
    for (int i = 0 ; i < 6 ; i++)
    {
        int count = 0 ;
        
        for (int j = 0 ; j < 6 ; j++)
        {
            if (arr[i] == arr[j])
            {
                count++ ;
            }
        }
        
        if (count == 1)
        {
            cout << arr[i] << " " ;
            n++ ;
        }
    }

    //storing the unique values in a seperate array : 
    int uni[n] ;
    int k = 0 ;
    
        for (int i = 0 ; i < 6 ; i++)
    {
        int count = 0 ;
        
        for (int j = 0 ; j < 6 ; j++)
        {
            if (arr[i] == arr[j])
            {
                count++ ;
            }
        }
        
        if (count == 1)
        {
            uni[k] = arr[i] ;
            k++ ;
        }
    }
    
    for ( int a = 0 ; a < n ; a++)
    {
        cout << uni[a] << " " ;
    }
    
    
    return 0;
}

int main()
{
    int arr[] = { 1 , 2 , 3 , 1 , 2 , 4 };
    
    unique(arr);
    
    return 0;
}