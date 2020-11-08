#include<stdio.h>
#include<stdbool.h>

struct s_student {
    char *first_name;
    char *last_name;
    int age;
};


bool mx_isspace(char c);
bool mx_isdigit(int c);
int mx_atoi(const char *str);
int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char *s);
void mx_printchar(char c);
void mx_printint(int n);
void mx_printstr(const char *s);
char *mx_strcpy(char *dst, const char *src);
