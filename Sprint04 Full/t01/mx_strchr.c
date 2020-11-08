#include <stdio.h>

char *mx_strchr(const char *s, int c)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
        {
            return (char *) &s[i];
        }
    }
    return 0;
}

int main()
{
    char str[] = "qwertyuiop";
    char ch = 'r';
    char *ret;
    ret = mx_strchr(str, ch);
    printf("%s\n", ret);
}
