#include <stdbool.h>
// #include <stdio.h>

bool mx_is_prime(int num);

double mx_pow(double n, unsigned int pow);

bool mx_is_mersenne(int n) {
    if (!mx_is_prime(n)) 
        return false;
    for (int i = 0; n >= mx_pow(2, i) - 1; i++)
        if (n == mx_pow(2, i) - 1)
            return true;
    return false;
}

    // int main(void) {
    //     printf("Is mersenne? \n");
    //     printf("%d \n", mx_is_mersenne(2047));
    //     printf("%d \n", mx_is_mersenne(7));
    //     printf("%d \n", mx_is_mersenne(31));
    //     printf("%d \n", mx_is_mersenne(127));

    // }
