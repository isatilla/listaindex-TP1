#include <iostream>
#include <limits>
#include <string>
#include <sstream>
#include "include/ListaPlantilla.h"
#include "include/ListaIndexArreglo.h"
#include "include/LIndexLSE.h"

using namespace std;

int main(int argc, char *argv[]) {

	ListaIndexArreglo<int> L;
	cout << L.NumElem() << endl;

	L.Insertar(1, -1);
	L.Insertar(2, 10);
	L.Insertar(3, 69);
	L.Insertar(4, 7);
	cout << L.NumElem() << endl;

	cout << "Recorrido desde el primero" << endl;
	ListaIndexArreglo<int>::pos_t pos = 1;
	while (pos<=L.num_elem) {
		cout << L.Recuperar(pos) << " ";
		pos++;
	}
	cout << endl;

	cout << "Recorrido desde el ultimo" << endl;
	pos = L.num_elem;
	while (pos>=1) {
		cout << L.Recuperar(pos) << " ";
		pos--;;
	}
	cout << endl;
	cout << endl;

	pos = 1;
	cout << "Ahora borramos una posicion..." << endl;
	cout << "Borrando " << L.Recuperar(pos) << endl;
	cout << endl;
	L.Borrar(pos);
	cout << "Ahora hay: " << L.NumElem() << endl;


	cout << "Recorrido desde el primero" << endl;
	pos = 1;
	while (pos<=L.NumElem()) {
		cout << L.Recuperar(pos) << " ";
		pos++;
	}
	cout << endl;

	cout << "Recorrido desde el ultimo" << endl;
	pos = L.num_elem;
	while (pos>=1) {
		cout << L.Recuperar(pos) << " ";
		pos--;
	}
	cout << endl;
	cout << endl;
    cout << "Ahora por lista simplemente enlazada" << endl;
	LIndexLSE<int> L2;
	cout << L2.NumElem() << endl;
	L2.Insertar(1, -1);
	L2.Insertar(2, 10);
	L2.Insertar(3, 69);
	L2.Insertar(4, 7);
	cout << L2.NumElem() << endl;
	cout << endl;
	L2.imprimir();
	cout << endl;
	cout << "Borrando un elemento en indice 1" << endl;
	L2.Borrar(1);
	L2.imprimir();
	cout << endl;
	L2.ModificarElem(1,5);
	L2.imprimir();
	L2.Intercambiar(1,2);
	L2.imprimir();
	return 0;
}

