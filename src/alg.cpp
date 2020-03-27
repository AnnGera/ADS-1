int cbinsearch(int* arr, int size, int value) {
    int first = 0;
    int last = size - 1;
    int search = 0;
    while (first <= last) {
        int mid = first + (last - first) / 2;
        if (arr[mid] == value) {
            search = search + 1;
            int k = 1;
            while ((arr[mid + k]) == value) {
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
    return search;
}
