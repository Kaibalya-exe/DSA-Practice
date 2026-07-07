/*
Topic:
Pointers in C++

Concepts Covered:

- Pointer Basics
- Address Operator (&)
- Dereference Operator (*)
- Pointer to Pointer (**)
- NULL Pointer
- Array Pointers
- Pointer Arithmetic

Learning Notes:

This program was created while learning
the fundamentals of pointers and how memory
addresses are accessed in C++.
*/

#include <iostream>

using namespace std;

int main() 
{
    //pointers :
    
    int a = 5 ;
    int *ptr = &a ;         //Stores the address of variable 'a'
    
    //Pointer to Pointer : 
    
    int b = 10 ;
    int *ptr = &b ;         //Stores the address of variable 'b'
    int **ptr2 = &ptr ;     //Stores the address of address of variable 'ptr'
    
    //Dereferencing operator ('*') :
    //'*' ---> Helps access or dereference the value stored at a address
    
/* 
    for example : 
        Suppose,
                b = 10 ; ----> b = 100 ( Address of b )
                
                *ptr = &b ----> ptr = 100 ( Storing Address of b )
                (ptr's own address is = 200 )
                
                **ptr2 = &ptr ----> ptr2 = 200 ( Storing Address of ptr )
                (ptr2's own address is = 300 )
        
        *(&b) ===> 10 ;
        
        *(&ptr) ===> 10 : Here the address stored in the variable ptr is dereferenced thus giving the value 10 which is : *(100) = 10 ; 
        
        *(&ptr2) ===> 100 ; Here the address stored in the variable ptr is dereferenced thus giving the value 100 which is : *(200) = 100 ;
        
        **(&ptr2) ===> 10 ; Here the address stored in the variable ptr is dereferenced Twice thus giving thw value 10 which is : 
                        *[*(ptr2)] = *[*(200)] = *[100] = 10 ;
                        
*/
    
    //NULL Pointer : 
    
    int *ptr = NULL ; //This is a null pointer and can't be dereferenced if dereferenced it will give Segementation fault 
    
    //Array Pointers : 
    
    int arr[] = { 1 , 2 , 3 , 4 , 5 };
    
    cout << arr << endl ;   //Here , arr stores 0th index address.
    
    cout << *arr << endl ;  //When dereferenced it gives the value of 0th index value of the array , which in this case is 1
    
    //Array pointers are Constant
/*
    Pointer Arithmetic : Pointers can be Incremented (++) and Decremented (--)
    
    also can add or subtract inside the pointer : 
    ptr + 1 ---> 1 int (+4 bits )
    ptr + 3 ---> 3 int (+12 bits )
    
    but can not add two pointers , but can subtract.
    
    Pointers can also be used to compare with each other.
    
*/   
    return 0 ;
}