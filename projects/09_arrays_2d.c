/* 09_arrays_2d.c — Multi-dimensional arrays in C
 *
 * A 2D array is stored in ROW-MAJOR order — all of row 0 first,
 * then all of row 1, etc. It is one contiguous block of memory.
 *
 *   int m[3][4]  →  3 rows, 4 columns, 12 ints total in a line.
 *
 * Compile: gcc 09_arrays_2d.c -o 09_arrays_2d
 * Run:     ./09_arrays_2d
 */

#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 4

/* forward declarations */
void print2D(int rows, int cols, int m[rows][cols]);
void transpose(int rows, int cols, int src[rows][cols], int dst[cols][rows]);

int main(void) {

    /* -------------------------------------------------------
     * 1. DECLARATION AND INITIALISATION
     * ------------------------------------------------------- */

    printf("=== Declaration ===\n");

    /* Fully initialised */
    int grid[3][4] = {
        {1,  2,  3,  4},   /* row 0 */
        {5,  6,  7,  8},   /* row 1 */
        {9, 10, 11, 12}    /* row 2 */
    };

    /* Access: grid[row][col] */
    printf("grid[0][0] = %d\n", grid[0][0]);   /* 1  */
    printf("grid[1][2] = %d\n", grid[1][2]);   /* 7  */
    printf("grid[2][3] = %d\n", grid[2][3]);   /* 12 */

    /* -------------------------------------------------------
     * 2. MEMORY LAYOUT — row-major order
     * All elements are contiguous in memory.
     * grid[r][c] lives at the same address as *(grid[0] + r*COLS + c)
     * ------------------------------------------------------- */

    printf("\n=== Memory layout ===\n");
    printf("Addresses show contiguous storage:\n");
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 4; c++) {
            printf("  grid[%d][%d] = %2d  @ %p\n", r, c, grid[r][c], &grid[r][c]);
        }
    }

    /* Treating it as a flat 1D pointer */
    int *flat = &grid[0][0];
    printf("\nFlat walk through all 12 elements: ");
    for (int i = 0; i < 12; i++) {
        printf("%d ", flat[i]);
    }
    printf("\n");

    /* -------------------------------------------------------
     * 3. NESTED LOOPS — the standard way to iterate a 2D array
     * ------------------------------------------------------- */

    printf("\n=== Nested loop iteration ===\n");
    print2D(3, 4, grid);

    /* Compute sum of entire array */
    int total = 0;
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 4; c++) {
            total += grid[r][c];
        }
    }
    printf("Sum of all elements: %d\n", total);   /* 78 */

    /* Sum of each row */
    printf("Row sums: ");
    for (int r = 0; r < 3; r++) {
        int rowSum = 0;
        for (int c = 0; c < 4; c++) rowSum += grid[r][c];
        printf("%d ", rowSum);
    }
    printf("\n");

    /* -------------------------------------------------------
     * 4. TRANSPOSE
     * Swap rows and columns: result[c][r] = src[r][c]
     * A 3×4 matrix becomes 4×3.
     * ------------------------------------------------------- */

    printf("\n=== Transpose (3x4 → 4x3) ===\n");
    int t[4][3];
    transpose(3, 4, grid, t);
    printf("Original 3x4:\n");  print2D(3, 4, grid);
    printf("Transposed 4x3:\n"); print2D(4, 3, t);

    /* -------------------------------------------------------
     * 5. DYNAMIC 2D ARRAY
     * Use an array of pointers — each pointer is one row.
     * Allows rows of different lengths (jagged arrays) but
     * typically used for runtime-sized rectangular arrays.
     * ------------------------------------------------------- */

    printf("\n=== Dynamic 2D array ===\n");
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    /* Allocate array of row-pointers */
    int **mat = (int **) malloc(rows * sizeof(int *));
    for (int r = 0; r < rows; r++) {
        mat[r] = (int *) malloc(cols * sizeof(int));
    }

    /* Fill with r*cols + c so values are easy to verify */
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            mat[r][c] = r * cols + c + 1;
        }
    }

    /* Print */
    printf("Dynamic matrix:\n");
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            printf("%4d", mat[r][c]);
        }
        printf("\n");
    }

    /* Free each row first, then the array of pointers */
    for (int r = 0; r < rows; r++) free(mat[r]);
    free(mat);

    return 0;
}

/* Print a 2D array as a grid */
void print2D(int rows, int cols, int m[rows][cols]) {
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            printf("%4d", m[r][c]);
        }
        printf("\n");
    }
}

/* Store the transpose of src (rows×cols) into dst (cols×rows) */
void transpose(int rows, int cols, int src[rows][cols], int dst[cols][rows]) {
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            dst[c][r] = src[r][c];
        }
    }
}
