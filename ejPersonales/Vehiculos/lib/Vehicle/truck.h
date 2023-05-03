//
// Created by leand on 2/5/2023.
//

#ifndef VEHICULOS_TRUCK_H
#define VEHICULOS_TRUCK_H

#include "vehicle.h"

class Truck:public Vehicle {
private:
    int Ejes;
public:
    Truck(string make, string model, string color, string transmission, int year, string dom, int ejes):
            Vehicle(std::move(make),std::move(model),std::move(color),
                    std::move(transmission), year,std::move(dom)) {
        Ejes = ejes;
    }
    void getInfo() override {
        cout << "----------" << endl;
        cout << "Vehicle type: Truck" << endl;
        cout << "Make: " << Make << endl;
        cout << "Model: "<< Model << endl;
        cout << "Color: " << Color << endl;
        cout << "Transmission: " << Transmission << endl;
        cout << "Km: " << Kilometers << endl;
        cout << "Year: " << Year << endl;
        cout << "Domain: " << Domain << endl;
        cout << "Ejes: " << Ejes << endl;
    }
};

#endif //VEHICULOS_TRUCK_H
