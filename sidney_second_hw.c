#include <stdio.h>

int main() {
    int input;
    int largest = 1;
    int amount_even = 0;
    int amount_odd= 0;
    int sum = 0;
    do {
        printf("Please enter numbers, enter 0 to stop. ");
        scanf("%d", &input);

        if(input !=0) {
                if(input % 2 == 0) {
                printf("%d is even\n", input);
                amount_even += 1;
            }
            else if (input % 2 != 0){
                printf("%d is odd\n", input);
                amount_odd += 1;
            }
            if(input > 0){
                printf("%d is positive\n", input);
            }
            else if(input < 0) {
                printf("%d is negative\n", input);
            }
            else{
                printf("%d is zero\n", input);
            }
            
            sum += input;
        }
        
    }while (input != 0);
         
        printf("Sum of numbers is %d\n", sum);
        if (input > largest){
            largest = input;
            printf("The largest number entered is: %d\n", largest);
        }
            printf("Number of odd numbers: %d\n", amount_odd);
            printf("Number of even numbers: %d\n", amount_even);
}