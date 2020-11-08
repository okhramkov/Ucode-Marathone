int mx_strlen(const char *s);

void mx_swap_char(char *s1, char *s2);

void mx_str_reverse(char *s)
{
    int i = 0;
    int len = mx_strlen(s) - 1;
    while (i != len)
    {
        mx_swap_char(&s[i], &s[len]);
        i++;
        len--;
    }
}
