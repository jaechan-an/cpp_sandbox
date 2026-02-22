// 01_hello.cpp
// The simplest C++ program. Every C++ program starts execution at main().

#include <iostream>  // lets us use cout and cin

int main() {
    // std::cout is the standard output stream (your terminal)
    // << is the "insertion" operator — it sends data to cout
    std::cout << "Hello, World!" << std::endl;

    // endl flushes the output buffer and moves to a new line
    // "\n" also works and is slightly faster, but endl is clearer for beginners
    std::cout << "Welcome to C++!" << "\n";

    // main() returns 0 to signal the program exited successfully
    return 0;
}

// Compile: g++ 01_hello.cpp -o 01_hello
// Run:     ./01_hello
