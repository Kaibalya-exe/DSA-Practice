/*
 * Topic: C++ STL - Stack
 *
 * Description:
 * Demonstrates stack creation, insertion, top-element access, removal,
 * traversal by popping, temporary-stack storage, size checking, and swapping.
 *
 * Concepts Covered:
 * - std::stack
 * - LIFO (Last In, First Out)
 * - push(), top(), and pop()
 * - empty() and size()
 * - Using a temporary stack to preserve popped values
 * - swap() to exchange two stacks
 *
 * Algorithm:
 * Demonstrates stack operations and transfers elements between stacks.
 * No standalone DSA problem-solving algorithm is implemented.
 *
 * Learning Objective:
 * Understand restricted stack access, LIFO ordering, and how popping
 * changes the contents of a stack.
 *
 * Time Complexity:
 * push(), pop(), top(), empty(), and size() are O(1).
 * Printing all elements by repeatedly popping takes O(n).
 * swap() exchanges stack contents according to the underlying container's
 * swap complexity.
 */

#include <iostream>
#include <stack>

using namespace std ;

int main()
{
    //Stacks : 
    //"Last in , First out" ;
    
    //Creating a Stack :
    stack<int> s ; 
    
    //Adding elements in the stack : 
    
    s.push(1) ;
    s.push(2) ;
    s.push(3) ;
    s.push(4) ;
    s.push(5) ;
    
    //Printing the values of a stack :
    
    while(!s.empty())
    {
        cout << s.top() << endl ; 
        
        s.pop() ;
    }
    
    cout << endl ;
    
    //Output :
    /*          5
                4
                3
                2
                1
    */
    
    //We get this output because , in stack elements are pushed back in this order : 
    // 1 -> 2 -> 3 -> 4 -> 5 ;
    //Therefore , 5 stays on top and gets printed out first ; 
    
    
    //Note : 
            //We can not directly access values in the stack as it has a order 
            //To get that order we must get the top value , delete or remove the current top ,
            //Most element and then access the next element which would be the next , 
            //Top element. 
            
            //Therefore if we want to use a value of a stack without losing them ,
            //We can store the top most value in a temp stack.
            
    //Creating a temp stack , to store values : 
    
    stack<int> temp ;
    
    stack<int> r ;      //Original stack for storing initial values ;
    
    r.push(5) ;
    r.push(4) ;
    r.push(3) ;
    r.push(2) ;
    r.push(1) ;
    
    //Storing while accessing values : 
    
    while(!r.empty())
    {
        cout << r.top() << endl ;
        
        //After accessing the top most value ,
        //We store it in temp stack ;
        
        temp.push(r.top()) ;
        
        //After storing we can delete/remove the top most value in original stack ;
        //so that we can access the next value in original stack ;
        
        r.pop() ;
    }
    
    cout << endl ;
    
    //Printing the stored value from temp stack ;
    
    while(!temp.empty())
    {
        cout << temp.top() << endl ;
        temp.pop() ;
    }
    
    cout << endl ;
    
    //Output : 
    
    /*          5
                4
                3
                2
                1
    */
    
    //Check the stack size :
    cout << r.size() << endl ;
    
    //Output : 0 , because all elements were popped while printing.
    
    cout << endl ;

    //Swaping stack values :
    
    stack<int> a ;
    stack<int> b ;
    
    //Stack a values : 
    a.push(5) ;
    a.push(4) ;
    a.push(3) ;
    a.push(2) ;
    a.push(1) ;
    
    //Stack b values :
    b.push(10) ;
    b.push(9) ;
    b.push(8) ;
    b.push(7) ;
    b.push(6) ;
    
    //Printing Stack a values : 
    cout << "Stack a elements , Before Swap : " << endl ;
    
    while(!a.empty())
    {
        cout << a.top() << endl ;
        a.pop() ;
    }
    
    cout << endl ;
    
    //Printing Stack b values : 
    cout << "Stack b elements , Before Swap : " << endl ;
    
    while(!b.empty())
    {
        cout << b.top() << endl ;
        b.pop() ;
    }
    
    cout << endl ;
    
    //Stack a values : 
    a.push(5) ;
    a.push(4) ;
    a.push(3) ;
    a.push(2) ;
    a.push(1) ;
    
    //Stack b values :
    b.push(10) ;
    b.push(9) ;
    b.push(8) ;
    b.push(7) ;
    b.push(6) ;
    
    
    //Swaping : 
    a.swap(b) ;
    
    //Printing Stack a values : 
    cout << "Stack a elements , After Swap : " << endl ;
    
    while(!a.empty())
    {
        cout << a.top() << endl ;
        a.pop() ;
    }
    
    cout << endl ;
    
    //Printing Stack b values : 
    cout << "Stack b elements ,After Swap : " << endl ;
    
    while(!b.empty())
    {
        cout << b.top() << endl ;
        b.pop() ;
    }
    
    cout << endl ;
    
    
    return 0 ;
}