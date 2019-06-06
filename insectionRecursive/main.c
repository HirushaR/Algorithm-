#include <stdio.h>
#include <stdlib.h>

void insertionSort(int arr[], int i, int n)
{
	int value = arr[i];
	int j = i;


	while (j > 0 && arr[j - 1] > value)
	{
		arr[j] = arr[j - 1];
		j--;
	}

	arr[j] = value;

	if (i + 1 <= n) {
		insertionSort(arr, i + 1, n);
	}
}

int main()
{
     int arr[5] = {4,2,6,1,3};
    int i;
    insertionSort(arr,1,5);
    for( i = 0 ; i < 5 ; i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
