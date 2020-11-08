#include <stdio.h>

void mx_swap_char(char *s1, char *s2) {
    char str = *s1;
    *s1 = *s2;
    *s2 = str;
}

// int main (void) {
//     char str[] = "123456789";
//     mx_swap_char(&str[0], &str[8]);
//     printf("%s", str);
// }
