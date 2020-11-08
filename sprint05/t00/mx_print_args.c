#include <stdio.h>
void mx_printstr(const char *s);
void mx_printchar(char c);
void mx_printint(int n);
int mx_strlen(const char *s);

int main(int argc, char *argv[]) {
    mx_printint(argc);
    mx_printstr("\n");
    for (int i = 1; i < argc; i++) {
        mx_printstr(argv[i]);
        mx_printstr("\n");
    }
}

