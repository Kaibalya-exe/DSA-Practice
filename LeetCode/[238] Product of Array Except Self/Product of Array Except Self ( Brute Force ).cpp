#include <iostream>

using namespace std;

//Product of Array Except Self ( Brute Force ) :

int main()
{
    int arr[] = { 1 , 2 , 3 , 4 };
    int n = sizeof(arr) / sizeof(int) ;
    int answer[n] ; // to store answer's here in a new array 
    
    int prod ;
    
    for ( int i = 0 ; i < n ; i++ )
    {
        prod = 1 ;
        
        for ( int j = n - 1 ; j >= 0 ; j-- )
        {
            if ( arr[i] != arr[j] )
            {
                prod *= arr[j] ;
            }
        }

        answer[i] = prod ;
    }
    
    
    return 0 ;
}