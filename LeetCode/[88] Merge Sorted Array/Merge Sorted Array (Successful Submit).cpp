#include <iostream>

using namespace std;

int main()
{
    int arr1[] = { -1 , -1 , 0 , 0 , 0 , 0 } ;    //----> m = 4 ;
    int arr2[] = { -1 , 0 } ;                //----> n = 2 ;
    
    int x = sizeof(arr1) / sizeof(int) ;        // Original size of arr1 ;
    
    int m = 4 ;
    int n = 2 ;

    int index = 0; // ---> Index value of arr2 ;
    
    for (int i = x - 1 ; i >= 0 ; i--)
    {
        while(n != 0 )
        {
            if (arr1[i] == 0)
            {
                arr1[i] = arr2[index] ;
                index++ ;
                n-- ;
            }
            else
            {
                break ;
            }
        }
    }
    
    for(int i = 0 ; i < x ; i++)            //bubble Sort
    {
        for(int j = 0 ; j < x - i - 1 ; j++)
        {
            if (arr1[j] >= arr1[j + 1])
            {
                swap(arr1[j] , arr1[j + 1]) ;
            }
        }
    }
    
    for(int i = 0 ; i < x ; i++)
    {
        cout << arr1[i] << " " ;
    }
    
    return 0 ;
}