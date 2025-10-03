#include <stdio.h>
#include <stdlib.h>
int getComputerChoice() {

    int x = (rand()%3)+1;
    return x;
}

char decideWinner(int player, int computer){
    if(player == computer){
        return 0;
    }
    if((player == 1 && computer == 3 || (player == 3 && computer == 2) || (player == 2 && computer == 1))){
        return 1;
    }
    return -1;
}

void main() {
    int input;
    do {
        printf("Choose a match length: 5 or 10\n");
        scanf(" %d", &input);
        // if (input != 5 || input != 10){
        //     printf("invalid input.");
        // }
    } while (input != 5 && input != 10);
    for (int i = 1; i <= input; i++){
        int user_input;
        printf("Round %d", i);
        printf("Enter 1= Rock, Enter 2= Paper, Enter 3 = Scissors\n");
        scanf("%d", &user_input);
        switch (user_input){
            case 1:
                int x = getComputerChoice();
                printf("You chose Rock, Computer chose %d", x);
                int result = decideWinner(user_input, x);
            case 2:
                int x = getComputerChoice();
                printf("You chose Paper, Computer chose %d", x);
                int result = decideWinner(user_input, x);
            case 3:
                int x = getComputerChoice();
                printf("You choose Scissors, Computer chose %d", x);
                int result = decideWinner(user_input, x);
                switch (result) {
                    case 0:
                        printf("It was a tie!");
                        
                }
        }
    }

}