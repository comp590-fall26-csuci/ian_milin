#include <stdio.h>
#include "fibonacci.h"
#include "utest.h"

UTEST_STATE();

struct Fixture{
	int index; 
};

UTEST_I_SETUP(Fixture) {
	utest_fixture->index = utest_index; 
}

UTEST_I_TEARDOWN(Fixture) {}

UTEST_I(Fixture, fibonacci_1_10, 10) {
    static const int expected[] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};

    int myIndex = utest_fixture->index + 1; 

    EXPECT_EQ(expected[utest_fixture->index], fibonacci(myIndex));
}

int main(int argc, const char *const argv[]) {
    int term = 10;
    printf("The %dth Fibonacci number is %d\n", term, fibonacci(term));
    printf("The theoretical Golden Ratio is %f\n", golden_ratio_approx(term));
    return utest_main(argc, argv);
}
