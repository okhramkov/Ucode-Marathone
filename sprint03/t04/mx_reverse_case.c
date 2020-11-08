int mx_islower(int c);
int mx_isupper(int c);
int mx_tolower(int c);
int mx_toupper(int c);

void mx_reverse_case(char *s) {
    int i = 0;
    while(s[i] != '\0') {
        if(mx_isupper(s[i]) == 1) {
            s[i] = mx_tolower(s[i]);
            i++;
        }
        else if(mx_islower(s[i]) == 1) {
            s[i] = mx_toupper(s[i]);
            i++;
        }
        else {
            i++;
        }
    }
}
