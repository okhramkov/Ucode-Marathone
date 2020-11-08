//#include<stdio.h>

int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search (char **arr, int size, const char *s, int *count) {
    int low = 0;
    int high = size - 1;
    int middle = 0;
    while (low <= high) {
        (*count)++;
        middle = (low + high) / 2;
        if (mx_strcmp(s, arr[middle]) == 0)
            return middle;
        else if (s < arr[middle])
            high = middle - 1;
        else
            low = middle + 1;
    }
    (*count) = 0;
    return -1;
}

// int main() {
//     char *arr_str[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
//     int count = 0;
//     int i = mx_binary_search(arr_str, 6, "ab", &count);
//     printf("The return from func %d\n", i);
//     printf("The return from func %d\n", count);
//     //printf("The count %d\n", count);
// }
