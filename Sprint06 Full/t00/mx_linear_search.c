#include <stdio.h>
#include <string.h>
int mx_strcmp(const char *s1, const char *s2);
int mx_linear_search(char **arr, const char *s) {
    if (arr == NULL || s == NULL) {
        return -1;
    }
    for (int i = 0; arr[i]; i++) {
        if (mx_strcmp(arr[i], s) == 0) {
            return i;
        }
    }
    return -1;
}

int main()
{
    char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z", NULL};
    int i = mx_linear_search(arr, "ab");
    printf("%i", i);
}
