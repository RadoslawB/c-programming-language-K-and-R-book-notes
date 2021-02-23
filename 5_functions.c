#include <stdio.h>

int power(int base, int n) {
    int p;

    for (p=1; n >=1; --n) {
        p = p * base;
    }

    return p;
}

int main() {

    int i;

    for(i=1; i<5; ++i) {
        printf("%d^%d: %d\n",i,i, power(i,i));
    }
}
