int cbinsearch(int* arr, int size, int value){ 
    int first = 0;
    int last = size - 1;
    int search = 0;
for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int number = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = number;
            }
        }
    }
    while (first <= last) {
        int mid = first + (last - first) / 2;
        if (arr[mid] == value) {
            search = search + 1;
            int k = 1;
            while ((arr[mid +k])== value) {
                search = search + 1;
                k++;  
            }
            k = 1;
            while ((arr[mid - k]) == value) {
                search = search + 1;
                k++;
            }
        }

        if (arr[mid] < value)
            first = mid + 1;
        else last = mid - 1;

    }
 }
