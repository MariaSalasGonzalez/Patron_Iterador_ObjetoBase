#pragma once
#include "Iterador.h"

class IterArreglo : public Iterador {
   private:
	   int i; //es el sub-indice que pasa de elem a elem
	   int cant; //cuantos elem validos hay en el contenedor
	   ObjetoBase** vect; //visualizar el vector del contenedor
   public:
	   IterArreglo(int, ObjetoBase*[]);
	   virtual ~IterArreglo();
	   virtual bool masElementos()const;
	   virtual ObjetoBase* proximoElemento();
	   virtual string toString();
};
