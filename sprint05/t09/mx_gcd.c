// #include<stdio.h>

int mx_gcd(int a, int b) {
    // while (a != b) {
    //     if (a > b) {
    //         int tmp = a;
    //         a = b;
    //         b = tmp;
    //     }
    //     b = b - a;
    // }
    // return a;
    if(a < 0)
        a *= -1;
    if(b < 0)
        b *= -1;
    if (a == 0 || b == 0)
        return 0;
    if(a > b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    if(a != b) {
        a = mx_gcd(a, b - a);
    }
    return a;
}

// int main() {
//     printf(" 20 i 15 %d\n", mx_gcd(20, 15));
//     printf(" 12 i 16 %d\n", mx_gcd(12, 16));
//     printf(" -20 i 15 %d\n", mx_gcd(-20, 15));
//     printf(" 20 i -15 %d\n", mx_gcd(20, -15));
//     printf(" 2 i 18 %d\n", mx_gcd(2, 18));
//     printf(" 21 i 15 %d\n", mx_gcd(21, 15));
//     printf(" 22 i 15 %d\n", mx_gcd(22, 15));
//     printf(" 20 i 19 %d\n", mx_gcd(20, 19));
// }
