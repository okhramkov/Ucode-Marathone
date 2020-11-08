int mx_strncmp(const char *s1, const char *s2, int n) {
    int d = 0;
    for ( ; n > 0;  s1++, s2++, n--) {
        if (*s1 != *s2) {
        d = *s1 - *s2;  
        }
    }
    return d;
}
