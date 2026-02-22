/* 08_arrays_1d.c — Single-dimensional arrays in C
 *
 * Key insight: in C, an array name IS a pointer to its first element.
 * arr[i]  is exactly the same as  *(arr + i)
 *
 * Compile: gcc 08_arrays_1d.c -o 08_arrays_1d
 * Run:     ./08_arrays_1d
 */

#include <stdio.h>
#include <stdlib.h>

/* forward declarations */
void printArray(int *arr, int n);
int  sumArray(int *arr, int n);
int  findMax(int *arr, int n);
void reverseArray(int *arr, int n);

int main(void) {

    /* -------------------------------------------------------
     * 1. DECLARATION AND INITIALISATION
     * ------------------------------------------------------- */

    printf("=== Declaration ===\n");

    /* Initialise with a literal list — size inferred as 5 */
    int a[] = {3, 7, 1, 9, 4};

    /* Declare with explicit size — uninitialised (garbage values!) */
    int b[5];

    /* Initialise all elements to 0 with {0} */
    int c[5] = {0};

    printf("a[0]=%d  a[4]=%d\n", a[0], a[4]);
    printf("c[2]=%d  (should be 0)\n", c[2]);

    /* -------------------------------------------------------
     * 2. ARRAYS AND POINTERS — they are the same thing
     * ------------------------------------------------------- */

    printf("\n=== Array-pointer equivalence ===\n");
    int nums[] = {10, 20, 30, 40, 50};

    /* arr (without []) is a pointer to arr[0] */
    printf("nums     = %p\n", nums);       /* address of first element */
    printf("&nums[0] = %p\n", &nums[0]);   /* same address */

    /* Two ways to read the same element — identical machine code */
    printf("nums[2]       = %d\n", nums[2]);        /* index notation   */
    printf("*(nums + 2)   = %d\n", *(nums + 2));    /* pointer notation */

    /* sizeof tells you the total bytes, not the element count */
    printf("sizeof(nums)       = %zu bytes\n", sizeof(nums));          /* 20 (5 * 4) */
    printf("element count      = %zu\n", sizeof(nums) / sizeof(int));  /* 5           */

    /* -------------------------------------------------------
     * 3. ITERATING — index vs pointer style
     * ------------------------------------------------------- */

    printf("\n=== Iteration styles ===\n");

    printf("Index  style: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    printf("Pointer style: ");
    for (int *p = nums; p < nums + 5; p++) {
        printf("%d ", *p);
    }
    printf("\n");

    /* -------------------------------------------------------
     * 4. PASSING ARRAYS TO FUNCTIONS
     * The array decays to a pointer — the function receives
     * a pointer, so it can modify the original array.
     * The size must be passed separately (no sizeof in function).
     * ------------------------------------------------------- */

    printf("\n=== Array functions ===\n");
    int data[] = {5, 3, 8, 1, 9, 2, 7};
    int len = sizeof(data) / sizeof(int);   /* 7 */

    printf("Array:   "); printArray(data, len);
    printf("Sum:     %d\n", sumArray(data, len));
    printf("Max:     %d\n", findMax(data, len));

    reverseArray(data, len);
    printf("Reversed: "); printArray(data, len);

    /* -------------------------------------------------------
     * 5. DYNAMIC 1D ARRAY
     * Use malloc when the size is only known at runtime.
     * ------------------------------------------------------- */

    printf("\n=== Dynamic 1D array ===\n");
    int n;
    printf("How many elements? ");
    scanf("%d", &n);

    int *dyn = (int *) malloc(n * sizeof(int));
    if (dyn == NULL) { printf("malloc failed\n"); return 1; }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &dyn[i]);   /* dyn[i] == *(dyn + i) */
    }

    printf("You entered: "); printArray(dyn, n);
    printf("Sum: %d\n", sumArray(dyn, n));
    printf("Max: %d\n", findMax(dyn, n));

    free(dyn);
    return 0;
}

/* Print all elements of arr */
void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/* Return the sum of all elements */
int sumArray(int *arr, int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}

/* Return the largest element */
int findMax(int *arr, int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

/* Reverse arr in-place using two pointers */
void reverseArray(int *arr, int n) {
    int *left  = arr;
    int *right = arr + n - 1;
    while (left < right) {
        int temp = *left;
        *left  = *right;
        *right = temp;
        left++;
        right--;
    }
}
