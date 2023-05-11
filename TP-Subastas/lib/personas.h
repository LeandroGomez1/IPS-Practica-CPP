//
// Created by leand on 4/5/2023.
//

#ifndef TP_SUBASTAS_PERSONAS_H
#define TP_SUBASTAS_PERSONAS_H

#include <iostream>
#include <utility>

using namespace std;

class Persona {
private:
    string nombre;
public:
    Persona() {};

    Persona(string n) {
        nombre = std::move(n);
    }

    string getNombre() {
        return nombre;
    }
};
#endif //TP_SUBASTAS_PERSONAS_H
