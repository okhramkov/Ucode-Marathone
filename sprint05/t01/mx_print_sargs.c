#include <stdio.h>
void mx_printstr(const char *s);
void mx_printchar(char c);
int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char *s);

static void mx_bubbleSort(char **str, int number)
{
    for (int i = 0; i < number - 1; i++)
    {
        for (int j = 0; j < number - 1 - i; j++)
        {
            if (mx_strcmp(str[j], str[j + 1]) > 0)
            {
                char *tmp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = tmp;
            }
        }
    }
}
int main(int argc, char *argv[])
{
    mx_bubbleSort(argv, argc);
    if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            mx_printstr(argv[i]);
            mx_printchar('\n');
        }
    }
    return 0;
}
