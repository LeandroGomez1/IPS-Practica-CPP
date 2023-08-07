#include <iostream>
using namespace std;
int main()
{
	int result, num1, num2, opSelection;
	string operation;
	cout << "Ingrese el numero de operacion que desea realizar:" << endl <<
		"\t1.Suma" << endl <<
		"\t2.Resta" << endl <<
		"\t3.Multiplicacion" << endl <<
		"\t4.Division" << endl <<
		"\t>> ";
	cin >> opSelection;
	cout << "Ingrese los numeros:" << endl;
	cin >> num1 >> num2;
	switch (opSelection)
	{
	case 1:
		result = num1 + num2;
		operation = "suma";
		break;
	case 2:
		result = num1 - num2;
		operation = "resta";
		break;
	case 3:
		result = num1 * num2;
		operation = "multiplicacion";
		break;
	case 4:
		result = num1 / num2;
		operation = "division";
		break;
	default:
		break;
	}
	cout << "El resultado de la " << operation << 
		" entre " << num1 << " y " << num2 <<
		" es igual a " << result << endl;
	
	return 0;
}