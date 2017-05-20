#include <iostream>
#include <limits>
#include <string>
#include <sstream>
#include "include/ListaPlantilla.h"
#include "include/ListaIndexArreglo.h"
#include "include/LIndexLSE.h"

using namespace std;

void Esperar()
{
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.clear();
	cout << "Presione ENTER para continuar..." << endl;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.clear();
}
void MenuListaIndex()
{
    cout << "Usted escogio la Lista Indexada" << endl;
    ListaIndexArreglo<int> L;
    //LIndexLSE<int> L;
    bool continuar = true;
	int opcion;
	while(continuar){
		cout << "¿Qué acción desea realizar?" << endl;
		cout << "\t0 - Imprimir Lista" << endl;
		cout << "\t1 - Iniciar" << endl;
		cout << "\t2 - Destruir" << endl;
		cout << "\t3 - Vacía" << endl;
		cout << "\t4 - Vaciar" << endl;;
		cout << "\t5 - Recuperar" << endl;
		cout << "\t6 - Insertar" << endl;
		cout << "\t7 - Borrar" << endl;
		cout << "\t8 - ModificarElem" << endl;
		cout << "\t9 - Intercambiar" << endl;
		cout << "\t10 - NumElem" << endl;
		cout << "\t11 - Salir" << endl;

		cin >> opcion;
		int s;
        int i;
		switch (opcion) {
			case 0:
				L.Imprimir();
				break;
			case 1:
				cout << "Iniciando la lista!" << endl;

				Esperar();
				break;
			case 2:
				cout << "Destruyendo la lista!" << endl;
				L.Destruir();
				L = NULL;
				Esperar();
				break;
			case 3:
				if (L.Vacia())
					cout << "La lista está vacía." << endl;
				else
					cout << "La lista no está vacía." << endl;
				Esperar();
				break;
			case 4:
				cout << "Vaciando la lista..." << endl;
				L.Vaciar();
				Esperar();
				break;
			case 5:
				cout << "Indique un índice de la lista." << endl;
				int i;
				cin >> i;
				cout << "El elemento es: " << L.Recuperar(i) << endl;
				Esperar();
				break;
			case 6:
				cout << "Indique un indice de la lista." << endl;
                int p;
                cin >> p;
				cout << "Indique un elemento para insertar." << endl;
				cin >> s;
				L.Insertar(p, s);
				Esperar();
				break;
			case 7:
				cout << "Indique un indice de la lista." << endl;
				cin >> i;
				L.Borrar(i);
				Esperar();
				break;
			case 8:
				cout << "Indique un indice de la lista." << endl;
				cin >> i;
				cout << "Indique un elemento para modificarlo." << endl;
				int stri;
				cin >> stri;
				L.ModificarElem(i, stri);
				Esperar();
				break;
			case 9:
				int i1,i2;
				cout << "Indique un indice de la lista." << endl;
				cin >> i1;
				cout << "Indique otro indice de la lista." << endl;
				cin >> i2;
				cout << "Intercambiando " << L.Recuperar(i1) << " y " << L.Recuperar(i2) << endl;
				L.Intercambiar(i1, i2);
				Esperar();
				break;
			case 10:
				cout << "La lista tiene " << L.NumElem() << " elementos." << endl;
				Esperar();
				break;
			case 11:
				cout << "Volviendo al menu principal." << endl;
				continuar = false;
				Esperar();
				break;
			default:
				cout << "Por favor indique un numero del 0 al 16." << endl;
				Esperar();
				break;
		}
	}
}
int main(int argc, char *argv[]) {

	MenuListaIndex();
	return 0;


}
