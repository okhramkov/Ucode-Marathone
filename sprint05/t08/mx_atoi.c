#include <stdbool.h>

bool mx_isspace(char c);

bool mx_isdigit(int c);

int mx_atoi(const char *str){
    int i = 0;
    unsigned long long sum = 0;
    int res = 1;
    while(mx_isspace(str[i]));
    if (str[i] == '-') {
        res *= (-1);
        i++;
    }
    while (mx_isdigit(str[i]) && str[i]) {
        sum *= 10;
        sum = sum + str[i] - 48;
        i++;
        if (sum > 9223372036854775807) {
            return -1;
        }
    }
    return sum * res;
}
