#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void doSomething(int n, double* x, double* y){
    if (n < 1) return;

    double* arr = (double*)malloc(n * sizeof(double));

    srand(time(NULL));
    int lowerLimit = 1, upperLimit = 20;
    
    for (int i = 0; i < n; ++i) {
        arr[i] = lowerLimit + rand() % upperLimit;
    }

    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }

    *x = sum;
    double avg = sum / (double)n;
    *y = avg;
}

int main() {
    printf("Hello Git - A verzio!\n");
    return 0;
}
