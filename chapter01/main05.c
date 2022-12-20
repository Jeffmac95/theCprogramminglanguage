/* Excersize 1-9
Write a program to copy its input to its output, replacing each string with 1 or more blanks by a single blank */

#include <stdio.h>

int main() {
    int c, blank;
    blank = ' ';

    while ((c = getchar() != EOF)) {
        if (c != blank) {
            putchar(c);
        }
    }

    return 0;
}