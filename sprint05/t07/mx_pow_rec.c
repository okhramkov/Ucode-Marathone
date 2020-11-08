// #include<stdio.h>

double mx_pow_rec(double n, unsigned int pow) {
    unsigned int i = pow;
    if(pow == 0) {
        return 1;
    }
    if(pow == 1) {
        return n;
    }
    if (i != 1) {
        n *= mx_pow_rec(n, i - 1);
        return n;
    }
    else {
        return n;
    }
    
}

// int main() {
//     printf("5^4 %f\n", mx_pow_rec(5, 4));
// }
