/* 08_arrays_1d_ex.c — Exercises: Single-dimensional arrays
 *
 * Compile: gcc 08_arrays_1d_ex.c -o 08_arrays_1d_ex
 * Run:     ./08_arrays_1d_ex
 */

#include <stdio.h>
#include <stdlib.h>

/* -------------------------------------------------------
 * Exercise 3 — write this function
 * Counts how many elements in arr equal target.
 * ------------------------------------------------------- */
/* int countOccurrences(int *arr, int n, int target) { ... } */


/* -------------------------------------------------------
 * Exercise 4 — write this function
 * Shifts every element one position to the right.
 * The last element wraps around to index 0.
 * e.g. {1,2,3,4,5} → {5,1,2,3,4}
 * ------------------------------------------------------- */
/* void rotateRight(int *arr, int n) { ... } */


/* -------------------------------------------------------
 * Exercise 5 — write this function
 * Returns 1 if arr is sorted in ascending order, 0 otherwise.
 * ------------------------------------------------------- */
/* int isSorted(int *arr, int n) { ... } */


int main(void) {

    /* -------------------------------------------------------
     * Exercise 1 — basics
     *
     * a) Declare int scores[] = {72, 88, 55, 91, 63, 79, 84}.
     * b) Print each element with its index.
     * c) Compute and print the average.
     * d) Find and print the minimum value.
     *
     * Expected output:
     *   [0] 72
     *   [1] 88
     *   ...
     *   Average: 76.0
     *   Min: 55
     * ------------------------------------------------------- */



    /* -------------------------------------------------------
     * Exercise 2 — pointer vs index notation
     *
     * Given: int nums[] = {5, 10, 15, 20, 25};
     *
     * a) Print every element using *(nums + i) notation — no [].
     * b) Use a pointer variable p to walk the array and
     *    print only the elements at even indices (0, 2, 4).
     *
     * Expected output:
     *   All:        5 10 15 20 25
     *   Even index: 5 15 25
     * ------------------------------------------------------- */



    /* -------------------------------------------------------
     * Exercise 3 — countOccurrences (defined above main)
     *
     * Given: int data[] = {3, 7, 3, 1, 3, 9, 3};
     * Count how many times 3 appears.
     *
     * Expected output:
     *   3 appears 4 times.
     * ------------------------------------------------------- */



    /* -------------------------------------------------------
     * Exercise 4 — rotateRight (defined above main)
     *
     * Given: int arr[] = {1, 2, 3, 4, 5};
     * Rotate right once and print the result.
     * Then rotate two more times and print again.
     *
     * Expected output:
     *   After 1 rotation:  5 1 2 3 4
     *   After 3 rotations: 3 4 5 1 2
     * ------------------------------------------------------- */



    /* -------------------------------------------------------
     * Exercise 5 — isSorted (defined above main)
     *
     * Test isSorted on these arrays and print the result:
     *   a = {1, 3, 5, 7, 9}   → sorted
     *   b = {1, 3, 2, 7, 9}   → not sorted
     *
     * Expected output:
     *   a is sorted: 1
     *   b is sorted: 0
     * ------------------------------------------------------- */



    /* -------------------------------------------------------
     * Exercise 6 — dynamic array from user input
     *
     * a) Ask the user for n.
     * b) malloc an array of n ints.
     * c) Read n integers from the user.
     * d) Print the array in reverse order using pointer arithmetic.
     * e) Free the memory.
     * ------------------------------------------------------- */



    return 0;
}
