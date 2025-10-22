#ifndef MYDATE_H
#define MYDATE_H

#include <iostream>
#include <ctime> // For time()

class MyDate {
private:
    int year;
    int month; // 0-based: 0 for Jan, 11 for Dec
    int day;

    void updateDate(long elapsedTime); 

public:
    MyDate();

    MyDate(long elapsedTime);

    MyDate(int y, int m, int d);

    int getYear() const { return year; }
    int getMonth() const { return month; }
    int getDay() const { return day; }

    void setYear(int y) { year = y; }
    void setMonth(int m) { month = m; }
    void setDay(int d) { day = d; }

    void setDate(long elapsedTime);
};

#endif // MYDATE_H