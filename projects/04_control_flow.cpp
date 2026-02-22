// 04_control_flow.cpp
// Conditionals (if/else) and loops (for, while, do-while).

#include <iostream>

int main() {
    // -------------------------------------------------------
    // IF / ELSE IF / ELSE
    // -------------------------------------------------------

    int score;
    std::cout << "Enter your exam score (0-100): ";
    std::cin >> score;

    // Only one branch executes — the first condition that is true
    if (score >= 90) {
        std::cout << "Grade: A\n";
    } else if (score >= 80) {
        std::cout << "Grade: B\n";
    } else if (score >= 70) {
        std::cout << "Grade: C\n";
    } else if (score >= 60) {
        std::cout << "Grade: D\n";
    } else {
        std::cout << "Grade: F\n";
    }

    // -------------------------------------------------------
    // FOR LOOP — use when you know how many iterations you need
    // -------------------------------------------------------

    std::cout << "\n=== for loop: counting 1 to 5 ===\n";
    //        init    condition  update
    for (int i = 1;   i <= 5;   i++) {
        std::cout << i << " ";
    }
    std::cout << "\n";

    // Counting down
    std::cout << "Countdown: ";
    for (int i = 5; i >= 1; i--) {
        std::cout << i << " ";
    }
    std::cout << "Go!\n";

    // -------------------------------------------------------
    // WHILE LOOP — use when the number of iterations is unknown
    // -------------------------------------------------------

    std::cout << "\n=== while loop: halving until below 1 ===\n";
    double value = 100.0;
    while (value >= 1.0) {
        std::cout << value << " ";
        value /= 2.0;   // keep halving
    }
    std::cout << "\n";

    // -------------------------------------------------------
    // DO-WHILE LOOP — body always executes at least once
    // -------------------------------------------------------

    std::cout << "\n=== do-while loop: input validation ===\n";
    int guess;
    do {
        std::cout << "Enter a number between 1 and 10: ";
        std::cin >> guess;
        if (guess < 1 || guess > 10) {
            std::cout << "Out of range, try again.\n";
        }
    } while (guess < 1 || guess > 10);  // keep asking until valid

    std::cout << "You entered: " << guess << "\n";

    // -------------------------------------------------------
    // BREAK & CONTINUE
    // -------------------------------------------------------

    std::cout << "\n=== break: stop early ===\n";
    for (int i = 1; i <= 10; i++) {
        if (i == 6) break;          // exit the loop immediately
        std::cout << i << " ";
    }
    std::cout << "\n";

    std::cout << "=== continue: skip an iteration ===\n";
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) continue;   // skip even numbers
        std::cout << i << " ";
    }
    std::cout << "\n";

    return 0;
}

// Compile: g++ 04_control_flow.cpp -o 04_control_flow
// Run:     ./04_control_flow
