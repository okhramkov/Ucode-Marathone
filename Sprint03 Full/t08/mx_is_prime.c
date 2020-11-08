#include <stdbool.h>
// #include <stdio.h>

bool mx_is_prime(int num) {
    if (num == -2147483648) {
        return false;
    }
    if (num < 0) {
        num *= -1;
    }
    for (int i = 2; i < num; i++)
        if (num % i == 0)
            return false;
    return true;
}

// int main(void) {
//     printf("Is prime? \n");
//     printf("1 is %d \n", mx_is_prime(1));
//     printf("0 is %d \n", mx_is_prime(0));
//     printf("2 is %d \n", mx_is_prime(2));
//     printf("4 is %d \n", mx_is_prime(4));
//     printf("5 is %d \n", mx_is_prime(5));
//     printf("6 is %d \n", mx_is_prime(6));
//     printf("13 is %d \n", mx_is_prime(13));
//     printf("35 is %d \n", mx_is_prime(35));
//     printf("42 is %d \n", mx_is_prime(42));
//     printf("43 is %d \n", mx_is_prime(43));
//     printf("-49 is %d \n", mx_is_prime(-49));
//     printf("-13 is %d \n", mx_is_prime(-13));
//     printf("-2147483648 is %d \n", mx_is_prime(-2147483648));
// }
