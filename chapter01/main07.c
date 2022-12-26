/* Excersize 1-12
Write a program that prints its input one word per line */

#include <stdio.h>

#define OUT 0
#define IN 1

int main() {
    int c;
    int state;

    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c != ' ' && c != '\t' && c != '\n') {
            putchar(c);
            state = IN;
        }
        if (state) {
            putchar('\n');
        }
    }

    return 0;
}