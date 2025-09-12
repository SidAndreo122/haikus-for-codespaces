#include <stdio.h>

int main () {
    int input;

    printf("Please enter a number to which you want to generate a math table to:");
    scanf("%d", &input);

    for (int i=1; i <= input; i++){

        for(int j=1; j<=10; j++){
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }
}