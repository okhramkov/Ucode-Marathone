#include<string.h>
#include<stdlib.h>
#include<stdio.h>

char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);
char *mx_strcat(char *s1, const char *s2);


char *mx_strjoin(char const *s1, char const *s2) {
    if(NULL == s1) {
        return mx_strdup(s2);
    }
    if(NULL == s2) {
        return mx_strdup(s1);
    }
    else {
        char *s = mx_strcat(mx_strdup(s1), mx_strdup(s2));
        return s;
    }
}
