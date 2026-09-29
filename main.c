#include <stdio.h>
#include "fibonacci.h"

int main(void) {
    int term = 10;
    printf("The %dth Fibonacci number is %d\n", term, fibonacci(term));
    printf("The theoretical Golden Ratio is %f\n", golden_ratio_approx(term));
    return 0;
}
