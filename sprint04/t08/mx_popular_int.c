int mx_popular_int(const int *arr, int size) {
    int pop = 0;
    for (int i = 0; i < size ; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j+1]) {
                pop = arr[i];
                size = j;
            }
        }
    }
    return pop;
}
