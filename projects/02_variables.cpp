// 02_variables.cpp
// Variables, basic data types, and reading input from the user.

#include <iostream>
#include <string>   // needed for std::string

int main() {
    // --- Declaring and initialising variables ---

    int age = 20;               // whole numbers (negative and positive)
    double height = 1.75;       // decimal numbers (higher precision than float)
    char grade = 'A';           // a single character — note single quotes
    bool isStudent = true;      // true or false only
    std::string name = "Caleb"; // a sequence of characters — note double quotes

    // Printing each variable
    std::cout << "Name:       " << name      << "\n";
    std::cout << "Age:        " << age       << "\n";
    std::cout << "Height:     " << height    << " m\n";
    std::cout << "Grade:      " << grade     << "\n";
    std::cout << "Is student? " << isStudent << "\n";  // prints 1 (true) or 0 (false)

    // --- Reading input from the user ---

    std::string city;
    std::cout << "\nWhich city are you from? ";
    std::cin >> city;   // reads one word (stops at whitespace)
    std::cout << "Hello from " << city << "!\n";

    int year;
    std::cout << "What year did you start university? ";
    std::cin >> year;
    std::cout << "You started in " << year << ".\n";

    return 0;
}

// Compile: g++ 02_variables.cpp -o 02_variables
// Run:     ./02_variables
