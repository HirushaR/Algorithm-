#include <stdio.h>
#include <stdlib.h>

int binary(int arr[],int size,int key)
{
    int first = 0 , last = size-1 , mid , found = 0 , i ;
    for(i = 0 ; i < size -1 ; i++)
    {
        mid = (first + last)/2;
        if(arr[mid] == key)
        {
            return mid + 1 ;
        }
        else if (arr[mid] > key)
        {
            last = mid-1;
        }
        else
        {
            first = mid +1 ;
        }
    }
}



int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8};
    int key = 1 ;
    printf("position is %d",binary(arr,8,key));

    return 0;
}
