#include <iostream>
#include <time.h>
#include <random>
#include "mini_helper_functions.h"

using namespace std;
LoadingClass l;
NewLines nl;
void guess_the_number()
{
    l.loadingString("Guess The Number");
    nl.newLine();
    nl.newLine();
    cout << "Welcome to Guess The Number Game!!";
    nl.newLine();
    cout << "You have to guess the number between 1 to 100";
    nl.newLine();
    cout << "There will be hints provided in the game!!";
    nl.newLine();
    nl.newLine();
    cout << "Press any key to continue...";
    nl.newLine();
    char playAgain = 'n', difficulty = 'm';
    int choice, random, turns = 0, defTurns;
    srand(time(0));
    getch();
    do
    {
        nl.newLine();
        cout << "Enter the difficulty level (e for easy, m for medium, h for hard): ";
        cin >> difficulty;
        nl.newLine();
        switch (difficulty)
        {
        case 'e':
            defTurns = 10;
            break;
        case 'm':
            defTurns = 7;
            break;
        case 'h':
            defTurns = 5;
            break;
        default:
            cout << "You choose an invalid difficulty level!";
            nl.newLine();
            cout<<"Choosing medium by default...";
            defTurns=7;
            difficulty='m';
            break;
        }
        random = rand() % 100 + 1;
        do
        {
            turns++;
            if(turns>defTurns){
                cout<<"You are out of turns!! ";
                nl.newLine();
                cout<<"The number was "<<random;
                nl.newLine();
                cout<<"You loose!";
                nl.newLine();
                break;
            }
            nl.newLine();
            cout << "Enter a number: ";
            cin >> choice;
            nl.newLine();
            if (choice > random)
            {
                cout << "The number you entered is larger...";
                nl.newLine();
                cout << "Enter a smaller number...";
                nl.newLine();
            }
            else if (choice < random)
            {
                cout << "The number you entered is smaller...";
                nl.newLine();
                cout << "Enter a larger number...";
                nl.newLine();
            }
            else
            {
                cout << "You won!!";
                nl.newLine();
                cout << "You took " << turns << " to win the game!!";
                nl.newLine();
            }
        } while (choice != random);
        cout << "Play again? press 'y' to continue... ";
        playAgain = getch();
    } while (playAgain == 'y');
}