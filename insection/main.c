#include <stdio.h>
#include <stdlib.h>

void insection(int arr[] , int size)
{
    int i, key, j;
   for (i = 1; i < size; i++)
   {
       key = arr[i];
       j = i-1;
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j--;
       }
       arr[j+1] = key;
   }
}

int main()
{
    int arr[5] = {4,2,6,1,3};
    int i;
    insection(arr,5);
    for( i = 0 ; i < 5 ; i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
