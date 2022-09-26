#include<iostream>
#include<conio.h>
using namespace std;

long int recursiveFactorial(long int n){
    if(n==0){
        return 1;
    }
    else{
        return n*recursiveFactorial(n-1);
    }
}


int main(){

    int num;

    cout<<"This program will find a factorial of a number "<<endl;
    do{
    cout<<"Enter Num -> ";
    cin>>num;
    }while(num<0);

    cout<<"Facotrial of Num:"<<num<<"  = "<<recursiveFactorial(num)<<endl;

}   