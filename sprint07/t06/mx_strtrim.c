#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

bool mx_isspace(char c);
char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
void mx_strdel(char **str);
bool mx_isspace(char c);

char *mx_strtrim(const char *str) {
    int i = 0;
    int j = 0;
    char *temp = mx_strnew(mx_strlen(str));
    while (str[i] != '\0') {
        if(str[i] == ' ' && !mx_isspace(str[i-1])){
           temp[j] = str[i];
            j++;
            i++;
        }
        else if(mx_isspace(str[i])!='\0'){
            i++;
        }
        else {
            temp[j] = str[i];
            j++;
            i++;
        }
    }
    return temp;
}

// int main(){
//     char *s = "\f   My name... is Neo\t\n";
//     printf("%s",mx_strtrim(s));
// }
