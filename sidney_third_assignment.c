#include <stdio.h>

int main() {
    int input;

    printf("Please enter a number to choose which operation to calculate:\n 1: Square a number \n 2: Cube a number \n 3: Determine if a number is even or odd.\n");
    scanf("%d", &input);

    switch (input) {
        case 1:
        int square_num;
        printf("Please enter a number to square: ");
        scanf("%d", &square_num);
        printf("%d\n", square_num * square_num);
        break;
        case 2:
        int cube_num;
        printf("Please enter a number to cube: ");
        scanf("%d", &cube_num);
        printf("%d\n", cube_num * cube_num * cube_num);
        break;
        case 3:
        int even_odd;
        printf("Please enter a number: ");
        scanf("%d", &even_odd);
        if (even_odd % 2 == 0) {
            printf("This number is even.\n");
        } else {
            printf("This number is odd.\n");
        }
    }







    // if (input == 1){
    //     int square_num;
    //     printf("Please enter a number to square: ");
    //     scanf("%d", &square_num);
    //     printf("%d\n", square_num * square_num);
    // } else if (input == 2) {
    //     int cube_num;
    //     printf("Please enter a number to cube: ");
    //     scanf("%d", &cube_num);
    //     printf("%d\n", cube_num * cube_num * cube_num);
    // } else if (input == 3) {
    //     int even_odd;
    //     printf("Please enter a number: ");
    //     scanf("%d", &even_odd);
    //     if (even_odd % 0) {
    //         printf("This number is even.");
    //     }
    // }
}