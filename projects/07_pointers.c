/* 07_pointers.c — Pointers in C
 *
 * A pointer is a variable that stores a memory address.
 * Instead of holding a value like 42, it holds the location
 * in memory where that value lives.
 *
 * Compile: gcc 07_pointers.c -o 07_pointers
 * Run:     ./07_pointers
 */

#include <stdio.h>
#include <stdlib.h>   /* malloc, free */

/* forward declarations */
void doubleValue(int *p);
void swap(int *a, int *b);

int main(void) {

    /* -------------------------------------------------------
     * 1. BASICS: address-of (&) and dereference (*)
     * ------------------------------------------------------- */

    int x = 42;

    /* & gives us the address of x */
    /* int* means "pointer to int" */
    int *p = &x;

    printf("=== Basics ===\n");
    printf("Value of x:       %d\n",  x);   /* 42            */
    printf("Address of x:     %p\n",  &x);  /* e.g. 0x...    */
    printf("p holds address:  %p\n",  p);   /* same as &x    */
    printf("*p dereferences:  %d\n",  *p);  /* 42 — reads through the pointer */

    /* Modifying x through the pointer */
    *p = 100;
    printf("x after *p=100:   %d\n",  x);   /* 100 */

    /* -------------------------------------------------------
     * 2. POINTER ARITHMETIC
     * Moving a pointer forward steps by sizeof(type) bytes,
     * not by 1 byte.
     * ------------------------------------------------------- */

    printf("\n=== Pointer arithmetic ===\n");
    int arr[5] = {10, 20, 30, 40, 50};
    int *q = arr;   /* points to arr[0] */

    printf("q   → %d\n", *q);        /* 10 */
    printf("q+1 → %d\n", *(q + 1));  /* 20 */
    printf("q+2 → %d\n", *(q + 2));  /* 30 */

    /* Walking the array with a pointer */
    printf("Array via pointer walk: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(q + i));
    }
    printf("\n");

    /* Incrementing the pointer itself */
    printf("Incrementing pointer:   ");
    int *r = arr;
    for (int i = 0; i < 5; i++) {
        printf("%d ", *r);
        r++;    /* advance to next element */
    }
    printf("\n");

    /* Pointer difference tells you how many elements apart */
    int *start = &arr[0];
    int *end   = &arr[4];
    printf("end - start = %td elements apart\n", end - start);  /* 4 */

    /* -------------------------------------------------------
     * 3. PASSING POINTERS TO FUNCTIONS (pass by reference)
     * In C, all arguments are passed by value.
     * To let a function modify a variable, pass its address.
     * ------------------------------------------------------- */

    printf("\n=== Pass by pointer ===\n");
    int n = 7;
    printf("Before doubleValue: n = %d\n", n);  /* 7  */
    doubleValue(&n);
    printf("After  doubleValue: n = %d\n", n);  /* 14 */

    int a = 5, b = 9;
    printf("Before swap: a=%d, b=%d\n", a, b);
    swap(&a, &b);
    printf("After  swap: a=%d, b=%d\n", a, b);

    /* -------------------------------------------------------
     * 4. NULL POINTER
     * A pointer that points to nothing. Always initialise
     * pointers to NULL if you don't have an address yet.
     * Dereferencing NULL crashes — so check first.
     * ------------------------------------------------------- */

    printf("\n=== NULL pointer ===\n");
    int *np = NULL;
    if (np == NULL) {
        printf("np is NULL — safe to skip dereferencing\n");
    }

    /* -------------------------------------------------------
     * 5. POINTER TO POINTER
     * A double pointer stores the address of another pointer.
     * ------------------------------------------------------- */

    printf("\n=== Pointer to pointer ===\n");
    int  val = 55;
    int *ptr = &val;    /* ptr  → val  */
    int **pp = &ptr;    /* pp   → ptr  → val */

    printf("val  = %d\n",   val);    /* 55 */
    printf("*ptr = %d\n",   *ptr);   /* 55 */
    printf("**pp = %d\n",   **pp);   /* 55 */

    **pp = 99;   /* modify val through two levels of indirection */
    printf("val after **pp = 99: %d\n", val);  /* 99 */

    /* -------------------------------------------------------
     * 6. DYNAMIC MEMORY ALLOCATION
     * malloc asks the OS for memory at runtime.
     * You must free() it when done to avoid memory leaks.
     * ------------------------------------------------------- */

    printf("\n=== Dynamic allocation ===\n");
    int count = 4;

    /* Allocate space for 4 ints on the heap */
    int *dyn = (int *) malloc(count * sizeof(int));

    if (dyn == NULL) {
        printf("malloc failed!\n");
        return 1;
    }

    /* Fill and print */
    for (int i = 0; i < count; i++) {
        dyn[i] = (i + 1) * 10;   /* 10, 20, 30, 40 */
    }
    printf("Dynamically allocated: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", dyn[i]);
    }
    printf("\n");

    /* Always free heap memory when you're done */
    free(dyn);
    dyn = NULL;   /* prevent accidental use after free */

    return 0;
}

/* Doubles the value at the given address */
void doubleValue(int *p) {
    *p = *p * 2;
}

/* Swaps the two values at the given addresses */
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
