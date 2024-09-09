#include <iostream>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include "mini_helper_functions.h"
#include "menus.h"

struct userDetails
{
    string un;
    string ps;
    string *username = &un;
    string *password = &ps;
} details;

void userDetails(){
    cout<<"Username: "<<details.username;
}

class LoginSignupClass
{
    LoadingClass l;
    NewLines nl;

public:
    void signup()
    {
        char ch;
        l.loadingString("Sign-Up Page");
        nl.multipleLines();
        nl.newLine();
        cout << "Enter username: ";
        cin >> *details.username;
        nl.newLine();
        fflush(0);
        int i = 0;
        string confPass = "";
        do
        {

            cout << "Enter Password: ";
            while (1)
            {
                ch = _getch();
                if (ch == '\r')
                {
                    break;
                }
                else if (ch == '\b')
                {
                    if (i > 0)
                    {
                        details.password->pop_back();
                        printf("\b \b");
                    }
                }
                else
                {
                    cout << "*";
                    details.password->push_back(ch);
                    i++;
                }
            }
            fflush(0);
            nl.newLine();
            cout << "Confirm password: ";
            while (1)
            {
                ch = _getch();
                if (ch == '\r')
                {
                    break;
                }
                else if (ch == '\b')
                {
                    if (i > 0)
                    {
                        confPass.pop_back();
                        printf("\b \b");
                    }
                }
                else
                {
                    cout << "*";
                    confPass.push_back(ch);
                }
            }
            nl.newLine();
            if (confPass != details.ps)
            {
                cout << "Passwords don't match";
                nl.newLine();
                cout << "Try again!";
            }
            else
            {
                cout << "Sign Up successful!";
            }

        } while (confPass != details.ps);
    }
    bool login()
    {
        string currUsername;
        string currPassword;
        l.loadingString("Log In Page");
        nl.multipleLines();

        cout << "Enter Username: ";
        cin >> currUsername;
        nl.newLine();
        cout << "Enter Password: ";
        char ch;
        int i = 0;
        while (1)
        {
            ch = _getch();
            if (ch == '\r')
            {
                break;
            }
            else if (ch == '\b')
            {
                if (i > 0)
                {
                    printf("\b \b");
                    currPassword.pop_back();
                    i--;
                }
            }
            else
            {
                currPassword.push_back(ch);
                cout << "*";
            }
        }
        if (currPassword != details.ps)
        {
            nl.newLine();
            cout << "Incorrect password: ";
            nl.newLine();
            cout << "What do you want to do now?";
            nl.newLine();
            cout << "1. Try again";
            nl.newLine();
            cout << "2. Sign Up again";
            nl.newLine();
            cout << "3. Exit";
            nl.newLine();
            cout << "Enter your choice: ";
            int choice;
            cin >> choice;
            switch (choice)
            {
            case 1:
                login();
                break;
            case 2:
                signup();
                break;
            case 3:
                exit(0);
                break;
            default:
                cout << "You have entered wrong input...";
                nl.newLine();
                cout << "You will be redirected to log in page again...";
            }
        }
        nl.newLine();
        cout<<"Login Successful!";
        nl.newLine();
        l.loadingString("Loading Atharv's Mini Games!!");
        return 1;
    }
};

int main()
{
    system("cls");
    system("color F4");
    LoadingClass l;
    NewLines nl;
    // l.loadingBar();
    nl.multipleLines();
    cout<<"Welcome To Atharv's Mini Games";
    nl.multipleLines();
    cout<<"Loading...";
    l.loadingBar();
    system("cls");
    Menus menu(*details.username);
    // LoginSignupClass start;
    // start.signup();
    // l.loadingString("Login Page Loading...");
    // if (start.login())
        menu.mainMenu();
    return 0;
}