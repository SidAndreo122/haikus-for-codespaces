#include <stdio.h>

void func() {
    printf("Function calls itself.\n");
    func();
}

void main() {
    printf("function called from main.\n");
    func();
}