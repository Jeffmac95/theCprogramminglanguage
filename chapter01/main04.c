/* Excersize 1-8
Write a program to count blanks, tabs and newlines*/

#include <stdio.h>

int main() {
    int c, nl, t, b;
    nl = 0;
    t = 0;
    b = 0;

    while ((c = getchar() != EOF)) {
        if (c == '\n') {
            ++nl;
        }
        if (c == '\t') {
            ++t;
        }
        if (c == '\b') {
            ++b;
        }
    }
    printf("%d nl, %d t, %d b", nl, t, b);

    return 0;
}