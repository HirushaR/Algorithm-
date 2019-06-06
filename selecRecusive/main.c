#include <stdio.h>
#include <stdlib.h>

int selct(int arr[] , int i , int j , int size ,int bol)
{
    int temp;
    if( i < size -1)
    {
        if(bol)
        {
            j = i+1;
        }

        if( j < size)
        {
            if( arr[i] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp ;
            }
            selct(arr,i,j+1,size,0);
        }
        selct(arr,i+1,j,size,1);
    }
}

int main()
{
   int arr[5] = {2,4,1,3,6};
   selct(arr,0,0,5,1);
   int i ;
   for(i = 0 ; i <5 ; i++)
   {
       printf("%d \t",arr[i]);
   }
    return 0;
}
