#include <unistd.h>

void mx_printchar(char c)
{
    write(1, &c, 1);
}

// int main(void) {
//     mx_printchar('g');
//     return 0;
// }
