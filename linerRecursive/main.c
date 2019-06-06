#include <stdio.h>
#include <stdlib.h>

int linerrec(int arr[] , int first , int last , int key)
{

    if ( last < first )
    {
        return -1;
    }
    if ( arr[first] ==  key )
    {
        return first + 1;
    }
    if ( arr[last] == key )
    {
        return last + 1;
    }
    else
    {
        linerrec(arr, first + 1 , last  , key);
    }
}


int main()
{
    int arr[10] = { 1,2,3,4,5,6,7,8,};
    int key = 6;
    printf("position is %d", linerrec(arr,0,8,key));
    return 0;
}
