#ifndef __ListaIndexLSE_H__
#define __ListaIndexLSe_H__
#include "ListaPlantilla.h"
#include <cstdlib>
#include <iostream>
using namespace std;

template <typename E>
class NodoSimple: public Nodo<E>{
	public:
		NodoSimple* sig;
};

/*! Clase que implementa el modelo Lista Indexada
 * mediante una lista simplemente enlazada.
 */
template <typename E>
class ListaIndexLSE {

	public:
		typedef NodoSimple<E> node_t;
		typedef NodoSimple<E>* der_pos_t;
		typedef Nodo<E>* pos_t;
		typedef int pos;
        int num_elem;

		/*! Constructor por defecto.
		 */
		ListaIndexLSE():primera(NULL), ultima(NULL), num_elem(0){};

		/*! Destructor por defecto.
		 */
		virtual ~ListaIndexLSE(){
			Vaciar();
		};

		bool Vacia() {
			return num_elem == 0;
		};

		void Vaciar() {
			der_pos_t it = primera;
			der_pos_t tmp;
			while (it != NULL) {
				tmp = it;
				it = it->sig;
				delete tmp;
			}
			num_elem = 0;
			primera = NULL;
			ultima = NULL;
		};

		virtual E Recuperar(int p) { //debe darse un índice válido
		    int posicion = 1;
		    der_pos_t tmp = primera;
			for(int i=1;i<=p;i++)
            {
                tmp = tmp->sig;
            }

            cout << "El elemento en el indice" << p << "es: " << primera->elemento;
		};

		void Insertar(int p, E elem)  {
			// Caso especial primera
			der_pos_t p_aux = (der_pos_t)p;
			if (p_aux == primera) {
				der_pos_t tmp = new node_t;

				tmp->sig = p_aux;
				tmp->elemento = elem;

				primera = tmp;
			} else {
				der_pos_t tmp = new node_t;
				tmp->sig = p_aux->sig;
				tmp->elemento = p_aux->elemento;

				p_aux->sig = tmp;
				p_aux->elemento = elem;

				if (p_aux == ultima)
					ultima = tmp;
			}
			num_elem++;
		};

		void Borrar(int p) {
			der_pos_t n = primera;
			int contador=0;
			if(p==1)
            {
                n = n->sig;
            }
            else
            {
                while(n!=NULL)
                {
                    n = n->sig;
                    contador++;
                }

            }
			num_elem--;
		};

		void ModificarElem(int p, E elem) {
			pos_t n;
			n= primera;
			int contador = 0;

			while (contador <= p)
            {
                n = n->sig;
                contador++;
            }
            if(contador == p) n->elemento = elem;
		};

		void Intercambiar(int p1, int p2) {
			int contador=1;
			int contador2 =1;
			pos_t pos1 = primera;
			pos_t pos2 = primera;
			while(contador < p1)
            {
                pos1 = pos1->sig;
                contador++;
            }
            while(contador2 < p2)
            {
                pos2 = pos2->sig;
                contador2++;
            }

			E tmp = pos1->elemento;
			pos1->elemento = pos2->elemento;
			pos2->elemento = tmp;
		};

		int NumElem() {
			return num_elem;
		};

	private:
		der_pos_t primera;
		der_pos_t ultima;

};

#endif
