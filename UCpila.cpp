//---------------------------------------------------------------------------

#pragma hdrstop

#include "UCpila.h"
#include "Un.h"
#include <vcl.h>
typedef int Tipo;

const MAX=100;
class Pila{

	private:
		Tipo V[MAX+1];
		int cima;
	public:
		Pila();
		//constructor

		void Push(Tipo dato);

		void Pop(Tipo &dato);

		bool Vacia();

		bool Llena();

		void borrar();

		 // Elimina el elemento que está en la cima de la pila.

		Tipo Cabeza();
		 // Retorna el elemento que se encuentra en la cima de la Pila

		int Cant();
		 //Retorna la cantidad de elementos que hay en la Pila
		 void Mostrar();
};

Pila::Pila()
{//constructor. Crea una Pila vacía
	cima = -1;
}



void Pila::Push(Tipo dato){
//La pila no está llena. Inserta un "dato"
	if(Llena()){
		ShowMessage("404: Pila llena");
		exit(1);
	}
	cima++;
	V[cima] = dato;
}


void Pila::Pop(Tipo &dato){
//Pre: La pila no está vacía. Obtiene en "dato" el elemento que está en la cima de la Pila, eliminandolo de la misma.
	if(Vacia()){
		ShowMessage("404: Pila vacía");
		exit(1);
	}
	dato = V[cima];
	cima--;
}

bool Pila::Vacia(){
//retorna true sii la pila está vacía y false en caso contrario
	return (cima==-1);
}

bool Pila::Llena(){
//retorna true sii la pila está llena y false en caso contrario
	return (cima==MAX);
}

void Pila::borrar(){
//Pre: La pila no está vacía. Elimina el elemento que está en la cima de la pila.
	if(Vacia()){
		ShowMessage("404: Pila vacía");
		exit(1);
	}
	cima--;
}

Tipo Pila::Cabeza(){
// Retorna el elemento que se encuentra en la cima de la Pila, sin eliminarlo
	if(Vacia()){
		ShowMessage("404: Pila vacía");
		exit(1);
	}
	return V[cima];
}

int Pila::Cant(){
	return (cima+1);
}

void Pila::Mostrar(){
	Form1->Memo1->Lines->Clear();
	for (int i=cima; i>=0 ; i--)
		Form1->Memo1->Lines->Add(IntToStr(V[i]));
}

//---------------------------------------------------------------------------
#pragma package(smart_init)

























