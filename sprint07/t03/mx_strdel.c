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

// int main() {
//     char **s = NULL;
//     int size = 3;
//     s = (char **)malloc((size + 1)*sizeof(char *));
//     s[0] = NULL;
//     s[1] = "lol";
//     printf("%s\n", s[0]);
//     mx_strdel(s);
//     printf("%s\n", s[0]);
// }
