#include <stdio.h>
#include <stdlib.h>

void bubble(int array[] , int n)
{
    int c,d,swap;
  for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1])
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
  printf("Sorted list in ascending order:\n");

  for (c = 0; c < n; c++)
     printf("%d\n", array[c]);

}

int main()
{
    int arr[10] = {2,1,4,6,3};

        bubble(arr,5);


    return 0;
}
