#pragma once
#include "ObjetoBase.h"
#include "Iterador.h"

class Coleccion : public ObjetoBase {
   public:
       Coleccion(){}
	   virtual ~Coleccion() {}
	   virtual void agregar(ObjetoBase*) = 0;
	   virtual ObjetoBase* obtener(int) const = 0;
	   virtual int numElementos() const = 0; //cuantos elementos hay
	   virtual bool vacia() const = 0 ;//si el contenedor esta vacio
	   virtual Iterador* obtenerIterador() const = 0;
	   virtual string toString() const = 0;
	   //Coleccion(const Coleccion&); constructor copia
	   /*virtual Coleccion& operator=(const Coleccion&)
	   virtual void agregar(const Coleccion*);

	   virtual ObjetoBase* eliminar(int = -1) = 0;
	   virtual ObjetoBase* eliminar(const ObjetoBase&) = 0;
	   virtual void eliminarTodos(bool = false);*/
};