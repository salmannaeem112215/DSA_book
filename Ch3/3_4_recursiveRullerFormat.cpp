#include<iostream>
#include<conio.h>
using namespace std;

void drawOneTick(int tickLength , int tickLabel =-1){
    for(int i =0 ;i<tickLength ;i++){
        cout<<"-";
    }
    if(tickLabel>=0){
        cout<<" "<<tickLabel;
    }
        cout<<endl;
}
//Recursive calling 
void drawTick(int tickLength){
    if(tickLength>0){
        drawTick(tickLength-1);
        drawOneTick(tickLength); // will print ---- +endl or only endl ;
        drawTick(tickLength-1);
    }
}

void drawRuller(int nInches, int majorLength){
    drawOneTick(majorLength,0);
    for(int i=1 ;i<=nInches ;i++){
        drawTick(majorLength-1); // inches btwn body handel by this 
        drawOneTick(majorLength,i);  // inches number marker
    }
}


int main(){

    int inches,tickLength;

    cout<<"This program will Display a Ruller Format in Inches  "<<endl;
    cout<<"Input- Inches + tick_length "<<endl;
    // do{
    // cout<<"Enter Inches-> ";
    // cin>>inches;
    // }while(inches<1);
    // do{
    // cout<<"Enter Tick Length -> ";
    // cin>>tickLength;
    // }while(tickLength<1);

    inches = 1;
    tickLength =1;

    drawRuller(inches,tickLength);

}   