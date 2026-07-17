#include <iostream>

using namespace std;

//Merge 2 Sorted Arrays :

int main()
{
    int arr1[] = { 1 , 2 , 3 , 0 , 0 , 0 } ;    //----> m = 3 ;
    int arr2[] = { 2 , 5 , 6 } ;                //----> n = 3 ;
    
    int x = sizeof(arr1) / sizeof(int) ;        // Original size of arr1 ;
    
    int m = 3 ;
    int n = 3 ;

    int index = 0; // ---> Index value of arr2 ;
    
    int start = 0 ;
    int end = x ;
    
    for (int i = 0 ; i < x ; i++)
    {
        if (arr1[i] == 0)
        {
            arr1[i] = arr2[index] ;
            index++ ;
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