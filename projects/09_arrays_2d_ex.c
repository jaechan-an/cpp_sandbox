/* 09_arrays_2d_ex.c — Exercises: Multi-dimensional arrays
 *
 * Compile: gcc 09_arrays_2d_ex.c -o 09_arrays_2d_ex
 * Run:     ./09_arrays_2d_ex
 */

#include <stdio.h>
#include <stdlib.h>

/* -------------------------------------------------------
 * Exercise 3 — write this function
 * Returns the largest value in a rows×cols 2D array.
 * ------------------------------------------------------- */
/* int maxIn2D(int rows, int cols, int m[rows][cols]) { ... } */


/* -------------------------------------------------------
 * Exercise 4 — write this function
 * Multiplies every element in the matrix by scalar.
 * Modifies the array in-place.
 * ------------------------------------------------------- */
/* void scalarMultiply(int rows, int cols, int m[rows][cols], int scalar) { ... } */


/* -------------------------------------------------------
 * Exercise 5 — write this function
 * Adds two matrices a and b, stores result in c.
 * All three are rows×cols.
 * ------------------------------------------------------- */
/* void addMatrices(int rows, int cols,
                    int a[rows][cols],
                    int b[rows][cols],
                    int c[rows][cols]) { ... } */


int main(void) {

    /* -------------------------------------------------------
     * Exercise 1 — declaration and indexing
     *
     * Declare and initialise this 3×3 matrix:
     *   1 2 3
     *   4 5 6
     *   7 8 9
     *
     * a) Print the entire matrix using nested loops.
     * b) Print the value on the main diagonal (where row == col).
     * c) Compute the sum of the entire matrix.
     *
     * Expected output:
     *   Matrix:
     *     1  2  3
     *     4  5  6
     *     7  8  9
     *   Diagonal: 1 5 9
     *   Sum: 45
     * ------------------------------------------------------- */



    /* -------------------------------------------------------
     * Exercise 2 — memory layout
     *
     * Using the same 3×3 matrix from Exercise 1:
     * a) Print the address of each element to confirm they are
     *    contiguous in memory.
     * b) Use a single int* pointer to walk through all 9 elements
     *    and print them on one line.
     *
     * Expected output (addresses will differ):
     *   &m[0][0] = 0x...
     *   &m[0][1] = 0x...  (4 bytes higher)
     *   ...
     *   Flat: 1 2 3 4 5 6 7 8 9
     * ------------------------------------------------------- */



    /* -------------------------------------------------------
     * Exercise 3 — maxIn2D (defined above main)
     *
     * Given:
     *   int grid[3][4] = {
     *       { 3, 12,  7,  2},
     *       {15,  6,  9,  1},
     *       { 4, 11,  8, 13}
     *   };
     * Print the maximum value using maxIn2D.
     *
     * Expected output:
     *   Max value: 15
     * ------------------------------------------------------- */



    /* -------------------------------------------------------
     * Exercise 4 — scalarMultiply (defined above main)
     *
     * Declare:
     *   int m[2][3] = {{1, 2, 3}, {4, 5, 6}};
     * a) Print m.
     * b) Call scalarMultiply(2, 3, m, 3).
     * c) Print m again.
     *
     * Expected output:
     *   Before:  1  2  3 |  4  5  6
     *   After:   3  6  9 | 12 15 18
     * ------------------------------------------------------- */



    /* -------------------------------------------------------
     * Exercise 5 — addMatrices (defined above main)
     *
     * Declare:
     *   int a[2][2] = {{1, 2}, {3, 4}};
     *   int b[2][2] = {{5, 6}, {7, 8}};
     *   int c[2][2] = {0};
     *
     * Call addMatrices(2, 2, a, b, c) and print c.
     *
     * Expected output:
     *    6  8
     *   10 12
     * ------------------------------------------------------- */



    /* -------------------------------------------------------
     * Exercise 6 — dynamic 2D array
     *
     * a) Ask the user for rows and cols.
     * b) Allocate a dynamic 2D array (array of pointers).
     * c) Ask the user to enter rows*cols integers row by row.
     * d) Print the matrix.
     * e) Print the sum of each column.
     * f) Free all allocated memory.
     *
     * Example (3×3 input: 1 2 3 / 4 5 6 / 7 8 9):
     *   Matrix:
     *     1  2  3
     *     4  5  6
     *     7  8  9
     *   Column sums: 12 15 18
     * ------------------------------------------------------- */



    return 0;
}
