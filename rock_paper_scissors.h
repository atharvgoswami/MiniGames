#include <iostream>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <random>
#include "mini_helper_functions.h"

using namespace std;

void rock_paper_scissors()
{
    LoadingClass l;
    NewLines nl;
    srand(time(0));
    l.loadingString("Rock Paper Scissors");
    nl.newLine();
    nl.newLine();
    cout << "Welcome To rock paper scissors game!!!";
    nl.newLine();
    cout << "The rules are as follows: ";
    nl.newLine();
    cout << "Scissors:";
    nl.newLine();
    cout << "The scissors cut paper(scissors wins against paper),";
    nl.newLine();
    cout << "but gets broken by rock(scissors loses against rock)";
    nl.newLine();
    nl.newLine();
    cout << "Paper:";
    nl.newLine();
    cout << "The paper wraps the rock (paper wins against rock),";
    nl.newLine();
    cout << "but scissors cut the paper (paper loses against scissors).";
    nl.newLine();
    nl.newLine();
    cout << "Rock:";
    nl.newLine();
    cout << "The rock damages the scissors(rock wins against scissors),";
    nl.newLine();
    cout << "but get wrapped by water (rock loses against paper)";
    nl.newLine();
    cout << "Press any key to continue: ";
    getch();
    // system("cls");
    nl.newLine();
    char choice, playAgain;
    do
    {
        nl.newLine();
        int random = rand() % 3;
        string option;
        nl.newLine();
        cout << "Enter r for rock, p for paper and s for scissors: ";
        cin >> choice;
        if (choice == 'r' || choice == 'R')
            option = "Rock";
        else if (choice == 'p' || choice == 'P')
            option = "Paper";
        else if (choice == 's' || choice == 'S')
            option = "Scissors";
        else
            continue;
        nl.newLine();
        if (random = 0)
        {
            nl.newLine();
            cout << "Computer's choice is Rock...";
            nl.newLine();
            cout << "Your Choice is " << option;
            nl.newLine();

            if (choice == 'r' || choice == 'R')
            {
                cout << "No one won! Match Tie!!";
                nl.newLine();
            }
            else if (choice == 'p' || choice == 'P')
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
        else if (random = 1)
        {
            nl.newLine();
            cout << "Computer's choice is Paper...";
            nl.newLine();
            cout << "Your Choice is " << option;
            nl.newLine();

            if (choice == 'r' || choice == 'R')
            {
                cout << "Oh no! You loose!";
                nl.newLine();
            }
            else if (choice == 'p' || choice == 'P')
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
        else if (random = 2)
        {
            nl.newLine();
            cout << "Computer's choice is scissors...";
            nl.newLine();
            cout << "Your Choice is " << option;
            nl.newLine();

            if (choice == 'r' || choice == 'R')
            {
                cout << "Hurray!! You win!";
                nl.newLine();
            }
            else if (choice == 'p' || choice == 'P')
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
        cout << "Play Again? (press y to continue): ";
        playAgain = getche();
    } while (playAgain == 'y');

    l.loadingBar();
}