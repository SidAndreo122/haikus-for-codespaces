#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // need snakes and ladders
    // position
    // dice
    // number of turns
    int player_position = 1, newpos;
    int dice_roll;
    int turns = 0;
    srand((unsigned)time(NULL));

    while (player_position != 100){
        turns++;

        dice_roll = rand() % 6 + 1;
        newpos = player_position + dice_roll;

        printf("Turn = %d, Dice Roll = %d\n", turns, dice_roll);
        if ( newpos > 100)
            player_position = player_position;
        else 
            player_position = newpos;
        
        switch(player_position){
            case 3:
                player_position = 48;
                printf("Used a ladder to position %d\n", player_position);
                break;
            case 23:
                player_position = 52;
                printf("Used a ladder to position %d\n", player_position);
                break;
            case 99:
                player_position = 1;
                printf("A snake bit you, your new position is %d\n", player_position);
                break;
            case 70:
                player_position = 5;
                printf("A snake bit you, your new position is %d\n", player_position);
                break;
        }
        

    }
    printf("current pos = %d turns = %d", player_position, turns);
}