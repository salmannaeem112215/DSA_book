#ifndef GAMEENTRY_H
#define GAMEENTRY_H

#include <iostream>
using namespace std;

// a game score entry
class GameEntry
{ 
private:
    string name; // player’s name
    int score;   // player’s score
public:
    GameEntry(const string &n = "", int s = 0); // constructor
    string getName() const;                     // get player name
    int getScore() const;                       // get score
    // friend class Score;
};

GameEntry::GameEntry(const string &n, int s ) : name(n), score(s){
}
string GameEntry::getName()const 
{  
    return name;
}
int GameEntry::getScore() const{
    return score;
}

#endif