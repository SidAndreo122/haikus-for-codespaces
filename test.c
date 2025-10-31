#include <stdio.h>
#include <stdbool.h>
#define SIZE 5

// void is a datatype but has no use besides being used just for functions (no need for return statement)
void add_two_2(int a_, int b_){
    printf("%d + %d = %d\n", a_, b_, a_ + b_);
}

// if not void must have a return statement
int add_two(int a_ , int b_) {
    return a_ + b_;
}

int main() {
    int a = 5;
    int b = 5;
    int* ptr = &a;
    char G = 80;
    int g_2;

    int summ = add_two(1, 2);
    add_two_2(1, 2);

    printf("%d\n", summ);

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

    // initialization
    int num = 5;

    // condition
    while (num > 0) {
        printf("%d\n", num);
        num--; // increment/decrement
    }

    for (num=5, num > 5; num--;){
        if (num % 2 == 0) {
            continue;
        }
        printf("%d\n", num);
    }

    // printf("%d", a == b);
    // printf("%p\n", ptr); // reference address stored in memory
    // int *ptr = &a; // pointer must be the same type
    // printf("%d", *ptr); // deference

    int arr[SIZE] = {1, 2, 3, 4, 5};

    for (int i=0; i<SIZE; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
    int x = 4;
    int my_array [x];

    for (int i=0; i<4; i++){
        my_array[i] = i+1;
    }
    
    for (int i=0; i<4; i++){
        printf("%d", my_array[i]);
    }
}