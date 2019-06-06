#include <stdio.h>
#include <stdlib.h>

void bubble(int data[], int n)
{
    int i, temp ;
     if (n > 0) {
                for (i = 1; i < n; i++) {
                        if (data[i - 1] > data[i]) {
                                temp = data[i];
                                data[i] = data[i - 1];
                                data[i - 1] = temp;
                        }
                }

                bubble(data, n - 1);
        }

        return;

}

int main()
{
    int arr[10] = {2,1,5,3,4};
    int i ;
    bubble(arr,5);
      for (i = 0; i < 5; i++) {

                printf("%d ", arr[i]);

        }



}
