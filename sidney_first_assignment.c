#include <stdio.h>
#include <stdbool.h>

int main() {
    char firstLetter = 'A';
    int age = 21;
    float height = 6.2;
    bool isStudent = true;

    printf("My first letter of my last name is: %c\n My age is %d\n My height is %.2f\n Finally am I a student? 1(True) or 0(False)? %d\n", firstLetter, age, height, isStudent);
    return 0;
}