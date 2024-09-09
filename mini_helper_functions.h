#include<iostream>
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<conio.h>
#ifndef MINI_HELPER_FUNCTIONS_H
#define MINI_HELPER_FUNCTIONS_H
#define MAX_CONTENT_SIZE 70

using namespace std;

class NewLines{
    public:
        void newLine(){
            printf("\n\n\t\t\t");
        }
        void multipleLines(){
            cout<<"\n\n\n\n\n\t\t\t";
        }

};

class LoadingClass{
NewLines l;
    public:
        void loadingString(string str){
            l.multipleLines();
            l.multipleLines();
            for(int i = 0 ; i < MAX_CONTENT_SIZE-2-str.length() ; i++ ){
                if(i==(70-str.length())/2){
                    cout<<" "<<str<<" ";
                }
                // Sleep(30);
                cout<<"\xB2";
            }
            
        }
        void loadingBar(){
            l.multipleLines();
            for(int i = 0 ; i < MAX_CONTENT_SIZE ; i++ ){
                Sleep(30);
                cout<<"\xB2";
            }
        }
};

#endif // MINI_HELPER_FUNCTIONS_H

// int main(){
//     system("color F4");

//     LoadingClass l1;
//     l1.loadingString("Atharv");
//     return 0;
// }