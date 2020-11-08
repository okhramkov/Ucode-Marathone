#include <stdbool.h>

void mx_sort(int *arr, int size, bool (*f)(int, int)) {
    int temp;

    for (int i = 0; i < size; ++i) {
        for (int j = 1; j < size - i; ++j) {
            if (f(arr[j - 1], arr[j])) {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}
