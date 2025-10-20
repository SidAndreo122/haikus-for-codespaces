#include <stdio.h>

void main() {
    int myAge = 43;     // Variable declaration
    int* ptr = &myAge;  // Pointer declaration

    // Reference: Output the memory address of myAge with the pointer (0x7ffe5367e044)
    printf("%p\n", ptr);

    // Dereference: Output the value of myAge with the pointer (43)
    printf("%d\n", *ptr);
    // having both &* cancels out and just leaves ptr (the address)

    // PC doesnt know the value of a variable it knows the address of a variable. The compilier translates
    *ptr = 20;
    printf("%d", myAge); // you can change a value of a variable with pointers
}