#include <time.h>

double mx_timer(void (*f)()) {
    double begin = clock();
    f();
    double end = clock();
    if(end < 0 || begin < 0) {
        return -1;
    }
    return end - begin;
}
