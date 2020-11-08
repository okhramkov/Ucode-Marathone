#ifndef MY_LIB
#define MY_LIB

#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_atoi(const char *);
void mx_printchar(char);
void mx_printint(int);
int mx_strlen(const char *);
void mx_printstr(const char *);
char *mx_strcpy(char *, const char *);
int mx_strcmp(const char *, const char *);

#endif
