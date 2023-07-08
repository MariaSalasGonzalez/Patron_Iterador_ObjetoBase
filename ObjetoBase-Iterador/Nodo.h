#pragma once
#include "ObjetoBase.h"

class Nodo : ObjetoBase {
    private:
		 ObjetoBase* _info; //pasajero, es el que se destruye
		 Nodo* _siguiente;

    public:
		Nodo(ObjetoBase*, Nodo*);
		virtual ~Nodo();
		ObjetoBase* obtenerInfo()const;
		Nodo* obtenerSiguiente() const;
		void establecerSiguiente(Nodo*);
		void establecerInfo(ObjetoBase* info);
		string toString()const;
};
