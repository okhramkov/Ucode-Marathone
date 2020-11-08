//#include <stdio.h>
#include <string.h>

int mx_strlen(const char *s);

int mx_insertion_sort(char **arr, int size) {
    if(size == 0 || arr == NULL)
        return 0;
    int i, j; 
    char *key;
    int count = 0;
    for (i = 1; i < size; i++) { 
        key = arr[i]; 
        j = i - 1; 
        while (j >= 0 && mx_strlen(arr[j]) > mx_strlen(key)) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
            count++;
        } 
        arr[j + 1] = key; 
    }
    return count;
}

//  int main () {
//     char *arr[] = {"12aaaaaaaaaa", "11aaaaaaaaa", "13aaaaaaaaaaa", "5aaaa", "6aaaaa"};
//     int size = 5;
//     printf("%d\n", mx_insertion_sort(arr, size));
//     for (int i = 0; i < size; i++) {
//         printf("%s\n", arr[i]);
//     }
//  }
