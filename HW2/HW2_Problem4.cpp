#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void roll(int *Ptr1, int *Ptr2); //rolls both dice and assigns its random value to its pointer
void checkFR(int *Ptr1, int *Ptr2); //checks the first roll for win, lose, or points
void moreRolls(int *Ptr1, int *Ptr2, int points); //rolls dice if first roll is points

int main (){
    srand(time(0)); //keeps dice rolls completely random

    int Roll1 = 0;
    int* R1Ptr = &Roll1;
    int Roll2 = 0;
    int* R2Ptr = &Roll2;
    int points = 0;

    roll(R1Ptr, R2Ptr);
    cout << "You rolled " << Roll1  << " + " << Roll2 << " = " << Roll1 + Roll2 << endl;
    checkFR(R1Ptr, R2Ptr);

    return 0;
}

void roll(int *Ptr1, int *Ptr2){
    *Ptr1 = rand()% 6 + 1;
    *Ptr2 = rand()% 6 + 1;
}

void checkFR(int *Ptr1, int *Ptr2){
    int sum = *Ptr1 + *Ptr2;

    if(sum == 2 || sum == 3 || sum ==12){
        cout << "You lose" << endl;
    } else if(sum == 7 || sum == 11){
        cout << "You win" << endl;
    } else { 
        cout << "point is " << sum << endl;
        moreRolls(Ptr1, Ptr2, sum);
    }
}

void moreRolls(int *Ptr1, int *Ptr2, int points){
    roll(Ptr1, Ptr2);
    int sum = *Ptr1 + *Ptr2;
    cout << "You rolled " << *Ptr1 << " + " << *Ptr2 << " = " << sum << endl;

    if(sum == 7){
        cout << "You lose" << endl;
    } else if (sum == points){
        cout << "You win" << endl;
    } else {
        cout << "point is " << sum << endl;
        moreRolls(Ptr1, Ptr2, sum); //keep rolling till win or lose
    }
}