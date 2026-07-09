#include <iostream> 

using namespace std;

//Peak Index in a Mountain Array :

int main()
{               //0 , 1 , 2 , 3 , 4 , 5
    int arr[] = { 0 , 3 , 8 , 9 , 5 , 2 };
    int n = sizeof(arr) / sizeof(int) ;
    
    int start = 0 ; 
    int end = n - 1 ;
    int peak ;
    
    while ( start <= end )
    {
        int mid = start + ( end - start ) / 2 ;
        peak = mid ;
        
        if ( peak < mid )
        {
            peak = mid ;
            cout << peak ;
            return 0 ;
        }
        
        if ( arr[mid] > arr[mid - 1] )   //Going up to peak :
        {
            start = mid + 1 ;
        }
        else                            //Coming Down from peak :
        {
            end = mid - 1 ;
        }

        
    }
    
    
    
    return 0 ; 
}