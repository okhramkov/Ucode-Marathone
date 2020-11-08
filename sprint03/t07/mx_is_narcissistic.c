#include <stdbool.h>

double mx_pow(double n, unsigned int pow);

bool mx_is_narcissistic(int num) {
    int len = 0;
    int i = 0;
    int sum = 0;
    int fullnum = num;
    int numm[10];
    while (fullnum != 0) {
        numm[i] = fullnum % 10;
        fullnum = fullnum/10;
        len = ++i;
    }
    for(int i = 0; i < len; i++) {
        sum +=mx_pow(numm[i], len);
    }
    if (sum == num) {
        return true;
    }
    else {
        return false;
    }
}
