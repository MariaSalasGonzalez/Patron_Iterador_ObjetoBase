#pragma once
#include "Coleccion.h"

class ColArreglo : public Coleccion {
  private:
	ObjetoBase* *vec;
	int can; //elementos validos en el vector
	int tam;
  public:
	  ColArreglo(int);
	  virtual ~ColArreglo();
	  virtual void agregar(ObjetoBase*);
	  virtual ObjetoBase* obtener(int) const;
	  virtual int maxElemento() const;
	  virtual int numElementos() const; 
	  virtual bool vacia() const;
	  virtual Iterador* obtenerIterador() const;
	  virtual string toString() const;
	  //ColArreglo(const ColArreglo&); //constructor copia
	  //virtual ColArreglo& operator=(const ColArreglo&);
	  //virtual ObjetoBase*& operator[](int)const;
	  //virtual ObjetoBase* eliminar(int = -1);
	  //virtual ObjetoBase* eliminar(const ObjetoBase&);
};