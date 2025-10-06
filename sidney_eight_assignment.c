#include <stdio.h>
#include <stdlib.h>
int ties = 0;
int player_wins = 0; 
int computer_wins = 0;
char play_again = 'Y';
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

void choiceDecrypt(int ch){
    if(ch == 1){
        printf(" Rock");
    }
    else if(ch == 2){
        printf(" Paper");
    }
    else if(ch == 3){
        printf(" Scissors");
    }
}

void main() {
    int input;
    while (play_again == 'Y'){
        do {
        printf("Choose a match length: 5 or 10\n");
        scanf(" %d", &input);
        // if (input != 5 || input != 10){
        //     printf("invalid input.");
        // }
    } while (input != 5 && input != 10);
    for (int i = 1; i <= input; i++){
        int user_input;
        printf("Round %d\n", i);
        printf("Enter 1= Rock, Enter 2= Paper, Enter 3 = Scissors\n");
        scanf("%d", &user_input);
        int x = getComputerChoice();
        int result = decideWinner(user_input, x);
        printf("You chose");
        choiceDecrypt(user_input);
        printf(",");
        printf("Computer chose");
        choiceDecrypt(x);
        printf("\n");
        switch (result){
            case 0:
                
                printf("It was a tie!");
                ties++;
                break;
              
            case 1:
                
                printf("You win this round!");
                player_wins++;
                break;
                
            default:
                printf("Computer wins!");
                computer_wins++;
                break;
        }
        
    }
    printf("\n=== Final Results ===\n");
        printf("You: %d Computer: %d Ties %d\n", player_wins, computer_wins, ties);
        if (player_wins > computer_wins) {
            printf("You wins the match!\n");
        }
        else if (computer_wins > player_wins){
            printf("Computer wins the match!\n");
        }
        else {
            printf("It's a draw");
        }
        
        printf("Play again? (Y/N)");
        scanf(" %c", &play_again);
        if (play_again == 'N') {
            printf("Thanks for playing!");
            break;
        }
    }
    
}