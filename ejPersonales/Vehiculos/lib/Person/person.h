//
// Created by leand on 2/5/2023.
//

#ifndef VEHICULOS_PERSON_H
#define VEHICULOS_PERSON_H

#include <iostream>
#include <utility>
#include "date.h"
#include "location.h"

using namespace std;

class Person { //:public Date {
private:
    string Name;
    string Surname;
public:
    Person(string name, string surname) { //: Date(day, month, year) {
        Name = std::move(name);
        Surname = std::move(surname);
    }
};

#endif //VEHICULOS_PERSON_H
