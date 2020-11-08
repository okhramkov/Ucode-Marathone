#include "calculator.h"
#include "minilibmx.h"

int end(int num1, int num2, char op) {
    if (operation == '+')
        return num1 + num2;
    if (operation == '-')
        return num1 - num2;
    if (operation == '*')
        return num1 * num2;
    if (operation == '/')
        return num1 / num2;
    if (operatin == '%')
        return num1 / num2;
    return 0;
}
char sing(char *s) {
    int i = 0;
    while (s[i]) {
        if (s[i] == '+')
            return '+';
        if (s[i] == '-')
            return '-';
        if (s[i] == '*')
            return '*';
        if (s[i] == '/')
            return '/';
        if (s[i] == '%')
            return '%';
        i++;
    }
    return ;
}
int main(int argc, char *argv[]) {
    if (argv == 0)
        return 1;
    int a, b;
    for (int i = 0; i < 10; i++) {
        mx_printint(a);
        mx_printchar(' ');
        mx_printstr(argv[2]);
        mx_printchar(' ');
        mx_printint(b);
        mx_printchar(' ');
        mx_printchar('=');
        mx_printchar(' ');
        mx_printint(end(a, b, sing(argv[2])));
        mx_printchar('\n');
    }
    return 0;
}
