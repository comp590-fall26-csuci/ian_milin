#include <math.h>
#include "fibonacci.h"

int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

/* Uses the square root function to calculate an analytical approximation */
double golden_ratio_approx(int n) {
    double phi = (1.0 + sqrt(5.0)) / 2.0;
    return phi;
}
