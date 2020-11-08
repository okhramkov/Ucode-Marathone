#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

bool mx_isspace(char c);
char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
void mx_strdel(char **str);
bool mx_isspace(char c);
char *mx_strtrim(const char *str);

static void finish(char *tmp, char *str) {
	for (; *tmp; tmp++) {
        if (mx_isspace(*tmp)) {
	    	*str++ = 32;
		    while (mx_isspace(*(tmp + 1)))
			    tmp++;
	    }
	    else
		*str++ = *tmp;
    }
}
char *mx_del_extra_whitespaces(const char *str) {
    int spaces = 0;
    char *tmp;
    char *res;
    if (!(tmp = mx_strtrim(str)))
        return 0;
    for (int i = 0; tmp[i]; ++i)
        if (mx_isspace(tmp[i]))
            for (; mx_isspace(tmp[i + 1]); ++i)
                spaces++;
    if (!(res = mx_strnew(mx_strlen(tmp) - spaces + 1)))
        return 0;
    finish(tmp, res);
    mx_strdel(&tmp);
    return res;
}

// int main(){
//     char *s = "\f   My name... \t     is \n  Neo\t\n";
//     printf("%s",mx_del_extra_whitespaces(s));
// }
