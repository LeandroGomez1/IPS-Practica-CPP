#include <iostream>
using namespace std;



class Punto{
private:
	int cord_x;
	int cord_y;
	bool valida(int);
public:
	Punto(){cord_y = 0; cord_x = 0;}	
	// Punto():cord_y(0), cord_x(0){};

	void set(int, int);
	void print();
	
};


void Punto::set(int a, int b){
	if (valida(a) && valida(b)){
		cord_x = a;
		cord_y = b;
	}else
		cout <<	"un numero ingresado es incorrecto" << endl;
}

void Punto::print(){

	cout<< "punto x = " << cord_x << " punto y = " << cord_y << endl;
}

bool Punto::valida( int z){
	if (z > 0)
		return true;
	else
		return false;
}

class Rectangulo{
private:
	Punto tope_izq;
	Punto inf_der;
public:
	Rectangulo(int x, int y, int z, int w){
		tope_izq.set(x, y);
		inf_der.set(z, w);
		//tope_izq = new Punto();
		//tope_izq->set(x, y);
	}
	void print(){
		tope_izq.print();
		inf_der.print();
	}
};

int main (){
	Rectangulo R(5, -8, 20, 25);
	R.print();
	Punto P;
	P.valida(5);

	return 0;
}
