#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool mx_isspace(char c);

bool mx_isdigit(int c);

int mx_atoi(const char *str){
    int i = 0;
    unsigned long long sum = 0;
    int res = 1;

    if (str[i] == '-') {
        res *= (-1);
        i++;
    } else if (str[i] == '+') {
        i++;
    }
    while (str[i]) {
        if (!mx_isdigit(str[i]))
            return 0;
        sum *= 10;
        sum = sum + str[i] - 48;
        i++;
        if (sum > 9223372036854775807) {
            return -1;
        }
    }
    return sum * res;
}


// int main() {
//     char str[] = "92233720368547758";
//     int i = mx_atoi(str);
//      printf("orig - %d\n", atoi(str));
//     printf("%i", i);
// }
