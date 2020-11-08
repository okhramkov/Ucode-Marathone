#include"get_address.h"

char *mx_get_address(void *p) {
    char *temp = mx_nbr_to_hex((unsigned long) p);
    char *s = mx_strnew(mx_strlen(temp) + 2);

    s = mx_strcpy(s, "0x");
    for(int i = 2; i < (mx_strlen(temp) + 2); i++)
        s[i] = temp[i - 2];
    free(temp);
    return s;
}

    int main(void) {
        char *mem;
        char c[] = "345678hbd  r5";
        mem = mx_get_address(c);
        printf("%s", mem);
        //system("leaks -q a.out");
    }
