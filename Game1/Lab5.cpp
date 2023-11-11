#include "Lab5.hpp"
#include <iostream>
#include <time.h>
#include <string>
using namespace std;

void StartInput ()
{
    srand(time(NULL));
    int guess;
        cout << "Guess a Number between 1 and 100" << " 'T' Ends the program" << endl;
        cin >> guess;
}
void CaseInput ()
{
    int guesses = 20;
    int guess;
    int ranGus = rand() % 100 + 0;
    while (guesses <=2)
    {
        if (guess==ranGus)
        {
            switch (guess)
            {
                case 1: cout << "Perfect!" << endl;
                    break;
                case 2: cout << "Correct!" << endl;
                    break;
                case 3: cout << "Your guess is absolutely right" << endl;
                    break;
                case 4: cout << "Entirely right." << endl;
                    break;
                case 5: cout << "From my body and your soul you are right!" << endl;
                    break;
                case 6: cout << "Totally!" << endl;
                    break;
                case 7: cout << "Quite right!" << endl;
                    break;
                case 8: cout << "Amazing!" << endl;
                    break;
                case 9: cout << "You've willed yourself to be a winner." << endl;
                    break;
                case 10: cout << "Wonderful!" << endl;
                    break;
            }
        }
            if (guess!=ranGus)
            {
                switch (guess)
                {
                    case 1: cout << "Wrong! " << "You have " << guesses - 1 << " guesses left." << endl;
                        cin >> guess;
                        guesses--;
                    case 2: cout << "You are mistakenly wrong" << "You have " << guesses - 1 << " guesses left." << endl;
                        cin >> guess;
                        guesses--;
                    case 3: cout << "Horrible guess" << "You have " << guesses - 1 << " guesses left." << endl;
                        cin >> guess;
                        guesses--;
                    case 4: cout << "Terrific? No terrible." << "You have " << guesses - 1 << " guesses left." << endl;
                        cin >> guess;
                        guesses--;
                    case 5: cout << "Rubbish!" << "You have " << guesses - 1 << " guesses left." << endl;
                        cin >> guess;
                        guesses--;
                    case 6: cout << "Incorrect!" << "You have " << guesses - 1 << " guesses left." << endl;
                        cin >> guess;
                        guesses--;
                    case 7: cout << "You havent got a clue? That is wrong." << "You have " << guesses - 1 << " guesses left." << endl;
                        cin >> guess;
                        guesses--;
                    case 8: cout << "That is not quite right." << "You have " << guesses - 1 << " guesses left." << endl;
                        cin >> guess;
                        guesses--;
                    case 9: cout << "False guess. Try again." << "You have " << guesses - 1 << " guesses left." << endl;
                        cin >> guess;
                        guesses--;
                    case 10: cout << "...no you are wrong." << "You have " << guesses - 1 << " guesses left." << endl;
                        cin >> guess;
                        guesses--;
                }
            }
            if (guess > 100 || guess < 0)
            {
                cout << "Guess between 0 and 100 not " << guess << "!" << endl;
                cout << "Still counts as a guess! " << "You only have " << guesses - 1 << " guesses left." << endl;
                cin >> guess;
                guesses--;
            }
            if (guesses == 1)
            {
                cout << "You've ran out guesses." << endl;
                cout << "The random number was: " << ranGus << endl;
            }
    }
} void EndInput ()
        {
            bool runAgain = true;
            char restart;
            cout << "Would you like to restart? Type y or n" << endl;
            cin >> restart;
            
            if (restart == 'y')
            {
                runAgain = true;
            }
            else
            {
                runAgain = false;
            }
        }
