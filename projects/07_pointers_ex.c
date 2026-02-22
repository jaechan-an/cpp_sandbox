/* 07_pointers_ex.c — Exercises: Pointers
 *
 * Compile: gcc 07_pointers_ex.c -o 07_pointers_ex
 * Run:     ./07_pointers_ex
 */

#include <stdio.h>
#include <stdlib.h>

/* -------------------------------------------------------
 * Exercise 3 — write this function
 * Receives a pointer to an int and sets the value to 0.
 * ------------------------------------------------------- */
/* void zeroOut(int *p) { ... } */


/* -------------------------------------------------------
 * Exercise 4 — write this function
 * Receives three ints via pointers.
 * Sets *out to the sum of *a and *b.
 * ------------------------------------------------------- */
/* void addToPointer(int *a, int *b, int *out) { ... } */


/* -------------------------------------------------------
 * Exercise 5 — write this function
 * Receives a pointer to an int.
 * If the value is negative, flip it to positive (absolute value).
 * ------------------------------------------------------- */
/* void makePositive(int *p) { ... } */


int main(void) {

    /* -------------------------------------------------------
     * Exercise 1 — reading and writing through pointers
     *
     * a) Declare an int x = 25.
     * b) Declare a pointer p that points to x.
     * c) Print the value of x using the pointer (not x directly).
     * d) Use the pointer to change x to 100.
     * e) Print x to confirm the change.
     * ------------------------------------------------------- */



    /* -------------------------------------------------------
     * Exercise 2 — pointer arithmetic
     *
     * Given the array below:
     *   int arr[] = {2, 4, 6, 8, 10};
     *
     * a) Declare a pointer to the first element.
     * b) Print the third element using pointer arithmetic (not arr[2]).
     * c) Advance the pointer to the last element and print it.
     * d) Print the entire array using ONLY pointer arithmetic
     *    (no index notation allowed).
     * ------------------------------------------------------- */



    /* -------------------------------------------------------
     * Exercise 3 — zeroOut function (defined above main)
     *
     * a) Declare int n = 42.
     * b) Print n, then call zeroOut(&n), then print n again.
     *
     * Expected output:
     *   Before: 42
     *   After:  0
     * ------------------------------------------------------- */



    /* -------------------------------------------------------
     * Exercise 4 — addToPointer function (defined above main)
     *
     * a) Declare int a = 15, b = 7, result = 0.
     * b) Call addToPointer passing addresses of all three.
     * c) Print result.
     *
     * Expected output:
     *   15 + 7 = 22
     * ------------------------------------------------------- */



    /* -------------------------------------------------------
     * Exercise 5 — makePositive function (defined above main)
     *
     * a) Declare int vals[] = {3, -7, 0, -2, 5}.
     * b) Loop through the array and call makePositive on each element.
     * c) Print the array before and after.
     *
     * Expected output:
     *   Before: 3 -7 0 -2 5
     *   After:  3 7 0 2 5
     * ------------------------------------------------------- */



    /* -------------------------------------------------------
     * Exercise 6 — dynamic allocation
     *
     * a) Ask the user for a number n.
     * b) Use malloc to allocate an array of n ints.
     * c) Fill it with the squares of 1..n  (1, 4, 9, 16, ...)
     * d) Print the array.
     * e) Free the memory.
     *
     * Expected output (for n=5):
     *   1 4 9 16 25
     * ------------------------------------------------------- */



    return 0;
}
