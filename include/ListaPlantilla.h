#ifndef __ListaPlantilla_H__
#define __ListaPlantilla_H__

template <typename E>
class Nodo{
	public:
		Nodo(){};
		virtual ~Nodo(){};
		E elemento;
};

template <typename E>
class ListaPosPlantilla{
	public:

		// XXX
		// Tipo base para el nodo, en la implementacion
		// se puede usar un nuevo tipo que herede de
		// la clase Nodo<E> pero *solo para el return type*!
		// Para los parametros de los metodos tiene que
		// ser este tipo, sino no compila!
		typedef Nodo<E>* pos_t;
		// XXX

		/*! \brief Indica si la Lista se encuentra vac�a.
		 * @return Valor booleano.
		 */
		virtual bool Vacia() = 0;

		/*! \brief Elimina todos los elementos de la lista.
		 */
		virtual void Vaciar() = 0;

		/*! \brief Retorna la posici�n del primer elemento.
		 * @return Variable tipo \c pos_t.
		 */
		virtual pos_t Primera() = 0;

		/*! \brief Retorna la posici�n del �ltimo elemento.
		 * @return Variable tipo \c pos_t.
		 */
		virtual pos_t Ultima() = 0;

		/*! \brief Retorna la posici�n siguiente.
		 * @param p Una posici�n dentro de la lista.
		 * @return Una variable tipo \c pos_t.
		 */
		virtual pos_t Siguiente(pos_t p) = 0;

		/*! \brief Retorna la posici�n anterior.
		 * @param p Una posici�n dentro de la lista.
		 * @return Una variable tipo \c pos_t.
		 */
		virtual pos_t Anterior(pos_t p) = 0;

		/*! \brief Retorna el elemento de una posici�n.
		 * @param p Una posici�n dentro de la lista.
		 * @return Una variable tipo \c E.
		 */
		virtual E Recuperar(pos_t p) = 0;

		/*! \brief Inserta un elemento en la lista.
		 * El elemento \p elem se inserta antes de la
		 * posici�n \p p.
		 * @param p Una posici�n dentro de la lista.
		 * @param elem El elemento a insertar.
		 */
		virtual void Insertar(pos_t p, E elem) = 0;

		/*! \brief Agrega un elemento al final de la lista.
		 * @param elem El elemento a insertar.
		 */
		virtual void AgregarAlFinal(E elem) = 0;

		/*! \brief Elimina un elemento de la lista.
		 * Se elimina el elemento que se encuentra
		 * en la posici�n \p p.
		 * @param p Una posici�n dentro de la lista.
		 */
		virtual void Borrar(pos_t p) = 0;

		/*! \brief Modifica el elemento en una posici�n.
		 * @param p La posici�n del elemento que se quiere modificar.
		 * @param elem El nuevo elemento que se va a guardar en \p p.
		 */
		virtual void ModificarElem(pos_t p, E elem) = 0;


		/*! \brief Intercambia dos posiciones de la lista.
		 * @param p1,p2 Las posiciones a intercambiar en la lista.
		 */
		virtual void Intercambiar(Nodo<E>* p1, Nodo<E>* p2) = 0;

		/*! \brief Retorna el n�mero de elementos de la lista.
		 * @return Una variable de tipo entero.
		 */
		virtual int NumElem() = 0;
};

template <typename E>
class ListaIndexPlantilla{
	public:

		/*! \brief Indica si la Lista se encuentra vac�a.
		 * @return Valor booleano.
		 */
		virtual bool Vacia() = 0;

		/*! \brief Elimina todos los elementos de la lista.
		 */
		virtual void Vaciar() = 0;

		/*! \brief Retorna el elemento en un �ndice.
		 * @param i Un �ndice dentro de la lista.
		 * @return Una variable tipo \c E.
		 */
		virtual E Recuperar(int i) = 0;

		/*! \brief Inserta un elemento en la lista.
		 * El elemento \p elem se inserta en el
		 * �ndice \p i.
		 * @param i Un �ndice dentro de la lista.
		 * @param elem El elemento a insertar.
		 */
		virtual void Insertar(int i, E elem) = 0;

		/*! \brief Elimina un elemento de la lista.
		 * Se elimina el elemento que se encuentra
		 * en el �ndice \p i.
		 * @param i Un �ndice dentro de la lista.
		 */
		virtual void Borrar(int i) = 0;

		/*! \brief Modifica el elemento en un �ndice.
		 * @param i El �ndice del elemento que se quiere modificar.
		 * @param elem El nuevo elemento que se va a guardar en \p i.
		 */
		virtual void ModificarElem(int i, E elem) = 0;


		/*! \brief Intercambia dos elementos de la lista.
		 * @param p1,p2 Los �ndices de los elementos a
		 * intercambiar en la lista.
		 */
		virtual void Intercambiar(int i1, int i2) = 0;

		/*! \brief Retorna el n�mero de elementos de la lista.
		 * @return Una variable de tipo entero.
		 */
		virtual int NumElem() = 0;
};

template <typename E>
class ListaOrdPlantilla{
	public:

		/*! \brief Indica si la Lista se encuentra vac�a.
		 * @return Valor booleano.
		 */
		virtual bool Vacia() = 0;

		/*! \brief Elimina todos los elementos de la lista.
		 */
		virtual void Vaciar() = 0;

		/*! \brief Retorna el primer elemento.
		 * @return Variable tipo \c E.
		 */
		virtual E Primero() = 0;

		/*! \brief Retorna el �ltimo elemento.
		 * @return Variable tipo \c E.
		 */
		virtual E Ultimo() = 0;

		/*! \brief Retorna el elemento siguiente.
		 * @param elem Un elemento dentro de la lista.
		 * @return Una variable tipo \c E.
		 */
		virtual E Siguiente(E elem) = 0;

		/*! \brief Retorna el elemento anterior.
		 * @param elem Un elemento dentro de la lista.
		 * @return Una variable tipo \c E.
		 */
		virtual E Anterior(E elem) = 0;

		/*! \brief Inserta un elemento en la lista.
		 * El elemento \p elem se inserta en orden
		 * ascendente. Si ya existe en la lista
		 * no hace nada.
		 * @param elem El elemento a insertar.
		 */
		virtual void Agregar(E elem) = 0;

		/*! \brief Elimina un elemento de la lista.
		 * Si el elemento no existe en la lista
		 * no hace nada.
		 * @param e El elemento a eliminar
		 */
		virtual void Borrar(E elem) = 0;

		/*! \brief Retorna el n�mero de elementos de la lista.
		 * @return Una variable de tipo entero.
		 */
		virtual int NumElem() = 0;
};

#endif
