#include<string.h>
#include <stdlib.h>
#include<stdio.h>

int *mx_copy_int_arr(const int *src, int size) {
    int *copy = (int *) malloc(size*sizeof(int));

    if(size < 0) {
        return NULL;
    }
    if(src == NULL) {
        return NULL;
    }
    for(int i = 0; i < size; i++) {
        copy[i] = src[i];

    }
    return copy;
}

// int main() {
//     int s[3] = {1, 1, 3};
//     int *r = {0};
//     r = mx_copy_int_arr(s, 3);
//     for(int i = 0; i != 3; i++)
//         printf("%d", r[i]);     
// }
