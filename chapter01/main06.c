/* Excersize 1-10
Write a program to copy its input to its output,
replacing each tab by \t, each backspace by \b and each backslash by \\ */

#include <stdio.h>

int main() {
    int c;

    while ((c = getchar() != EOF)) {
        if (c == '\t') {
            putchar('\\t');
        }
        if (c == '\b') {
            putchar('\\b');
        }
        if (c == '\\') {
            putchar('\\\\');
        }
        else {
            putchar(c);
        }
    }

    return 0;
}