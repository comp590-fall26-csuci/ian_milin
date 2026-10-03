#include <stdio.h>
#include "fibonacci.h"
#include "utest.h"

UTEST_STATE();

struct MyTestIndexedFixture{};

UTEST_I_SETUP(MyTestIndexedFixture) {}

UTEST_I_TEARDOWN(MyTestIndexedFixture) {}

UTEST_I(MyTestIndexedFixture, fibonacci_1_10, 10) {
    static const int expected[] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};

    int myIndex = utest_index + 1; 

    EXPECT_EQ(expected[utest_index], fibonacci(myIndex));
}

int main(void) {
    int term = 10;
    printf("The %dth Fibonacci number is %d\n", term, fibonacci(term));
    printf("The theoretical Golden Ratio is %f\n", golden_ratio_approx(term));
    return utest_main(void);
}
