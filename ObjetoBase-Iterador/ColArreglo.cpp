#include "ColArreglo.h"
#include "IterArreglo.h"
#include <sstream>

ColArreglo::ColArreglo(int t):
     tam(t),
     can(0),
     vec(new ObjetoBase*[t]),
     Coleccion(){
}

ColArreglo:: ~ColArreglo() {
	//eliminarTodos();
	delete []vec;
}

void ColArreglo::agregar(ObjetoBase* e) {
	if (can < tam){  //si se puede agregar si es menor
		vec[can++] = (ObjetoBase*)e;
	}
}

//si esta dentro del rango de los elementos validos
ObjetoBase* ColArreglo::obtener(int pos) const {
	if (pos >= 0 && pos < can)
		return vec[pos];
	return NULL;
}

int ColArreglo::maxElemento() const {
	return tam; //este seria el tamaño del vector
}

int ColArreglo::numElementos() const {
	return can; //este es el numero de elementos validos
}

bool ColArreglo::vacia() const {
	return can == 0;
}

Iterador* ColArreglo::obtenerIterador() const {
	return new IterArreglo(can, vec);
}

string ColArreglo::toString() const {
	stringstream s;
	s << "-----LISTADO-------" << endl
	<< "[";
	Iterador* i = obtenerIterador(); //iterador para ColArreglo
	while (i->masElementos()) {
		s << *(i->proximoElemento());
		if (i->masElementos())
			s << ",";
	}//fin del while
	delete i;
	s << "]";
	return s.str();
}