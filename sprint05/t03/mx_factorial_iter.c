// #include<stdio.h>

int mx_factorial_iter(int n) {
    if(n < 0 || n > 12) {
        return 0;
    }
    int  sum = 1;
    for (int  i = 1; i < n + 1; i++){
        sum = sum * i;
    }
    return sum;
}

// int main () {
//     printf("%d", mx_factorial_iter(12));
// }
