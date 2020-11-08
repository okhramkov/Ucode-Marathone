void mx_printchar(char c);
void mx_printstr(const char *s);
char *mx_strchr(const char *s, int c);
int mx_strlen(const char *s);

int main(int argc, char *argv[]) {
    if (!argc)
        return 0;
    char *tmp;
    char *s = argv[0];
    while ((tmp = mx_strchr(s, '/')))
        s = ++tmp;
    mx_printstr(s);
    mx_printchar('\n');
    return 0;
}
