// 05_functions_ex.cpp — Exercises: Functions
//
// Write each function above main(), then call it from main().
//
// Compile: g++ 05_functions_ex.cpp -o 05_functions_ex
// Run:     ./05_functions_ex

#include <iostream>

// ---------------------------------------------------------
// Exercise 1
// Write a function  int cube(int x)
// that returns x raised to the power of 3.
//
// Expected calls in main():
//   cube(2)  → 8
//   cube(5)  → 125
// ---------------------------------------------------------

// YOUR FUNCTION HERE


// ---------------------------------------------------------
// Exercise 2
// Write a function  double celsiusToFahrenheit(double c)
// that converts Celsius to Fahrenheit.
// Formula: F = (C * 9.0 / 5.0) + 32
//
// Expected calls in main():
//   celsiusToFahrenheit(0)   → 32
//   celsiusToFahrenheit(100) → 212
// ---------------------------------------------------------

// YOUR FUNCTION HERE


// ---------------------------------------------------------
// Exercise 3
// Write a function  int max(int a, int b)
// that returns whichever of a or b is larger.
// (Do not use std::max — write the logic yourself.)
//
// Expected calls in main():
//   max(4, 9)  → 9
//   max(7, 3)  → 7
// ---------------------------------------------------------

// YOUR FUNCTION HERE


// ---------------------------------------------------------
// Exercise 4
// Write a void function  void printStars(int n)
// that prints n stars on a single line, then a newline.
//
// Expected call in main():
//   printStars(5) → *****
// ---------------------------------------------------------

// YOUR FUNCTION HERE


// ---------------------------------------------------------
// Exercise 5 — putting it together
// Write a function  bool isPrime(int n)
// that returns true if n is a prime number, false otherwise.
// Hint: a number is prime if nothing from 2 to n-1 divides it.
//
// Expected calls in main():
//   isPrime(2)  → 1
//   isPrime(7)  → 1
//   isPrime(9)  → 0
//   isPrime(1)  → 0
// ---------------------------------------------------------

// YOUR FUNCTION HERE


int main() {

    // --- Exercise 1 ---
    // Call cube() with 2 and 5 and print the results.


    // --- Exercise 2 ---
    // Ask the user for a temperature in Celsius.
    // Print the Fahrenheit equivalent using celsiusToFahrenheit().


    // --- Exercise 3 ---
    // Ask the user for two integers.
    // Print the larger one using your max() function.


    // --- Exercise 4 ---
    // Ask the user for a number n.
    // Call printStars(n) to print n stars.


    // --- Exercise 5 ---
    // Print all prime numbers from 1 to 50 using isPrime().


    return 0;
}
