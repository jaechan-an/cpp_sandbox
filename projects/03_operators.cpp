// 03_operators.cpp
// Arithmetic, comparison, and logical operators.

#include <iostream>

int main() {
    // --- Arithmetic operators ---

    int a = 17, b = 5;

    std::cout << "=== Arithmetic ===\n";
    std::cout << a << " + " << b << " = " << a + b << "\n";  // 22
    std::cout << a << " - " << b << " = " << a - b << "\n";  // 12
    std::cout << a << " * " << b << " = " << a * b << "\n";  // 85
    std::cout << a << " / " << b << " = " << a / b << "\n";  // 3  (integer division — decimal is dropped!)
    std::cout << a << " % " << b << " = " << a % b << "\n";  // 2  (remainder)

    // To get a decimal result, at least one operand must be a double
    double result = static_cast<double>(a) / b;
    std::cout << a << " / " << b << " (decimal) = " << result << "\n";  // 3.4

    // --- Comparison operators — always return true (1) or false (0) ---

    std::cout << "\n=== Comparison ===\n";
    std::cout << a << " == " << b << " : " << (a == b) << "\n";  // 0
    std::cout << a << " != " << b << " : " << (a != b) << "\n";  // 1
    std::cout << a << " >  " << b << " : " << (a >  b) << "\n";  // 1
    std::cout << a << " <  " << b << " : " << (a <  b) << "\n";  // 0
    std::cout << a << " >= " << b << " : " << (a >= b) << "\n";  // 1
    std::cout << a << " <= " << b << " : " << (a <= b) << "\n";  // 0

    // --- Logical operators — combine true/false values ---

    bool x = true, y = false;

    std::cout << "\n=== Logical ===\n";
    std::cout << "true && false = " << (x && y) << "\n";  // AND: both must be true → 0
    std::cout << "true || false = " << (x || y) << "\n";  // OR:  at least one true  → 1
    std::cout << "!true         = " << (!x)      << "\n";  // NOT: flips the value    → 0

    // --- Compound assignment (shorthand) ---

    int n = 10;
    std::cout << "\n=== Compound assignment (starting at " << n << ") ===\n";
    n += 3;  std::cout << "n += 3 → " << n << "\n";  // 13
    n -= 2;  std::cout << "n -= 2 → " << n << "\n";  // 11
    n *= 2;  std::cout << "n *= 2 → " << n << "\n";  // 22
    n /= 4;  std::cout << "n /= 4 → " << n << "\n";  // 5
    n++;     std::cout << "n++    → " << n << "\n";  // 6  (increment by 1)
    n--;     std::cout << "n--    → " << n << "\n";  // 5  (decrement by 1)

    return 0;
}

// Compile: g++ 03_operators.cpp -o 03_operators
// Run:     ./03_operators
