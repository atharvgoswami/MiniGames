#include <iostream>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include "mini_helper_functions.h"
#include "gun_water_snake.h"
#include "guess_the_number.h"
#include "apple_game.h"
#include "rock_paper_scissors.h"
#include "snake_and_ladders.h"

class Menus
{
    string username;
    string password;
    LoadingClass l1;
    NewLines nl1;

public:
    Menus(string username) { this->username = username; }
    void gamesMenu()
    {
        char pa='n';
        l1.loadingString("Games Menu");
        nl1.newLine();
        cout << "Choose Game you want to play!!";
        nl1.multipleLines();
        cout << "1. Gun Water Snake";
        nl1.newLine();
        cout << "2. Snake and Ladders";
        nl1.newLine();
        cout << "3. Rock Paper Scissors";
        nl1.newLine();
        cout << "4. Guess The Number";
        nl1.newLine();
        cout << "5. Apple Game";
        nl1.newLine();
        int choice;
        do
        {
            cin >> choice;
            switch (choice)
            {
            case 1:
                system("cls");
                gun_water_snake();
                break;
            case 2:
                system("cls");
                snake_and_ladders();
                break;
            case 3:
                system("cls");
                rock_paper_scissors();
                break;
            case 4:
                system("cls");
                guess_the_number();
                break;
            case 5:
                system("cls");
                apple_game();
                break;
            default:
                cout << "Wrong option selected! Try again...";
                continue;
            }
            nl1.newLine();
            cout << "Play again? (y)";
            cin >> pa;
            // if (pa == 'n')
            //     break;
            // else if (pa != 'y')
            // {
            //     cout << "Invalid input!!";
            //     gamesMenu();
            // }
        } while (pa == 'y');
        mainMenu();
    }
    void mainMenu()
    {
        l1.loadingString("Main Menu");
        nl1.multipleLines();
        cout << "1. Games";
        nl1.newLine();
        cout << "2. User Profile";
        nl1.newLine();
        cout << "3. Exit";
        nl1.newLine();
        int choice;
        do
        {
            cin >> choice;
            switch (choice)
            {
            case 1:
                system("cls");
                gamesMenu();
                break;
            case 2:
                system("cls");
                nl1.newLine();
                cout << "Username: " << username;
                break;
            case 3:
                system("cls");
                exit(0);
                break;
            default:
                cout << "Wrong option selected! Try again...";
                break;
            }
        } while (choice > 0 && choice < 4);
    }
    void miniGameMenu()
    {
    }
};
