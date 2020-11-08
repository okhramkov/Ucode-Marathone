#include<stdio.h>

int mx_mid(int a, int b, int c) {
    if(a >= c && a <= b) {
        return a;
    }
    else if(a >= b && a <= c) {
        return a;
    }
    else if(b >= a && b <= c) {
        return b;
    }
    else if(b >= c && b <= a) {
        return b;
    }
    else if(c >= a && c <= b) {
        return c;
    }
    else {
        return c;
    }
}

int main() {
   printf ("5 1610 : %d \n", mx_mid(5, 16, 10));
   printf ("5 6 6 : %d \n", mx_mid(5, 6, 6));
   printf ("-5 -2 -7 : %d \n", mx_mid(-5, -2, -7));
   printf ("-2 -5 -7 : %d \n", mx_mid(-2, -5, -7));
   printf ("5 2 3 : %d \n", mx_mid(5, 2, 3));
   printf ("5 5 3 : %d \n", mx_mid(5, 5, 3));
   printf ("2 2 3 : %d \n", mx_mid(2, 2, 3));
   printf ("-5 -2 -2 : %d \n", mx_mid(-5, -2, -2));
 }
