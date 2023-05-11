//
// Created by leand on 4/5/2023.
//

#ifndef TP_SUBASTAS_SUBASTA_H
#define TP_SUBASTAS_SUBASTA_H

#include "lote.h"
#include <vector>

class Subasta {
private:
    vector <Lote> lotes;
    int cantLotes;
public:
    Subasta(vector <Lote> lotes, int cant) {
        this->lotes = lotes;
        cantLotes = cant;
    }
    void setLote(Lote &lote) {
        this->lotes.push_back(lote);
    }
    void setOferta
};

#endif //TP_SUBASTAS_SUBASTA_H
