#include <iostream>
using namespace std;

class Motor {
private:
    int Cylinders;
    int Horsepower;
    int Torque;
    string Fuel;
public:
    Motor(int cyl, int hp, int torq, string fuel) {
        Cylinders = cyl;
        Horsepower = hp;
        Torque = torq;
        Fuel = fuel;
    }
    void getMotorInfo() {
        cout << "HP: " << Horsepower << endl;
        cout << "Torque: " << Torque << endl;
        cout << "Cylinders: " << Cylinders << endl;
        cout << "Fuel: " << Fuel << endl;
    }
};

class Car {
private:
    string Make;
    string Model;
    Motor Motor;
    string Color;
    string Transmission;
    int Kilometers;
    string Domain;
public:
    Car(string make, string model, string color, string transmission, int km, string dom, class Motor motor1) {
        Make = make;
        Model = model;
        Motor = motor1;
        Color = color;
        Transmission = transmission;
        Kilometers = km;
        Domain = dom;
    }
    void getCarInfo() {
        cout << "Make: " << Make << endl;
        cout << "Model: "<< Model << endl;
        cout << "Color: " << Color << endl;
        Motor.getMotorInfo();
        cout << "Transmission: " << Transmission << endl;
        cout << "Km: " << Kilometers << endl;
        cout << "Domain: " << Domain << endl;
    }
};

int main() {
    Car car1("Volvo", "S80", "Azul", "Automatico", 68700, "JKJ 312");
    car1.getCarInfo();

    return 0;
}
