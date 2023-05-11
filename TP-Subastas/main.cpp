#include <iostream>
#include "lib/personas.h"

int main() {

    Persona p1 ("Jorgito");
    Persona p2 =  Persona("Pedrito");

    cout << p1.getNombre() << endl;
    cout << p2.getNombre() << endl;

    return 0;
}
