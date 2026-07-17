#include <iostream>

using namespace std;

int main()
{
    int arr1[] = { -1 , 0 , 0 , 3 , 3 , 3 , 0 , 0 , 0 } ;    //----> m = 6 ;
    int arr2[] = { 1 , 2 , 2 } ;                //----> n = 3 ;
    
    int x = sizeof(arr1) / sizeof(int) ;        // Original size of arr1 ;
    
    int m = 3 ;
    int n = 3 ;

    int index = 0; // ---> Index value of arr2 ;
    
    for (int i = x - 1 ; i >= 0 ; i--)
    {
        if (arr1[i] == 0)
        {
            arr1[i] = arr2[index] ;
            index++ ;
        }
        else
        {
            break ;
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