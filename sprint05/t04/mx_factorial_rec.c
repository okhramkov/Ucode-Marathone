// #include<stdio.h>

int mx_factorial_rec(int n) {
    if (n == 0)
        return 1;
    if(n < 0 || n > 12)
        return 0;
    int i = n;
    if(i != 1) {
        n *= mx_factorial_rec(i - 1);
        return n;
    }
    else
    {
        return n;
    }
    
}
//  int main() {
//     printf("-1! %d\n", mx_factorial_rec(-1));
//     printf("0! %d\n", mx_factorial_rec(0));
//     printf("1! %d\n", mx_factorial_rec(1));
//     printf("2! %d\n", mx_factorial_rec(2));
//     printf("3! %d\n", mx_factorial_rec(3));
//     printf("4! %d\n", mx_factorial_rec(4));
//     printf("5! %d\n", mx_factorial_rec(5));
//     printf("6! %d\n", mx_factorial_rec(6));
//     printf("7! %d\n", mx_factorial_rec(7));
//     printf("8! %d\n", mx_factorial_rec(8));
//     printf("9! %d\n", mx_factorial_rec(9));
//     printf("10! %d\n", mx_factorial_rec(10));
//     printf("11! %d\n", mx_factorial_rec(11));
//     printf("12! %d\n", mx_factorial_rec(12));
//     printf("13! %d\n", mx_factorial_rec(13));
//  }
