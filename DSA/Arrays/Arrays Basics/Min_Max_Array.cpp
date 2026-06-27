/*
Topic: Arrays Basics

Problem:
Find the smallest and largest element in an array
and return their corresponding index positions.

Concepts Practiced:
- Array traversal
- Variable tracking
- Index storage
- Conditional statements

Time Complexity: O(n)
Space Complexity: O(1)

Learning Notes:
This exercise helped me understand how to iterate
through arrays and maintain both values and their
index positions simultaneously.
*/

#include <iostream>

using namespace std;

int main()
{
    //Finding the smallest value in the given array :
    
    /* Appraoch : 
    1) store the first value of the array in a variable ( smallest ).
    2) using loop , compare other elements with the value stored in variable.
         (smallest = 5 (initial value stored) > 15 ) which is true.
         no change. 
         
          (smallest = 5 (initial value stored) < 1 ) which is false.
          the value (1) is now stored in smallest and again compared with rest of the elements.
    3) done till the end of the array elements.
    4) finally the smallest value is obtained and stored in the varaible.
    5) smallest value returned / found. */
    
    // finding the smallest number from the given array :
   /* int array[6] = { 5 , 15 , 22 , 1 , -15 , 24 };
    
    int smallest = array[0] ; //stores first value from array.
    
    for (int i = 1 ; i < 6 ; i++)
    {
        if (smallest > array[i])
        {
            smallest = array[i];
        }
        
    }
    
    cout << "smallest value in the array : " << smallest << endl;
    */
    
    //Practice 2 : Finding the largest and smallest value in the array and returning it's "Index values".
    
    
    //using the same array : 
    int array[6] = { 5 , 15 , 22 , 10 , 15 , 24 };
    
    int smallest = array[0] ; //stores first value from array.
    int largest = array[0] ; //stores first value from array.
    int Sindex = 0;
    int Lindex = 0; //variable used to store index values.
    
    //finds both smallest and largest : 
    for (int i = 1 ; i < 6 ; i++)
    {
        if (smallest > array[i])
        {
            smallest = array[i];
            Sindex = i;         //used to store the index value of smallest value.
        }
        if (largest < array[i])
        {
            largest = array[i];
            Lindex = i;         //used to store the index value of largest value.
        }
    }
    
    cout << "smallest value in the array : " << smallest << endl;
    cout << "largest value in the array : " << largest << endl;
    
    //instead of values from the array , we have to print the index values of these values : 
    
    cout << "index value of smallest value : " << Sindex << endl;
    cout << "index value of largest value : " << Lindex << endl;
    
    
    return 0;
}