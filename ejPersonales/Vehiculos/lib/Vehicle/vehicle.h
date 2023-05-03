//
// Created by leand on 2/5/2023.
//

#ifndef VEHICULOS_VEHICLE_H
#define VEHICULOS_VEHICLE_H

#include <iostream>
#include <utility>
//#include "Person/person.h"

using namespace std;

class Vehicle { //:public Person {
protected:
    string Make;
    string Model;
    string Color;
    string Transmission;
    int Kilometers;
    int Year;
    string Domain;
public:
    Vehicle(string make, string model, string color, string transmission, int year,
            string dom) { //: Person(std::move(name), std::move(surname)) {
        Make = std::move(make);
        Model = std::move(model);
        Color = std::move(color);
        Transmission = std::move(transmission);
        Kilometers = 0;
        Year = year;
        Domain = std::move(dom);
    }
    void setKm(int km) {
        if(km >= 0)
            Kilometers = km;
    }
    void getVehicleID() {
        cout << Make << " " << Model << " - Domain: " << Domain << endl;
    }
    virtual void getInfo() = 0;
};

#endif //VEHICULOS_VEHICLE_H
