void mx_printchar(char c);

void mx_str_separate(const char *str, char delim) { 
    int i = 0;

    while(str[i] != '\0') {
        if(str[i] == delim) {
            if(str[i] != str[i+1]) {
                mx_printchar('\n');
                i++;
            }
            else
                i++;
        }
        else {
            mx_printchar(str[i]);
            i++;
        }
    }
}
