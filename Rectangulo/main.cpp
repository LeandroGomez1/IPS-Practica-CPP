#include <iostream>
#include "lib/rectangulo.h"

using namespace std;

Punto :: Punto() {
    cord_x = 0;
    cord_y = 0;
}

bool Punto::set(int x, int y) {
    if((valida(x)) && valida(y)) {
        cord_x = x;
        cord_y = y;
        return true;
    } else
        return false;
}

bool Punto::valida(int x) {
    if(x >= 0)
        return true;
    else
        return false;

}

void Punto::print() const {
    cout << "Coordenada x = " << cord_x << endl << "Coordenada y: " << cord_y << endl;
}

//----------------------------------------------------------------------------------
Rectangulo::Rectangulo(int x1, int y1, int x2, int y2) {
    if(tope_izq.set(x1, y1))
        tope_izq.set(x1, y1);
    else if(inf_der.set(x2,y2))
        inf_der.set(x2,y2);
    else
        cout << "Mal dato" << endl;
}
void Rectangulo::print() {
    cout << "El rectangulo esta compuesto por: Punto tope_izq: " << tope_izq.print()
    << "Punto inf_der: " << inf_der.print() << endl;
}

int main() {
    return 0;
}
