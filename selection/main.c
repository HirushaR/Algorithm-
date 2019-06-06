#include <stdio.h>
#include <stdlib.h>
void selection(int arr[] , int size)
{
    int i,j,tmp;
    for( i = 0 ; i < size ; i++ )
    {
        for( j = i + 1 ; j < size ; j++)
        {
            if( arr[i] > arr[j] )
            {
                tmp = arr[i] ;
                arr[i] = arr[j] ;
                arr[j] = tmp ;
            }
        }
    }
    for( i = 0 ; i < size  ; i++)
    {
        printf("%d\t",arr[i]);
    }
}

int main()
{
    int arr[5] = {3,2,6,1,4};
    selection(arr,5);
    return 0;
}
