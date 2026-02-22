// 03_operators_ex.cpp — Exercises: Operators & expressions
//
// Compile: g++ 03_operators_ex.cpp -o 03_operators_ex
// Run:     ./03_operators_ex

#include <iostream>

int main() {

    // ---------------------------------------------------------
    // Exercise 1
    // Ask the user for two integers a and b.
    // Print each of: a+b, a-b, a*b, a/b, a%b
    //
    // Expected output (for inputs 10 and 3):
    //   10 + 3 = 13
    //   10 - 3 = 7
    //   10 * 3 = 30
    //   10 / 3 = 3
    //   10 % 3 = 1
    // ---------------------------------------------------------



    // ---------------------------------------------------------
    // Exercise 2
    // Ask the user for a and b again (or reuse them).
    // Compute and print the result of a / b as a decimal.
    // Hint: use static_cast<double>(...)
    //
    // Expected output (for inputs 10 and 3):
    //   10 / 3 (decimal) = 3.33333
    // ---------------------------------------------------------



    // ---------------------------------------------------------
    // Exercise 3
    // Ask the user for an integer. Using only %, determine
    // whether it is divisible by 3 and print the result.
    //
    // Expected output (for input 9):
    //   Is 9 divisible by 3? 1
    // Expected output (for input 7):
    //   Is 7 divisible by 3? 0
    // ---------------------------------------------------------



    // ---------------------------------------------------------
    // Exercise 4
    // Start with n = 50. Apply the following steps in order
    // using compound assignment operators, printing n after each:
    //   1. Add 10
    //   2. Multiply by 2
    //   3. Subtract 30
    //   4. Divide by 5
    //
    // Expected output:
    //   After += 10: 60
    //   After *= 2:  120
    //   After -= 30: 90
    //   After /= 5:  18
    // ---------------------------------------------------------



    return 0;
}
