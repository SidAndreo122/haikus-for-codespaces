#include <stdio.h>
#include <stdbool.h>

int main() {
    char firstLetter;
    int age;
    float height;
    bool isStudent;

    // scanf("format specifier", &variable")
    printf("Enter your first letter of your last name: ");
    scanf("%c", &firstLetter); // if there is a problem use getchar(firstLetter) or use a space in the scanf statement scanf(" %c")
    printf("Enter your age:");
    scanf("%d", &age);  
    printf("Enter your height (format it as foot.inches please)");
    scanf("%f", &height);
    printf("Are you a student? (Enter 1 for True, or enter 0 for false)");
    scanf("%d", &isStudent);
    // printf("Message+format specififer", variables);
    printf("Your first letter of your last name is: %c\n Your age is %d\n Your height is %.2f\n Finally are you are student? 1(True) or 2(False)? %d\n", firstLetter, age, height, isStudent);
    return 0;
}