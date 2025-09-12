#include <stdio.h>

int main () {
    printf("Please enter a number for a operation \n 1. Calculate the power of a number (enter a base and an exponent) \n 2. Find the sum of numbers from 1 up to given number n (provide the n) \n 3. Exit\n");
    int input;
    scanf("%d", &input);
    do
    {
        if (input == 1) {
            int base;
            int power = 1;
            printf("Please enter a base number");
            scanf("%d", &base);
            int exp;
            printf("Please enter an exponent");
            scanf("%d", &exp);
            for(int i=0; i <= exp; i++){
                if(i==0){
                    power = 1;
                }else{
                    power = power*input;
                }
            }
            break;
        }
        if (input == 2) {
            int n;
            printf("Please enter a number to sum to (your n)");
            scanf("%d", &n);
            for(int i = 1; i <= n; n++){
                printf("%d", i + n);
            }
        }
    } while (input != 3);
    
}