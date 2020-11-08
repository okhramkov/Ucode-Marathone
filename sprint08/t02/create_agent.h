#pragma once

#include<stdio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);

typedef struct s_agent 
{
    char *name;
    int power;
    int strength;
}              t_agent;
