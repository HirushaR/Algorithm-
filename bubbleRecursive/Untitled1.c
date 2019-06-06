 void bubbleSort(int *data, int n) {
        int i, temp;

        if (n > 0) {
                for (i = 1; i < n; i++) {
                        if (data[i - 1] > data[i]) {
                                temp = data[i];
                                data[i] = data[i - 1];
                                data[i - 1] = temp;
                        }
                }

                bubbleSort(data, n - 1);
        }

        return;
  }
