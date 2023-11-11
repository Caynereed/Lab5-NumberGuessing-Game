// Random Number Guessing Game
#include <iostream>
#include <time.h>
#include <string>
using namespace std;
void StartInput();
void CaseInput();
void EndInput ();
int main()
{
    bool runAgain = true;
    do
    {
        StartInput();
        CaseInput();
        EndInput();
    }while (runAgain == true);
    
    return 0;
}

