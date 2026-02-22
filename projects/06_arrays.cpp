// 06_arrays.cpp
// Fixed-size arrays and std::vector (a resizable array).

#include <iostream>
#include <vector>   // needed for std::vector

int main() {
    // -------------------------------------------------------
    // FIXED-SIZE ARRAYS
    // Size must be known at compile time and cannot change.
    // -------------------------------------------------------

    // Declare an array of 5 ints, initialised with values
    int scores[5] = {85, 92, 78, 95, 60};

    // Access elements by index — IMPORTANT: indices start at 0
    std::cout << "First score:  " << scores[0] << "\n";  // 85
    std::cout << "Last score:   " << scores[4] << "\n";  // 60

    // Modify an element
    scores[2] = 80;

    // Iterate over the array with a for loop
    std::cout << "\nAll scores: ";
    for (int i = 0; i < 5; i++) {
        std::cout << scores[i] << " ";
    }
    std::cout << "\n";

    // Range-based for loop (cleaner when you don't need the index)
    std::cout << "Same scores (range-for): ";
    for (int s : scores) {
        std::cout << s << " ";
    }
    std::cout << "\n";

    // Compute the average
    int total = 0;
    for (int s : scores) {
        total += s;
    }
    double avg = static_cast<double>(total) / 5;
    std::cout << "Average: " << avg << "\n";

    // -------------------------------------------------------
    // std::vector — a resizable array (preferred in modern C++)
    // -------------------------------------------------------

    std::cout << "\n=== std::vector ===\n";

    // Create an empty vector of ints
    std::vector<int> nums;

    // Add elements to the end with push_back()
    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);

    std::cout << "Size: " << nums.size() << "\n";   // 3
    std::cout << "First element: " << nums[0] << "\n";  // 10

    // Remove the last element
    nums.pop_back();
    std::cout << "After pop_back, size: " << nums.size() << "\n";  // 2

    // Initialise a vector with values directly
    std::vector<std::string> fruits = {"apple", "banana", "cherry"};

    std::cout << "\nFruits:\n";
    for (int i = 0; i < fruits.size(); i++) {
        std::cout << "  [" << i << "] " << fruits[i] << "\n";
    }

    // --- Interactive example: build a vector from user input ---
    std::cout << "\nEnter 4 temperatures (press Enter after each):\n";
    std::vector<double> temps;
    for (int i = 0; i < 4; i++) {
        double t;
        std::cin >> t;
        temps.push_back(t);
    }

    double sum = 0;
    for (double t : temps) sum += t;
    std::cout << "Average temperature: " << sum / temps.size() << "\n";

    return 0;
}

// Compile: g++ 06_arrays.cpp -o 06_arrays
// Run:     ./06_arrays
