#include <stdio.h>

void main () {
    double input;
    printf("Please enter a temperature in celsius. \n");

    scanf("%lf", &input);

    double faren = (input * 1.8) + 32;

    printf("%.2lf\n", faren);
    printf("---------------------------------------------");

    int integer;
    printf("Enter a 3-digit integer. \n");
    scanf("%d", &integer);

    int hundreds = integer / 100;
    int tens = (integer % 100) / 10;
    int ones = integer % 10;
    printf("---------------------------------------------");
    int user_input, user_input_2;
    char operator;
    printf("Enter a integer. \n");
    scanf(" %d", &user_input);
    printf("Enter a integer. \n");
    scanf("%d", &user_input_2);
    printf("Enter operator: +, -, *, /. \n");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
        printf("%d", user_input + user_input_2);
        break;
    
     case '-':
        printf("%d", user_input - user_input_2);
        break;
     case '*':
        printf("%d", user_input * user_input_2);
        break;
     case '/':
        if (user_input_2 == 0){
            printf("Cannot divide by zero");
        }
        printf("%d", user_input / user_input_2);
        break;
        
    default:
        printf("Invalid Input.");
        break;
    }
    printf("---------------------------------------------");
    int n;
    long factorial = 1;
    printf("input n");
    scanf(" %d", &n);
    
    for (int i = 1; i <= n; i++){
        factorial *=  i;
        
    }
    printf("%li \n", factorial);
    printf("---------------------------------------------");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");  // move to next line
    }

}