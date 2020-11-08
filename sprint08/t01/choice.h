#pragma once

#include<stdio.h>
#include<stdio.h>
#include<string.h>

char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);

#define MX_SUCCESS_PHRASE "Follow me!"
#define MX_FAIL_PHRASE "Perhaps I was wrong about you, Neo."
#define MX_UNDEFINED_PHRASE "Are you sure about that?"
#define MX_RED_PILL 1
#define MX_BLUE_PILL 0

typedef char t_phrase;
