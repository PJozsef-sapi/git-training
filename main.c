#include <stdio.h>

int main() {
   
    int n = 10;
    double *x, *y;

    doSomething(n, x, y);

    printf("%f%f", &x, &y);

    return 0;
}
