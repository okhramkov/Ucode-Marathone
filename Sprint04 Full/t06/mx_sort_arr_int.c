#include <stdio.h>

void mx_sort_arr_int(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int l = 0; l < size - 1; l++) {
            if (arr[l] > arr[i + 1]) {
                int tmp = arr[l];
                arr[l] = arr[i + 1];
                arr[i + 1] = tmp;
            }
        }
    }
}

int main() {
    int arr[] = {3, 44, 5, 53, 43, 0};
    mx_sort_arr_int(arr, 6);
    for (int c = 0; c < 6; c++)
        printf("%d\n", arr[c]);
    return 0;
}
