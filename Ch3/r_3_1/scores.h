#ifndef SCORES_H
#define SCORES_H

#include <iostream>
#include "gameEntry.h"
using namespace std;

class Scores
{ // stores game high scores
private:
    int maxEntries;     // maximum number of entries
    int numEntries;     // actual number of entries
    GameEntry *entries; // array of game entries
public:
    Scores(int maxEnt = 10);      // constructor
    ~Scores();                    // destructor
    void add(const GameEntry &e); // add a game entry
    GameEntry remove(int i)  ;     // remove the ith entry
    //  throw( IndexOutOfBounds);
    void display();

};

Scores::Scores(int maxEnt){
    entries = new GameEntry[maxEnt];
    maxEntries = maxEnt;
    numEntries = 0;
}

Scores::~Scores(){
    delete [] entries;
}

void Scores::add(const GameEntry &e){
   int newScore = e.getScore();
   if(numEntries == maxEntries){
    if(newScore<= entries[maxEntries-1].getScore() ){
        return;
    }
   }
   else{
    numEntries++;
   }

   //Code to add 
   int index = numEntries-2;
   while(index>=0 && newScore>entries[index].getScore()  ){
    entries[index+1] = entries[index];
    index--;
   }
   entries[index+1]=e;
}

GameEntry Scores::remove(int i){
    if(i<0 ||i>=numEntries){
        cout<<"Invalid Index"<<endl;
        GameEntry null("Null",0);
        return null; 
    }
    else{
        GameEntry e = entries[i];
        for(int j=i+1;j<numEntries;j++){
            entries[j-1] = entries[j];
        }
        // cout<<"Error"<<endl;
        numEntries--;
        return e;
    }
}

void Scores::display(){
    cout<<"NO. \t Name \t Score "<<endl;
    for(int i=0 ;i<numEntries ;i++){
        cout<<i+1<<"\t "<<entries[i].getName()<<"\t"<<entries[i].getScore()<<endl;
    }
    cout<<endl;
}

#endif