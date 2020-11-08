// #include<stdio.h>

int mx_gcd(int a, int b);

int mx_lcm(int a, int b) {
    if(a < 0)
        a *= -1;
    if(b < 0)
        b *= -1;
    if (a == 0 || b == 0)
        return 0;
    int div = mx_gcd(a, b);
    int mul = div * a / div * b / div;
    return mul;
}

// int main() {
//     printf(" 20 i 15 %d\n", mx_lcm(20, 15));
//     printf(" 12 i 16 %d\n", mx_lcm(12, 16));
//     printf(" -20 i 15 %d\n", mx_lcm(-20, 15));
//     printf(" 20 i -15 %d\n", mx_lcm(20, -15));
//     printf(" 2 i 18 %d\n", mx_lcm(2, 18));
//     printf(" 21 i 15 %d\n", mx_lcm(21, 15));
//     printf(" 22 i 15 %d\n", mx_lcm(22, 15));
//     printf(" 20 i 19 %d\n", mx_lcm(20, 19));
// }
