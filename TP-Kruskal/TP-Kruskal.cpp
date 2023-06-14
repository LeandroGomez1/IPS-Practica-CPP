// TP-Kruskal.cpp : Defines the entry point for the application.
//

#include "TP-Kruskal.h"

using namespace std;

int main()
{
	priority_queue <int> cola;
	cola.push(1);
	cola.push(3);
	cola.push(5);
	cola.push(7);
	cola.push(9);

	cout << "Tamaño de la cola (cola.size()): " << cola.size() << endl;
	cout << "Primer elemento (cola.top ()): " << cola.top() << endl;
	cout << "\nContenido : ";

	while (!cola.empty())
	{
		cout << '\t' << cola.top();
		cola.pop();
	}
	cout << '\n';

	return 0;
}
