#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main (){
    srand(time(0));
    cout << rand() << endl;
    return 0;
}