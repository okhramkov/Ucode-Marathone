#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
bool mx_isdigit(int c);
void mx_printchar(char c);
void mx_printint(int n);
int mx_strlen(const char *s);
bool mx_isspace(char c);
int mx_atoi(const char *str);
void mx_mult_table(int x, int y){
    if(x <= 0 || y <= 0 || x > 9 || y > 9)
        return;
    if(x < y)
        for (int i = x; i <= y; i++) {
            for (int j = x; j <= y; j++) {
                mx_printint(i * j);
                 if (j != y) {
                 mx_printchar('\t');
                }
            }
            mx_printchar('\n');
        }
    if(x >= y)
        for (int i = y; i <= x; i++) {
            for (int j = y; j <= x; j++) {
                mx_printint(i * j);
                 if (j != x) {
                 mx_printchar('\t');
                }
            }
            mx_printchar('\n');
        }
}
int main(int argc, char *argv[]) {
    int x = mx_atoi(argv[2]);
    int y = mx_atoi(argv[1]);
    argc = argc * 1;
    mx_mult_table(x, y);
    return 0;
}
