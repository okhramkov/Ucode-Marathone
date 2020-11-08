#include<string.h>
#include <stdlib.h>
#include<stdio.h>

void mx_strdel(char **str) {
    if (str) {
        for (int i = 0; str[i]; i++) {
            str[i] = NULL;
        }
    }
    free(str);
}
