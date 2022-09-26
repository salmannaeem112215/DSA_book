#include<iostream>
#include<conio.h>
#include "scores.h"
using namespace std;

int main(){
    GameEntry Score1("Salman",123);
    GameEntry Score2("Naeem",1123);
    GameEntry Score3("Sadiq",1233);
    GameEntry Score4("Farjad",1223);
    GameEntry Score5("Nouman",1230);

    Scores match(10);

    match.add(Score1);
    match.add(Score2);
    match.add(Score3);
    match.add(Score4);
    match.add(Score5);

    match.display();

    match.remove(1);
    match.remove(1);
    match.display();



}