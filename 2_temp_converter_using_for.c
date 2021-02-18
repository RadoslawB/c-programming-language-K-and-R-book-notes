#include <stdio.h>

float fahr_to_celcius(float fahr) {
    return (5.0 / 9.0) * (fahr - 32);
}


#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
    int fahr;

    for (fahr = UPPER; fahr >=LOWER; fahr = fahr - STEP) {
        printf("Fahr: %3d\tcelsius: %3.1f\n", fahr, fahr_to_celcius(fahr));
    }
}
