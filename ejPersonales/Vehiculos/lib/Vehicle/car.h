//
// Created by leand on 2/5/2023.
//

#ifndef VEHICULOS_CAR_H
#define VEHICULOS_CAR_H

#include "vehicle.h"

class Car:public Vehicle {
public:
    Car(string make, string model, string color, string transmission, int year, string dom):
            Vehicle(std::move(make),std::move(model),std::move(color),
                    std::move(transmission), year,std::move(dom)) {

    }
    void getInfo() override {
        cout << "----------" << endl;
        cout << "Vehicle type: Car" << endl;
        cout << "Make: " << Make << endl;
        cout << "Model: "<< Model << endl;
        cout << "Color: " << Color << endl;
        cout << "Transmission: " << Transmission << endl;
        cout << "Km: " << Kilometers << endl;
        cout << "Year: " << Year << endl;
        cout << "Domain: " << Domain << endl;
    }
};

#endif //VEHICULOS_CAR_H
