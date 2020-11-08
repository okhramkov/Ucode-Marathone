#include <stdio.h>

int mx_strlen(const char *s)
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
        ;
    return i;
    
    // int len = 0;
    // while (*s != '\0')
    // {
    //     s++;
    //     len++;
    // }
    // return len;
    
    // int len = 0;
    // while (s[len] != '\0')
    // {
    //     len++;
    // }
    // return len;
}

int main()
{
    const char *x = "76543";

    printf("%d", mx_strlen(x));
}
