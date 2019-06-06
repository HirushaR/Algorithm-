#include <stdio.h>
#include <stdlib.h>
int linear(int arr[],int x){

int i;
for(i=0;i<5;i++)
{
    if(x==arr[i])
    {
        return i;
    }
}
}




int main()
{
    int arr[5] = {2,4,5,1,7};
    int x= 5;
    printf("index is %d",linear(arr,x));

    return 0;
}
