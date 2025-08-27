#include <stdio.h>
#include <stdbool.h>

int main() {
    int a = 5;
    int b = 5;
    int* ptr = &a;

    if (a > b){
        printf("True");
    }
    else {
        printf("False");
    }
    printf("%d", a == b);
    printf("%p\n", ptr); // reference
    printf("%d", *ptr); // deference


}