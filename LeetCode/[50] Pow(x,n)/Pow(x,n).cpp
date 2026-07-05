/*
Problem: Pow(x,n)

Approach:
Binary Exponentiation (Fast Exponentiation)

Idea:
Instead of multiplying x n times,
repeatedly square x and reduce n by half.

Example:

2^10

2^10
= (2^2)^5
= (4^2)^2 * 4
= 1024

Special Cases:
- Negative powers
- Zero power
- x = 0
- x = 1
- x = -1

Time Complexity: O(log n)
Space Complexity: O(1)

Concepts Learned:
- Binary representation
- Fast exponentiation
- Corner cases
- Negative powers

Learning Notes:
This was my first introduction to
Binary Exponentiation.
*/

#include <iostream>

using namespace std;

//POW(x^n) : 

int main()
{
    double x = 2 ;
    int n = -10 ;
    long binform = n ;
    double ans = 1 ;
    
    //Important Condition for Negative powers(n):

        if ( n < 0 )
        {
            x = 1/x ;
            binform = -binform ;
        }

        //corner cases : 
    
        if ( n == 0 ) return 1.0 ;
        if ( x == 0 ) return 0.0 ;
        if ( x == 1 ) return 1.0 ;
        if ( x == -1 && n % 2 == 0 ) return 1.0 ;
        if ( x == -1 && n % 2 != 0 ) return -1.0 ;
    
    while (binform > 0)
    {
        if(binform % 2 == 1)
        {
            ans = ans * x ;
        }
        
        x = x*x ;
        
        binform = binform / 2 ;
    }
    
    cout << ans ;
    
    return 0 ;
}


//LeetCode Solution : 

class Solution {
public:
    double myPow(double x, int n) {

        long binform = n ; 
        double ans = 1 ;

        //Important Condition for Negative powers(n):

        if ( n < 0 )
        {
            x = 1/x ;
            binform = -binform ;
        }

        //corner cases : 
    
        if ( n == 0 ) return 1.0 ;
        if ( x == 0 ) return 0.0 ;
        if ( x == 1 ) return 1.0 ;
        if ( x == -1 && n % 2 == 0 ) return 1.0 ;
        if ( x == -1 && n % 2 != 0 ) return -1.0 ;

        while ( binform > 0  )
        {
            if ( binform % 2 == 1 )
            {
                ans = ans * x ;
            }

            x = x * x ; //updating x 
            binform = binform / 2 ; //moving the binary form to next digit 
        }
        
        return ans ;

    }
};