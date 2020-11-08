#include<string.h>
#include <stdlib.h>
#include<stdio.h>
//#include <malloc/malloc.h>

char *mx_strcat(char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
void mx_strdel(char **str);
char *mx_strdup(const char *str);
char *mx_strjoin(char const *s1, char const *s2);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

char *mx_concat_words(char **words) {
    char *arr;
    char *temp;

    if(*words == NULL)
        return NULL;
    for(int i = 0; words[i] != NULL; i++){
        temp = mx_strdup(words[i]);
        arr = mx_strjoin(arr, temp);
        if(words[i + 1] != NULL) {
            temp = mx_strdup(" ");
            arr = mx_strjoin(arr, temp); 
        }
    }
    
    return arr;
}

//  int main () {
//     char *words[4] = {"Free", "your", "mind.", NULL};
//     char *str = mx_concat_words(words);
//     printf("%s", str);
//     system("leaks -q a.out");
//  }
