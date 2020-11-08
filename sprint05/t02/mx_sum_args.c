#include <stdbool.h>
#include <stdio.h>
bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_atoi(const char *str);
void mx_printint(int n);
void mx_printchar(char c);

int main(int argc, char *argv[]) {
    int sum = 0;
    for (int i = 1; i < argc; i++) 
        sum += mx_atoi(argv[i]);
    mx_printint(sum);
    mx_printchar('\n');
}
