// #include<stdio.h>
// #include<string.h>

int mx_strcmp(const char *s1, const char *s2)
{
    while( *s1 != '\0' && *s2 != '\0' && *s1 == *s2 )
    {
        s1++;
        s2++;
    }

    if(s1 == s2)
    {
        return 0;
    }
    else {
        return *s1 - *s2;
    }
}

// int main() {
//    printf("%d\n", mx_strcmp("ZaZ", "zaZ"));
//    char str1[] = "ZaZ";
//    char str2[] = "zaZ";
//     printf("%d\n", strcmp(str1, str2));
//     printf("%d\n", mx_strcmp(str1, str2));
// }
