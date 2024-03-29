#include <iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;


int main()
{
    srand( time(NULL) );                      
    int randomNo, count = 0;
    int guessedNo = -1;
    randomNo = rand()%100;              

    while (randomNo != guessedNo)
    {

        cout << "\nRandom Number Range: 0 - 100\n";
        cout << "\nGuess the number :  ";
        cin >> guessedNo;

        cout<<"\033[2J\033[1;1H";                      
        
        if (randomNo == guessedNo)
        {
            cout << "YOU WON! \n";
            cout << "Total times guessed : " << count + 1;
        }
        else
        {
            count++;
            cout << "\nWrong guesses count : " << count;
            if (guessedNo > randomNo)
            {
                cout << "\nHINT : Your guess is too high.";
            }
            else
            {
                cout << "\nHINT: Your guess is too low.";
            }
        }
    }

    return 0;
}
