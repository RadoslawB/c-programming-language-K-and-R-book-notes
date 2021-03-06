#include <stdio.h>

float fahr_to_celcius(float fahr) {
    return (5.0 / 9.0) * (fahr - 32);
}


main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    while (fahr <= upper) {
        celsius = fahr_to_celcius(fahr);
        printf("Fahr: %3.0f\tcelsius: %3.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
