#include <iostream>
#include "std_lib_facilities.h"
int main()
{
    cout << "Type 0 for Rock, 1 for Paper, or 2 for Scissors.\n";
    int random = rand() % 2 + 1;
    srand(time(0));
    int user = 0;
    cin >> user;
    cout << user << '\n';

    vector <string> choice(3);
    choice[0] = "Rock";
    choice[1] = "Paper";
    choice[2] = "Scissors";

    string choices;
    while (cin >> random)
    {
        choices.push_back(random);
    }

    cout << choices << '\n'; // testing

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