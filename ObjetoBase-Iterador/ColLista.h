#pragma once
#include "Coleccion.h"
#include "Iterador.h"
#include "Nodo.h"

class ColLista: public Coleccion{
   private:
	 int _n;
	 Nodo* _primero; //ve al inicio
	 Nodo* _ultimo; //ve al ultimo

   public:
	   ColLista();
	   virtual ~ColLista();
	   virtual void agregar(ObjetoBase*);
	   virtual ObjetoBase* obtener(int) const;
	   virtual int numElementos() const; //cuantos elementos hay
	   virtual bool vacia() const;//si el contenedor esta vacio
	   virtual Iterador* obtenerIterador() const;
	   virtual string toString() const;
	   //ColArreglo(const ColArreglo&); //constructor copia
	  //virtual ColArreglo& operator=(const ColArreglo&);
	  //virtual ObjetoBase*& operator[](int)const;
	  //virtual ObjetoBase* eliminar(int = -1);
	  //virtual ObjetoBase* eliminar(const ObjetoBase&);

};

