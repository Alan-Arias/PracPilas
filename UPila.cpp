//---------------------------------------------------------------------------



#include "UPila.h"
#include "Un.h"

#include <vcl.h>

typedef int Tipo;

const MAX=100;
class PPila{

	private:
		Puntero L;

	public:
	   Pila();
		//constructor. Produce un Self vac�o. Crea una Pila vac�a

		void Push(Tipo dato);
		 //Pre: La pila no est� llena
		 //Inserta un "dato" al Self

		void Pop(Tipo &dato);
		 //Pre: La pila no est� vac�a
		 // Obtiene en "dato" el elemento que est� en la cima de la Pila, eliminandolo de la misma.

		bool Vacia();
		 //retorna true sii la pila est� vac�a y false en caso contrario
		bool Llena();
		 //retorna true sii la pila est� llena y false en caso contrario

		void borrar();
		 //Pre: La pila no est� vac�a
		 // Elimina el elemento que est� en la cima de la pila.

		Tipo Cabeza();
		 // Retorna el elemento que se encuentra en la cima de la Pila, sin eliminarlo

		int Cant();
		 //Retorna la cantidad de elementos que hay en la Pila
		 void Mostrar();
};

PPila::Pila()
{//constructor. Produce un Self vac�o. Crea una Pila vac�a
	L = TIERRA;
}
void PPila::Push(Tipo dato){
//Pre: La pila no est� llena. Inserta un "dato" al Self
	if(Llena()){
		ShowMessage("Error: Pila llena");
		exit(1);
	}
	Puntero Aux;
	CrearNodo(Aux);
	PonerData(Aux,dato);
	PonerLink(Aux,L);
	L = Aux;
}


void PPila::Pop(Tipo &dato){
//Pre: La pila no est� vac�a. Obtiene en "dato" el elemento que est� en la cima de la Pila, eliminandolo de la misma.
	if(Vacia()){
		ShowMessage("404 NotFound \nPila vac�a");
		exit(1);
	}
	Puntero p=L;
	dato = Data(L);
	L = Link(L);
	Retornar(p);
}

bool PPila::Vacia(){
//retorna true sii la pila est� vac�a y false en caso contrario
	return (L==TIERRA);
}

bool PPila::Llena(){
//retorna true sii la pila est� llena y false en caso contrario
	return (AlmacLleno());
}

void PPila::borrar(){
//Pre: La pila no est� vac�a. Elimina el elemento que est� en la cima de la pila.
	if(Vacia()){
		ShowMessage("404 NotFound: Pila vac�a");
		exit(1);
	}
	Puntero p = L;
	L = Link(L);
	Retornar(p);
}

Tipo PPila::Cabeza(){
// Retorna el elemento que se encuentra en la cima de la Pila, sin eliminarlo
	if(Vacia()){
		ShowMessage("404 NotFound: Pila vac�a");
		exit(1);
	}
	return Data(L);
}

int PPila::Cant(){
	Puntero p = L;
	int cont=0;
	while (p!=TIERRA){
		cont++;
		p=Link(p);
	}
	return (cont);
}

void PPila::Mostrar(){
	Form1->Memo1->Lines->Clear();
	Puntero p=L;
	for (int i=Cant(); i>0 ; i--){
		Form1->Memo1->Lines->Add(IntToStr(Data(p)));
		p=Link(p);
	}
}

//---------------------------------------------------------------------------

