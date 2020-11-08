// #include<stdio.h>

void mx_arr_rotate(int *arr, int size, int shift) {
    int s;
    if(shift > size) {
        s = shift % size;
    }
    else {
        s = shift;
    }
    if (s < 0)
    s *= -1;
    for(int i = 0; i < s; i++) {
        if(shift > 0) {
            int tmp = arr[size - 1];
            for(int i = size - 1; i > 0; --i)
                arr[i] = arr[i - 1];
            arr[0] = tmp;
        }
        if(shift < 0) {
            int tmp = arr[0];
            for(int i = 0; i < size - 1; ++i)
                arr[i] = arr[i+1];
            arr[size - 1] = tmp;
        }
    }

}

// int main () {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = 5;
//     int shift = 52;
//     mx_arr_rotate(arr, size, shift);
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d\t", arr[i]);
//     }
// }
