//
// Created by leand on 4/5/2023.
//

#ifndef TP_SUBASTAS_LOTE_H
#define TP_SUBASTAS_LOTE_H

#include <utility>

#include "oferta.h"

class Lote {
private:
    int nLote;
    string nombre;
    Oferta oferta;
public:
    Lote(int nLote, string nombre) {
        this->nLote = nLote;
        this->nombre = std::move(nombre);
    }
    void setOferta(Oferta &oferta) {
        this->oferta = oferta;
    }
};

#endif //TP_SUBASTAS_LOTE_H
