#pragma once

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <stdbool.h>

bool mx_isdigit(int c);
bool mx_islower(int c);
bool mx_isupper(int c);
bool mx_isalpha(int c);
char *mx_nbr_to_hex(unsigned long nbr);
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

