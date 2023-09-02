#include <iostream>
#include "game.h"
#include <cstdlib>
#include <ctime>
using namespace std;

Game::Game(int maxNumber) : maxNumber(maxNumber) {
    cout << "GAME CONSTRUCTOR: object initialized with " << maxNumber << " as a maximum value"<< endl;
    srand(time(0));
    randomNumber = rand() % maxNumber + 1;
}

void Game::play() {

    while (playerGuess != randomNumber) {
        cout << "Give your guess between 1-"<< maxNumber << endl;
        cin >> playerGuess;
        numOfGuesses += 1;

        if (playerGuess > randomNumber) {
            cout << "Your guess is too big" << endl;
        }
        if (playerGuess < randomNumber) {
            cout << "Your guess is too small" << endl;
        }
    }
    cout << "Your guess is right = " << randomNumber << endl;
    printGameResult();
}

Game::~Game()
{
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}

