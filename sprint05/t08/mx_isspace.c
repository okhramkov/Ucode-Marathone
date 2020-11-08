#include <stdbool.h>

bool mx_isspace(char c) {

    if (c == ' ' || c == '\n' || c == '\t' || c == '\r' || c == '\v' || c == '\f' ) {
        return true;
    }
    else {
        return false;
    }
}
