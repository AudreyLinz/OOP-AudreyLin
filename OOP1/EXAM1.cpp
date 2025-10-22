#include <iostream>

using namespace std;

void reverseArray(int* arr, int size);
void printArr(int* arr, int size);

int main(){
    int const size = 5;
    int arr[size] = {1, 2, 3, 4, 5};
    cout << "array: ";
    printArr(arr,size);
    reverseArray(arr, size);

    return 0;
}

void printArr(int* arr, int size){
    for(int i = 0; i<size; i++){
        if(i!=size-1){
        cout << arr[i] << ", ";
        } else {
            cout << arr[i] << endl;
        }
    }
}

void reverseArray(int* arr, int size){
    int x = 1;
    for(int i = 0;i<2;i++){
        int temp = arr[i];
        arr[i] = arr[size-x];
        arr[size-x] = temp;
        x++;
    }
    cout << "reversed array: ";
    printArr(arr, size);
}

    //int x = 1;
    //string msg = (x%2==0)? "YES": "NO";
    //cout << msg << endl;

    //cout << setw(40) << right << "* Hello, World! *" << endl;
/*
struct Student{
    string name;
    int score;
};

int main(){
    Student s1;
    s1.name = "balls";
    s1.score = 75;

    Student s2;
    s2.name = "bob the builder";
    s2.score = 90;

    cout << "threshold? ";
    int threshold;
    cin >> threshold;
    
    if(s1.score >= threshold){
        cout << s1.name << ": " << s1.score << endl;
    }
    if(s2.score >= threshold){
        cout << s2.name << ": " << s2.score <<endl;
    }

    return 0;
}
*/