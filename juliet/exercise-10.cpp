#include <iostream>
#include "std_lib_facilities.h"
int main()
{
    cout << "Type 0 for Rock, 1 for Paper, or 2 for Scissors.\n";
    srand(time(nullptr));
    int random = rand() % 3;
    int user = 0;
    cin >> user;

    vector <string> choice(3);
    choice[0] = "Rock";
    choice[1] = "Paper";
    choice[2] = "Scissors";

    cout << "You selected:" << choice[user] << '\n';
    cout << "The computer selected:" << choice[random] << '\n';

/*    switch (random == 1) // if i choose rock
    {
    case '1':
        cout << "Tie!\n";
        break;
    case '2':
        cout << "Computer wins!\n";
        break;
    case '3':
        cout << "You win!\n";
        break;
    }
    switch (random == 2) // if i choose paper
    {
    case '1':
        cout << "You win!\n";
        break;
    case '2':
        cout << "Tie!\n";
        break;
    case '3':
        cout << "Computer wins!\n";
        break;
    }
    switch (random == 3) // if i choose scissors
    {
    case '1':
        cout << "Computer wins!\n";
        break;
    case '2':
        cout << "You win!\n";
        break;
    case '3':
        cout << "Tie!\n";
        break;
    } */
}