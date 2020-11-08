#include <stdio.h>

char *mx_strchr(const char *s ,int c);

int mx_strlen(const char *s);

int mx_strncmp(const char *s1, const char *s2, int n );

char *mx_strstr(const char *s1, const char *s2) {
    int len1 = mx_strlen(s1);
    for (int i = 0; s2[i]; i++) {
        if (mx_strncmp(s1, &s2[i], len1 - 1) == 0){
            return (char *) &s2[i];
        }
    }
    return NULL;
}
