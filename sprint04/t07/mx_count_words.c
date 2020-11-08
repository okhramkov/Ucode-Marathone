#include <stdio.h>

int mx_count_words(const char *str, char delimiter) {
    int count = 0;
    int temp = 0;
    int i;
    if (*str == NULL)
        return -1;
    for(i = 0; str[i]; i++) {
        if (str[i] != delimiter)
            temp = 1;
        if (str[i] == delimiter && temp != 0) {
            count++;
            temp = 0;
        }
    }
    if (str[ i - 1] != delimiter)
        count++;
    return count;
}
