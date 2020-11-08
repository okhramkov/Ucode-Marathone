#include <stdbool.h>
#include <stdio.h>

bool mx_isspace(char c) {

    if (c == ' ' || c == '\n' || c == '\t' || c == '\r' || c == '\v' || c == '\f' ) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    printf("%i", mx_isspace('t'));
}
