void mx_printstr(const char *s);

void mx_is_positive(int i) {
    if (i > 0) {
        const char str[] = "Positive\n";
        mx_printstr(str);
    }
    else if (i < 0) {
        const char str[] = "Negative\n";
        mx_printstr(str);
    }
    else if (i == 0) {
        const char str[] = "Zero\n";
        mx_printstr(str);
    }
}
