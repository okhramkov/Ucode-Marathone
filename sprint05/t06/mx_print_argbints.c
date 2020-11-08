#include <stdbool.h>

bool mx_isdigit(int c);
void mx_printint(int n);
void mx_printchar(char c);
bool mx_isspace(char c);
int mx_atoi(const char *str);

int main(int argc, char *argv[]) {
    int n, c, k = 0;
    for (int i = 1; i < argc; i++) {
       n = mx_atoi(argv[i]);
        for (c = 31; c >= 0; c--) {
         k = n >> c;
        if (k & 1)
         mx_printint(1);
        else
         mx_printint(0);
         }
      mx_printchar('\n');
    }
  return 0;
}

