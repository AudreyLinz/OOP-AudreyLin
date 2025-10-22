#include "MyDate.h"
#include <iostream>

using namespace std;

void MyDate::updateDate(long elapsedTime) {
    time_t t = static_cast<time_t>(elapsedTime);
    
    tm* localTime = localtime(&t); 

    year = localTime->tm_year + 1900;
    month = localTime->tm_mon; 
    day = localTime->tm_mday;
}

MyDate::MyDate() {
    long currentTime = time(0);
    updateDate(currentTime);
}

MyDate::MyDate(long elapsedTime) {
    updateDate(elapsedTime);
}

MyDate::MyDate(int y, int m, int d) : year(y), month(m), day(d) {}

void MyDate::setDate(long elapsedTime) {
    updateDate(elapsedTime);
}

int main() {
    MyDate date1;

    // 2. Create second MyDate object using MyDate(3435555513)
    long elapsedSeconds = 3435555513L; // L suffix for long literal
    MyDate date2(elapsedSeconds);
    
    // --- Display Results ---
    cout << "Date 1 (Current Date):\n";
    cout << "Year: " << date1.getYear() << endl;
    cout << "Month (0=Jan): " << date1.getMonth() << endl;
    cout << "Day: " << date1.getDay() << endl;

    cout << "\nDate 2 (Elapsed Time: " << elapsedSeconds << "s):\n";
    cout << "Year: " << date2.getYear() << endl;
    cout << "Month (0=Jan): " << date2.getMonth() << endl;
    cout << "Day: " << date2.getDay() << endl;

    /*
    long hintSeconds = 561555550L;
    MyDate dateHint(hintSeconds);
    cout << "\nHint Verification (" << hintSeconds << "s):\n";
    cout << "Expected: Year=1987, Month=9, Day=18\n";
    cout << "Actual: Year=" << dateHint.getYear() << ", Month=" << dateHint.getMonth() << ", Day=" << dateHint.getDay() << endl;
    */
    return 0;
}