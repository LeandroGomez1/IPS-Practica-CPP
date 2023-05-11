//
// Created by leand on 4/5/2023.
//

#ifndef TP_SUBASTAS_OFERTA_H
#define TP_SUBASTAS_OFERTA_H

#include <iostream>
#include <utility>
#include "personas.h"


class Oferta {
private:
    float monto;
    Persona p;
public:
    Oferta() {};
    Oferta(float monto, Persona &p) {
        this->monto = monto;
        this->p = p;
    }
    float getMonto() {
        return monto;
    }
    Persona& getOfertante() {
        return p;
    }
};

#endif //TP_SUBASTAS_OFERTA_H
