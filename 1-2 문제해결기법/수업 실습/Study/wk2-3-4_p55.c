#include <stdio.h>
int main() {
    char *p;
    char s[81] = "He drinks coke each day.";
    for (p = s+10; *p != '\0'; p++) {
        if (*p == 'c') *p = 'C';
        if (*p == 'd') *p = 'D';
        if (*p == 'e') *p = 'E';
        if (*p == ' ') *p = '\n';
    }
    printf("%s\n", s);
}