#include "IterArreglo.h"

IterArreglo::IterArreglo(int cantidad, ObjetoBase* v[]) :
	i(0),
    cant(cantidad),
    vect(v),
    Iterador(){
}

IterArreglo::~IterArreglo() {
}

bool IterArreglo::masElementos()const {
	return i < cant; //i debe ser menor a cantidad
}

ObjetoBase* IterArreglo::proximoElemento() {
	ObjetoBase* r = NULL; //variable comodin
	if(masElementos()){
		r = vect[i++];
	}
	return r;
}

string IterArreglo::toString() {
	return "";
}