//#include <stdio.h>

void mx_printchar(char c);

void mx_only_printable(void)
{
    int i;
    for (i = 126; i > 32; i--) {
        mx_printchar(i);
    }
    mx_printchar('\n');
}

// int main()
// {
//     mx_only_printable();
// }
