#include "game.h"

Game::Game(int ceilingNum)
{
    srand(time(0));
    maxNumber = ceilingNum;
    cout << "GAME CONSTRUCTOR: object initialized with " << ceilingNum << " as a maximum value" << endl;
}

void Game::play()
{
    randomNumber = rand() % maxNumber + 1;
    numOfGuesses = 0;
    while(playerGuess != randomNumber){
        cout << "Give your guess between 1-10" << endl;
        cin >> playerGuess;
        numOfGuesses++;
        if(playerGuess == randomNumber){
            cout << "Your guess is right = " << randomNumber << endl;
        }
        else if(playerGuess < randomNumber){
            cout <<  "Your guess is too small" << endl;
        }
        else if(playerGuess > randomNumber){
            cout << "Your guess is too big" << endl;
        }
    }
    printGameResult();
}

void Game::printGameResult()
{
    cout << "You guessed the right answer = " << randomNumber << " with " << numOfGuesses << " guesses" << endl;
}

Game::~Game()
{
    cout << "OBJECT DESTRUCTOR: object cleared from stack memory" << endl;
}
