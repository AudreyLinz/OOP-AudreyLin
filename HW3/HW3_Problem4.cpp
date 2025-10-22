#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

class Attendance {
public:
    Attendance(const string& atd) : attendance(atd) {}

    bool checkAttendance() const { // returns true if Absences < 2
        return !isAbsent() && !isLate(); 
    }

private:
    string attendance;

    bool isAbsent() const { // returns true if Absences =< 2
        return count(attendance.begin(), attendance.end(), 'A') >= 2;
    }

    bool isLate() const { // return true if late >= 3
        return attendance.find("LLL") != string::npos;
    }
};

int main(void) {
    Attendance atd1("PPALLP");
    Attendance atd2("PPALLL");

    (atd1.checkAttendance()) ? cout << "PASSED" : cout << "FAILED";
    cout << endl;
    (atd2.checkAttendance()) ? cout << "PASSED" : cout << "FAILED";
    cout << endl;

    return 0;
}

/*
Output:
FAILED
FAILED
*/