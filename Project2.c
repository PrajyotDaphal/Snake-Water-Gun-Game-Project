#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(0));
    int player, computer;

    while(1){
    computer = (rand() % 3);
    /*
    0 --> Snake
    1 --> Water
    2 --> Gun
    3 --> Exit
    */

    printf("Choose 0 for Snake, 1 for Water, 2 for Gun, 3 for Exit : ");
    scanf("%d", &player);
    printf("Computer : %d\n", computer);

    if (player > 2) {
        printf("Game Over!\n");
            break;
        }

    if (player == 0 && computer == 0)
    {
        printf("Draw\n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("You Win!\n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("Computer Win!\n");
    }
    else if (player == 1 && computer == 0)
    {
        printf("Computer Win!\n");
    }
    else if (player == 1 && computer == 1)
    {
        printf("Draw\n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("You Win!\n");
    }
    else if (player == 2 && computer == 0)
    {
        printf("You Win!\n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("Computer Win!\n");
    }
    else if (player == 2 && computer == 2)
    {
        printf("Draw\n");
    }
    }

    return 0;
}