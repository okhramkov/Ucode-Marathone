#include <stdbool.h>
#include <stdio.h>

bool mx_is_odd(int value) {
    if(value%2==0) {
        return false;
    }
    else {
        return true;
    }
    
}

int main() {
    printf("%d", mx_is_odd(1));
}
