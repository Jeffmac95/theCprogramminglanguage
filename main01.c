/* Exersize 1-5. 
temp convert(in reverse order) with a for loop*/

#include <stdio.h>

/* main() {
    int fahr;

    for (fahr = 0; fahr >= 300; fahr + 20) {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
} */

int main() {
    int fahr;

    for (fahr = 300; fahr >= 0; fahr - 20) {
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}