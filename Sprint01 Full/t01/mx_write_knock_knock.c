#include <unistd.h>
#include <string.h>

void mx_write_knock_knock(void) {
  char s[] = "Follow the white rabbit.\nKnock, knock, Neo.\n";
  write(1, s, strlen(s));
}

int main() {
    mx_write_knock_knock();
}
