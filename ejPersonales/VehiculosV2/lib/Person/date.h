//
// Created by leand on 2/5/2023.
//

#ifndef VEHICULOS_DATE_H
#define VEHICULOS_DATE_H

#include <iostream>

using namespace std;

class Date {
private:
    int Day;
    int Month;
    int Year;
public:
    Date(int day, int month, int year) {
        Day = day;
        Month = month;
        Year = year;
    }
};


#endif //VEHICULOS_DATE_H
