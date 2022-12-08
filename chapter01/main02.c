/* Exersize 1-6
verify the expression getchar() != EOF
and print it */

#include <stdio.h>

int main() {
    printf("value: %d", getchar() != EOF);

    return 0;
}