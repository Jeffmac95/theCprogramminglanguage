/* Exersizes 1-3 and 1-4
temp convert with while loop(fahr to celc then celc to fahr)*/

#include <stdio.h>

/* main() {

    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("Fahreinheit   Celsius\n");

    while(fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %15.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
} */

main() {
    float celsius, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;

    printf("Celsius   Fahreinheit\n");

    while(celsius <= upper) {
        fahr = (celsius * 9.0/5.0) + 32.0;
        printf("%3.0f %15.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    
    return 0;
}