#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_dice() {
    int dice = rand() % 6 + rand() % 6;
    printf("You rolled: %d\n", dice);
    return dice;
}

bool play_game() {
    int dice = roll_dice();
    if (dice == 7 || dice == 11)
        return true;
    if (dice == 2 || dice == 3 || dice == 12)
        return false;
    int point = dice;
    printf("Your Point is %d\n", point);
    while (true) {
        dice = roll_dice();
        if (dice == point)
            return true;
        if (dice == 7)
            return false;
    }
}

int main() {
    srand(time(0));

    char flag = 'y';
    int win = 0, lose = 0;
    while (flag == 'y') {
        printf("\n");
        if (play_game())printf("You win!\n\n"), ++win;
        else printf("You lose!\n\n"), ++lose;

        printf("Play again? ");
        scanf("%s", &flag);
    }
    printf("\nWins: %d Losses:%d\n", win, lose);
    return 0;
}
