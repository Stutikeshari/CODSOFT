#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand((unsigned int) time(NULL));
    int number = (rand()%100 ) +1;
    int guess=0;
    do{
        cout<<"ENTER THE NUMBER (1 to 100):";
        cin>>guess;
        if(guess>number)
            cout<<"GUESS LOWER!!"<<endl;
        else if(guess<number)
            cout<<"GUESS HIGHER!!"<<endl;
        else
            cout<<"HURRAY! **YOU WON**"<<endl;
    }
    while(guess!=number);
    return 0;
}
