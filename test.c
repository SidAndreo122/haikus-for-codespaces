#include <stdio.h>
#include <stdbool.h>

int main() {
    int a = 5;
    int b = 5;
    int* ptr = &a;
    char G = 80;
    int g_2;

    if (a > b){
        printf("True\n");
    }
    else {
        printf("False\n");
    }

    (G >= 80) ? printf("You passed\n") : printf("You failed\n");
    printf("Please enter your final grade (in number format): ");
    scanf(" %d", &g_2);
    switch (g_2) {
        case 20:
        printf("F\n");
        break;
        case 40:
        printf("D\n");
        break;
        case 60:
        printf("C\n");
        break;
        case 80:
        printf("B\n");
        break;
        case 100:
        printf("A\n");
        break;
    }
    printf("%d", a == b);
    printf("%p\n", ptr); // reference
    printf("%d", *ptr); // deference


}