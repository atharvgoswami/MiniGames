#include <iostream>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <random>
#include "mini_helper_functions.h"

using namespace std;

void gun_water_snake()
{
    LoadingClass l;
    NewLines nl;
    srand(time(0));
    l.loadingString("Gun Water Snake");
    nl.newLine();
    nl.newLine();
    cout << "Welcome To gun water snake game!!!";
    nl.newLine();
    cout << "The rules are as follows: ";
    nl.newLine();
    cout << "Snake:";
    nl.newLine();
    cout << "The snake drinks water(snake wins against water),";
    nl.newLine();
    cout << "but dies by gun(snake loses against gun)";
    nl.newLine();
    nl.newLine();
    cout << "Water:";
    nl.newLine();
    cout << "The water damages the gun (water wins against gun gun),";
    nl.newLine();
    cout << "but snake drinks the water (water loses against snake.)";
    nl.newLine();
    nl.newLine();
    cout << "Gun:";
    nl.newLine();
    cout << "The gun kills the snake(gun wins against snake),";
    nl.newLine();
    cout << "but damaged by water (gun loses against water)";
    nl.newLine();
    cout << "Press any key to continue: ";
    getch();
    // system("cls");
    nl.newLine();
    char choice, playAgain;
    do
    {
         srand(time(0));
        int random = rand() % 3;
        string option;
        nl.newLine();
        cout << "Enter g for gun, w for water and s for snake: ";
        cin >> choice;
        if (choice == 'g' || choice == 'G')
            option = "Gun";
        else if (choice == 'w' || choice == 'W')
            option = "Water";
        else if (choice == 's' || choice == 'S')
            option = "Snake";
        else
            continue;
        nl.newLine();
        if (random == 0)
        {
            nl.newLine();
            cout << "Computer's choice is gun...";
            nl.newLine();
            cout << "Your Choice is " << option;
            nl.newLine();

            if (choice == 'g' || choice == 'G')
            {
                cout << "No one won! Match Tie!!";
                nl.newLine();
            }
            else if (choice == 'w' || choice == 'W')
            {
                cout << "Hurray!! You win!";
                nl.newLine();
            }
            else if (choice == 's' || choice == 'S')
            {
                cout << "Oh no! You loose!";
                nl.newLine();
            }
        }
        else if (random == 1)
        {
            nl.newLine();
            cout << "Computer's choice is water...";
            nl.newLine();
            cout << "Your Choice is " << option;
            nl.newLine();

            if (choice == 'g' || choice == 'G')
            {
                cout << "Oh no! You loose!";
                nl.newLine();
            }
            else if (choice == 'w' || choice == 'W')
            {
                cout << "No one won! Match Tie!!";
                nl.newLine();
            }
            else if (choice == 's' || choice == 'S')
            {
                cout << "Hurray!! You win!";
                nl.newLine();
            }
        }
        else if (random == 2)
        {
            nl.newLine();
            cout << "Computer's choice is snake...";
            nl.newLine();
            cout << "Your Choice is " << option;
            nl.newLine();

            if (choice == 'g' || choice == 'G')
            {
                cout << "Hurray!! You win!";
                nl.newLine();
            }
            else if (choice == 'w' || choice == 'W')
            {
                cout << "Oh no! You loose!";
                nl.newLine();
            }
            else if (choice == 's' || choice == 'S')
            {
                cout << "No one won! Match Tie!!";
                nl.newLine();
            }
        }
        nl.newLine();
        cout<<"______________________________________________________________________";
        nl.newLine();
        nl.newLine();
        cout << "Play Again? (press y to continue): ";
        playAgain = getche();
    } while (playAgain == 'y');

    l.loadingBar();
}