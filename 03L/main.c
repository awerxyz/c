#include <stdio.h>
#include "./lib/mymath.c"

int main() {
    
    printf("add(2, 3) = %.2f\n", add(2, 3).value);
    printf("subtract(5, 3) = %.2f\n", subtract(5, 3).value);
    printf("multiply(3, 7) = %.2f\n", multiply(3, 7).value);
    printf("divide(8, 4) = %.2f\n", divide(8, 4).value);
    printf("factorial(3) = %.2f\n", factorial(3).value);
    printf("power(3, 3)= %.2f\n", power(3, 3).value);
    printf("my_recursive_factorial(3)= %d\n", my_recursive_factorial(3));
    

    // SUM
    printf("sum_n(4) = %d\n", sum_n(4));
    //printf("sum_n(4) = %d\n", sum_n_result(4).value); // Doesnt work 
    

    // HARMONIC
    printf("harmonic = %.2f\n", harmonic(4));
    //printf("harmonic= %.2f\n", harmonic_result(3).value); // doesnt work

    // GCD
    printf("gcd = %d\n", gcd(20, 15));
    return 0;
}