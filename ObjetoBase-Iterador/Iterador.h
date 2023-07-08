#pragma once
#include "ObjetoBase.h"

class Iterador : public ObjetoBase {
public:
	Iterador() {}
	virtual ~Iterador() {}
	//estos 2 se desarrollan en las clases derivadas
	virtual bool masElementos() const = 0;
	virtual ObjetoBase* proximoElemento() = 0; 
	//me obtiene el elemento que esta viendo el iteraodor
	//y me lo retorna
	virtual string toString() const { return ""; }
};

