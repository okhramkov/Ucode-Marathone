#include<string.h>
#include <stdlib.h>
#include<stdio.h>

int mx_count_words(const char *str, char delimiter);
void mx_strdel(char **str);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(const int size);

char **mx_strsplit(char const *s, char c) {
    int size = mx_count_words(s, c);
    char *arr[size];
    char *temp = mx_strnew(size);
    int i = 0;
    int j = 0;
    while(i < size) {
        if (s[i] == c) {
            i++;
        }
        else {
            temp = s[i];
            i++;
            *arr[j] = temp;
            j++;
            mx_strdel(temp);
        }
    }
}

// int main () {
//     char *s = {"**Good bye,**Mr.*Anderson.****"};
//     char **arr = mx_strsplit(s, '*');
//     printf("%s", arr);
// }
