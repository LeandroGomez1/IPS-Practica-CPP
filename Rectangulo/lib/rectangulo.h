//
// Created by leand on 13/04/2023.
//

#ifndef RECTANGULO_RECTANGULO_H
#define RECTANGULO_RECTANGULO_H

#include <iostream>

using namespace std;

class Punto {
private:
    int cord_x;
    int cord_y;
    static bool valida(int);
public:
    Punto();
    bool set(int,int);
    void print() const;
};

// -------------------------------------------------

class Rectangulo {
private:
    Punto tope_izq;
    Punto inf_der;
public:
    Rectangulo(int,int,int,int);
    this.tope_izq = tope_izq;
};

#endif //RECTANGULO_RECTANGULO_H
