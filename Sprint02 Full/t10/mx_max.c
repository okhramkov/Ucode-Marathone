#include<stdio.h>

int mx_max(int a, int b, int c) 
{
        if(a >= b && a >= c) {
        return a;
    }
    else if (b >= a && b >= c) {
        return b;
    }
    else {
        return c;
     }
    
    
}

int main() {
    printf ("a B c : %d \n", mx_max('a', 'B', 'c'));
   printf ("-5 -2 3 : %d \n", mx_max(-5, -2, 3));
   printf ("-2 -5 3 : %d \n", mx_max(-2, -5, 3));
   printf ("-5 -2 -7 : %d \n", mx_max(-5, -2, -7));
   printf ("-2 -5 -7 : %d \n", mx_max(-2, -5, -7));
   printf ("5 2 3 : %d \n", mx_max(5, 2, 3));
   printf ("5 5 3 : %d \n", mx_max(5, 5, 3));
   printf ("2 2 3 : %d \n", mx_max(2, 2, 3));
   printf ("-5 -2 -2 : %d \n", mx_max(-5, -2, -2));
 }
