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
    int val =5;
    int *val_ptr = &val;

    printf("The address of val = %p \n", val_ptr);
    printf("The address of val_ptr = %p\n", &val_ptr);
    printf("The vlaue stored in val_ptr %p\n", val_ptr);
    printf("The value stored in ptr = %d\n", *val_ptr);

    char vala ='a';
    char *val_ptra = &vala;

    printf("The address of val = %p\n", val_ptra);
    printf("The address of val_ptr = %p\n", &val_ptra);
    printf("The vlaue stored in val_ptr %p\n", val_ptra);
    printf("The value stored in ptr = %c\n", *val_ptra);
    printf("%d", sizeof(val_ptra));
}