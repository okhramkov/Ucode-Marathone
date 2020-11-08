#include <stdio.h>

int mx_sum_digits(int num) {
    int i = 0;
    if(num < 0) {
        num *= -1;
    }
    while (num != 0) {
        i = i + num % 10; 
        num = num / 10;
        }
    return i;
}

int main() {
    printf("%d",mx_sum_digits(-11111111));
}
