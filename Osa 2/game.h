#ifndef GAME_H
#define GAME_H
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

class Game
{

public:
    Game(int maxNumber);
    void play();
    ~Game();

private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses = 0;
    void printGameResult() {
        cout<<"You guessed the right answer = "<< randomNumber << " with "<< numOfGuesses << " guesses"<< endl;
    };

};

#endif // GAME_H
