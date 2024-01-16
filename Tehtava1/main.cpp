#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int game(int maxnum){
    int answer=0;
    srand(time(0));
    int randomNum = rand() % maxnum;
    int tries = 0;
    while(answer != randomNum){
        cout << "Guess which number's on my mind. The value of my number ranges from 0 to " << maxnum << "." << endl;
        cin >> answer;
        if(answer == randomNum){
            cout << "You guessed correctly, you win!" << endl;
            tries++;
        }
        else if(answer < randomNum){
            cout <<  "The number is larger than the one you tried to guess with." << endl;
            cout << "Try again!" << endl;
            tries++;
        }
        else if(answer > randomNum){
            cout << "The number is smaller than the one you tried to guess with." << endl;
            cout << "Try again!" << endl;
            tries++;
        }
    }
    return tries;
}

int main()
{
    //
    int ceilingNum = 0;
    cout << "Input a desired max number for the game: " << endl;
    cin >> ceilingNum;
    int triesResults = game(ceilingNum);
    cout << "You tried to guess " << triesResults << " times." << endl;
    return 0;
}

