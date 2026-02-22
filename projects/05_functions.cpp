// 05_functions.cpp
// Defining and calling functions — the building blocks of structured programs.

#include <iostream>

// -------------------------------------------------------
// FUNCTION DECLARATION (prototype)
// Tells the compiler the function exists before main() sees it.
// Format:  return_type  name(parameter_type param, ...);
// -------------------------------------------------------

int    square(int x);
int    add(int a, int b);
double average(double a, double b);
bool   isEven(int n);
void   printLine(int length);   // void means "returns nothing"

// -------------------------------------------------------
// MAIN — calls the functions defined below
// -------------------------------------------------------

int main() {
    // Calling square()
    std::cout << "square(4)    = " << square(4)    << "\n";  // 16
    std::cout << "square(9)    = " << square(9)    << "\n";  // 81

    // Calling add()
    std::cout << "add(3, 7)    = " << add(3, 7)    << "\n";  // 10

    // Calling average()
    std::cout << "average(5,9) = " << average(5, 9) << "\n"; // 7.0

    // Calling isEven()
    std::cout << "isEven(4)    = " << isEven(4)    << "\n";  // 1 (true)
    std::cout << "isEven(7)    = " << isEven(7)    << "\n";  // 0 (false)

    // Calling a void function — no return value to print
    printLine(20);

    // Functions can be used inside expressions
    int bigger = add(square(2), square(3));   // 4 + 9
    std::cout << "square(2) + square(3) = " << bigger << "\n";  // 13

    // --- Interactive example ---
    printLine(20);
    int n;
    std::cout << "Enter a number to square: ";
    std::cin >> n;
    std::cout << n << " squared is " << square(n) << "\n";

    return 0;
}

// -------------------------------------------------------
// FUNCTION DEFINITIONS
// The actual implementation — can appear after main() with prototypes above.
// -------------------------------------------------------

// Returns x multiplied by itself
int square(int x) {
    return x * x;
}

// Returns the sum of two integers
int add(int a, int b) {
    return a + b;
}

// Returns the mean of two doubles
double average(double a, double b) {
    return (a + b) / 2.0;
}

// Returns true if n is divisible by 2, false otherwise
bool isEven(int n) {
    return n % 2 == 0;
}

// Prints a horizontal line of dashes — returns nothing (void)
void printLine(int length) {
    for (int i = 0; i < length; i++) {
        std::cout << "-";
    }
    std::cout << "\n";
}

// Compile: g++ 05_functions.cpp -o 05_functions
// Run:     ./05_functions
