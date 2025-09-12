#include <stdio.h>

int main () {
    int input;
    do
    { 
        printf("\nPlease enter a number for an operation:\n");
        printf("1. Calculate the power of a number (enter a base and an exponent)\n");
        printf("2. Find the sum of numbers from 1 up to given number n\n");
        printf("3. Exit\n");
        scanf("%d", &input);
    
        if (input == 1) {
            int base;
            int power = 1;
            printf("Please enter a base number: ");
            scanf("%d", &base);
            int exp;
            printf("Please enter an exponent: ");
            scanf("%d", &exp);
            for(int i=0; i <= exp; i++){
                if(i==0){
                    power = 1;
                }else{
                    power = power*base;
                }
            }
            printf("%d^%d = %d\n", base, exp, power);
        }
        else if (input == 2) {
            int n, sum = 0;
            printf("Please enter a number to sum to (your n): ");
            scanf("%d", &n);
            for(int i = 1; i <= n; i++){
                sum+= i;
            }
            printf("Sum of numbers from 1 to %d = %d\n", n, sum);
        }
        else if (input == 3){
            printf("Exiting...\n");
        }
        else {
            printf("Invalid number. Try again.");
        }
    } while (input != 3);
    
}