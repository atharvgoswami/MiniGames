#include <iostream>
#include <time.h>
#include <random>

#include "mini_helper_functions.h"

using namespace std;

void apple_game()
{
    NewLines nl;
    LoadingClass l;
    l.loadingString("Apple Game");

    nl.newLine();
    cout << "There are total 21 apples";
    nl.newLine();
    cout << "Pick one to four and who will pick the last apple will be looser!!";
    nl.newLine();
    cout << "You can choose from 1 to 4";
    char playAgain = 'n';
    do
    {
        int initial_apples = 21;
        int user_turn, computer_tern;
        int current_apples = initial_apples;
        do
        {
            nl.newLine();
            printf("User Turn: ");
            scanf("%d", &user_turn);

            current_apples = current_apples - user_turn;
            nl.newLine();
            printf("The remaining apples are %d", current_apples);

            if (current_apples == 1)
            {
                nl.newLine();
                printf("You won");
                break;
            }

            srand(time(0));
            int random_number = rand() % 4 + 1;
            if (current_apples - random_number < 1)
            {
                random_number = current_apples - 1;
            }
            nl.newLine();
            printf("Computer Turn: %d", random_number);
            current_apples = current_apples - random_number;
            nl.newLine();
            printf("The remaining apples are %d", current_apples);

            if (current_apples == 1)
            {
                nl.newLine();
                printf("computer won");
                break;
            }
        } while (current_apples > 1);
        nl.newLine();
        cout << "Play Again? Press 'y' to continue... ";
        playAgain = getche();
    } while (playAgain == 'y');
}