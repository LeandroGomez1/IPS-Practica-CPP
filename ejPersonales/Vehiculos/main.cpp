#include <iostream>
#include "lib/Vehicle/car.h"
#include "lib/Vehicle/truck.h"

using namespace std;

int main() {
    int km;

    Vehicle * car1 = new Car("Audi","RS4","Blue","Manual",2009,"IAD 814");
    Vehicle * car2 = new Car("BMW","M5","Bordeaux","Manual",2003,"BDA 221");
    Vehicle * truck1 = new Truck("Scania","700R","Black","Automatic",2016,
                                 "AA 233 BD",3);
    Vehicle * truck2 = new Truck("Volvo","FH750","White","Automatic",2019,
                                 "AC 893 KG",2);

    Vehicle * vehicles[4] = {car1,car2,truck1,truck2};

    cout << "Enter the km of the stored vehicles." << endl;
    for(auto & vehicle : vehicles) {
        cout << "--------------" << endl;
        vehicle->getVehicleID();
        cout << "Km: ";
        cin >> km;
        vehicle->setKm(km);
    }
    system("cls");

    cout << "Displaying data of stored vehicles." << endl;
    for(auto & vehicle : vehicles) {
        vehicle->getInfo();
    }

    return 0;
}
