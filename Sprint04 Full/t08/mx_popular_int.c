#include<stdio.h>

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

int main () {
    int arr[] = {1, 2, 1, 2, 3};
    int size = 5;
    printf("%d", mx_popular_int(arr, size));
}
