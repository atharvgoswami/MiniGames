#include <iostream>
#include <random>
#include <time.h>
#include "mini_helper_functions.h"
using namespace std;

class Snake_And_Ladder
{

public:

    NewLines nl;
    LoadingClass l;

    // for snakes:
    int snake(int pos)
    {
        int yield;
        switch (pos)
        {
        case 34:
        {
            nl.newLine();
            cout<<"Oops! Player encountered a snake at " << 34;
            nl.newLine();
            yield = 5;
            break;
        }
        case 72:
        {
            nl.newLine();
            cout<<"Oops! Player encountered a snake at " << 72;
            nl.newLine();
            yield = 53;
            break;
        }
        case 77:
        {
            nl.newLine();
            cout<<"Oops! Player encountered a snake at " << 77;
            nl.newLine();
            yield = 2;
            break;
        }
        case 95:
        {
            nl.newLine();
            cout<<"Oops! Player encountered a snake at " << 95;
            nl.newLine();
            yield = 12;
            break;
        }
        case 98:
        {
            nl.newLine();
            cout<<"Oops! Player encountered a snake at " << 98;
            nl.newLine();
            yield = 60;
            break;
        }
        default:
            yield = pos;
        };
        return yield;
    }

    // for ladders:
    int ladder(int pos)
    {
        int yield;
        switch (pos)
        {
        case 7:
        {
            nl.newLine();
            cout<<"Congo! Player got a ladder at " << 7;
            nl.newLine();
            yield = 30;
            break;
        }
        case 23:
        {
            nl.newLine();
            cout<<"Congo! Player got a ladder at "  <<23;
            nl.newLine();
            yield = 73;
            break;
        }
        case 36:
        {
            nl.newLine();
            cout<<"Congo! Player got a ladder at " <<36;
            nl.newLine();
            yield = 63;
            break;
        }
        case 64:
        {
            nl.newLine();
            cout<<"Congo! Player got a ladder at " << 64;
            nl.newLine();
            yield = 96;
            break;
        }
        default:
            pos;
        };
        return yield;
    }

    // spinning the dice:
    int spinDice()
    {
        srand(time(0));
        int random = rand() % 6 + 1;
        return random;
    }

    // The main game:
    void game()
    {
        //        Random rand = new Random(); // creating Random object
        //        Scanner sc = new Scanner(System.in); // creating Scanner object
        // choosing who will start the game
        int move,moveComp;
        int playerPos = 0, compPos=0;
        while (true)
        { // loop runs until we get a winner
        
            // for (int i = 0; i < length; i++)
            {
                nl.newLine();
                cout << "Its your turn";
                nl.newLine();
                printf("Type anything to spin the dice "); 
                getch();
                nl.newLine();
                move = spinDice();
                cout << "You got " << move;
                nl.newLine();
                if (playerPos + move <= 100)
                {
                    playerPos += move;
                }
                playerPos = snake(playerPos);
                playerPos = ladder(playerPos);
                // if player gets snake or ladder:
                cout << "You are at " << playerPos;
                nl.newLine();
                
                printf("_____________________________________");

                if (playerPos == 100)
                {
                    cout << "You won the game";
                    nl.newLine();
                    break;
                }
                
                Sleep(100);
                // srand(time(0));
                moveComp = spinDice();
                nl.newLine();
                cout << "Computer got " << moveComp;
                nl.newLine();
                if (compPos + moveComp <= 100)
                {
                    compPos += moveComp;
                }
                // if a player reaches 100 it means he won the game
                compPos = snake(compPos);
                compPos = ladder(compPos);
                // if player gets snake or ladder:
                cout << "Computer is at " << compPos;
                nl.newLine();
                
                printf("_____________________________________");
                if(compPos == 100){
                    nl.newLine();
                    cout << "You lost the game";
                    nl.newLine();
                    break;
                }
            }
        }
    }
};

void snake_and_ladders()
{
    LoadingClass l;
    NewLines nl;
    Snake_And_Ladder s;
    l.loadingString("Snake and Ladders");
    nl.newLine();
    // cout << ("Enter the number of players (minimum 2 and maximum 4 players) : ");
    // nl.newLine();
    // int n;
    // cin >> n;
    // if (n > 4 || n < 2)
    // {
    //     cout << ("Wrong input!");
    //     nl.newLine();
    // }
    // else
    // {
    //     int player[n]={}; // array of players will be created
    //     // initially, the players will be at position 0, that is, [0,0,0,0]
    //     Snake_And_Ladder s;
        s.game();
    // }
}
// int main()
// {
//     snake_and_ladders();
//     return 0;
// }