#include "ObjetoBase.h"

ObjetoBase:: ~ObjetoBase() {

}


string AdaptadorBase::toString()const {
	return typeid(*this).name(); //me retorna class Bicicleta, class Factura
}


ostream& operator<<(ostream& salida, const ObjetoBase& obj) {
	salida << obj.toString();
	return salida;
}

