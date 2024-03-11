#include "tap.c"
#include "../lib/mymath.c"

int main() {
    
    ok(add(2, 3).error == '0', "add test");
    ok(subtract(5, 3).error == '0', "subtract test");
    ok(multiply(3, 7).error == '0', "multiply test");
    ok(divide(8, 4).error == '0', "divide test");
    ok(divide(8, 0).error == '1', "divide test when dividing by 0");
    ok(factorial(3).error == '0', "factorial test");
    ok(factorial(-3).error == '1', "factorial test of negative number");
    ok(power(3, 3).error == '0', "power test");
    ok(my_factorial(3).error == '0', "my_factorial test");
    

    // SUM
    ok(sum_n_result(4).error == '0', "sum_n positive test");
    ok(sum_n_result(-1).error == '1', "sum_n negative test");

    // HARMONIC
    ok(harmonic_result(4).error == '0', "harmonic test");
    ok(harmonic_result(0).error == '0', "harmonic test 2");
    ok(harmonic_result(-2).error == '1', "harmonic test 3");

    // GCD
    done_testing();
}