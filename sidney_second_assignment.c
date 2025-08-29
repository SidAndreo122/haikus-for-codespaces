#include <stdio.h>

int main() {
    int first_int;
    int second_int;

    //Q1
    printf("Please enter an integer: ");
    scanf("%d", &first_int);
    printf("Please enter a second integer: ");
    scanf("%d", &second_int);

    // example of casting
    printf("The sum is: %d\n The difference is: %d\n The product is: %d\n The quotient is: %.2f\n and remainder of %d\n", first_int+second_int, first_int-second_int, first_int*second_int,(float)first_int/second_int, first_int%second_int);

    // Q2
    int total_min;
    printf("Enter a number: (this will be in minutes, and will be converted to hours) ");
    scanf("%d", &total_min);
    int hrs = total_min / 60;
    int rem2 = total_min % 60;
    printf("The number of hours is: %.1f and the remainder is %d\n", (float)hrs, rem2);

    // Q3
    int int_1, int_2;

    printf("Please enter a integer: ");
    scanf("%d", &int_1);
    printf("Please enter another integer: ");
    scanf("%d", &int_2);

    printf("1 = True, 0 = False\n");
    printf("%d less than %d is %d\n", int_1, int_2, int_1 < int_2);
    printf("%d less than or equal to %d is %d\n", int_1, int_2, int_1 <= int_2);
    printf("%d greater than %d is %d\n", int_1, int_2, int_1 > int_2);
    printf("%d greater than or equal to %d is %d\n", int_1, int_2, int_1 >= int_2);
    printf("%d equal to %d is %d\n", int_1, int_2, int_1 == int_2);
    printf("%d not equal to %d is %d", int_1, int_2, int_1 != int_2);

}
