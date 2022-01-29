//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Un.h"
#include "UCpila.cpp"

//---------------------------------------------------------------------------
//#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
Pila P,Q;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	int v=StrToInt(InputBox("Entrada","Ingrese valor: ","0"));
	P.Push(v);
	P.Mostrar();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	int x=0;
	P.Pop(x);
	ShowMessage("El elemento extraido es: "+IntToStr(x));
    P.Mostrar();
}

//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
		ShowMessage("La cantidad de elementos es: "+IntToStr(P.Cant()));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
	P.borrar();
	P.Mostrar();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
		ShowMessage("El elemento en la cima es: "+IntToStr(P.Cabeza()));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
  ShowMessage(P.Cant());
  ShowMessage(Q.Cant());
  Q=P;
  ShowMessage(P.Cant());
  ShowMessage(Q.Cant());
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
	int cant=P.Cant();
	ShowMessage("La Lista Invertida es ");
	while (cant != -1){
		int h=P.Cabeza();
		P.borrar();
		ShowMessage(h);
	}
	
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender)
{
	P.Cant();
	while (P.Cant() != -1){
		if (P.Cant() == 0){
			int val;
			val=P.Cabeza();
			ShowMessage(val);
		}else{

			int h=P.Cabeza();
			P.borrar();
		}
	}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button9Click(TObject *Sender)
{
	int v=StrToInt(InputBox("Entrada","Ingrese valor: ","0"));
	P.Push(v);
	P.Push(v);
	P.Mostrar();
}
//---------------------------------------------------------------------------

