#include "ColArreglo.h"
#include "ColLista.h"
#include "IterArreglo.h"
#include "IterLista.h"
#include "Persona.h"
using namespace std;

int main(){
    cout << "-------------OBJETO.BASE--------------" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Creacion de personas" << endl;
    ObjetoBase* per1 = new Persona("111","Moe");
	ObjetoBase* per2 = new Persona("222", "Larry");
	ObjetoBase* per3 = new Persona("333", "Curly");
	ObjetoBase* per4 = new Persona("444", "Ana");
	ObjetoBase* per5 = new Persona("555", "Cristina");

	cout << "Creacion del contenedor tipo arreglo" << endl;
	cout << "--------------------------------------" << endl;
	int tamano = 10;
	ColArreglo* CA = new ColArreglo(tamano);

	cout << "Ingresando a las personas en el contenedor tipo arreglo" << endl;
	CA->agregar(per1);
	CA->agregar(per2);
	CA->agregar(per3);
	CA->agregar(per4);
	CA->agregar(per5);

	cout << "Imprimir a las personas del contenedor tipo arreglo" << endl;
	cout << CA->toString() << endl << endl;
	



    system("pause");
	return 0;
}