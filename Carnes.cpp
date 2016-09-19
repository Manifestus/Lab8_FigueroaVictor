#include "Articulos.h"
#include "Carnes.h"
#include <string>
#include <sstream>

using namespace std;

Carnes::Carnes()
{
}

Carnes::Carnes(string Codigo, string Nombre, int Precio, int Cantidad, string Tipo, string Vencimiento, string Corte):Articulos(Codigo, Nombre, Precio, Cantidad, Tipo), Vencimiento(Vencimiento), Corte(Corte)
{
}

Carnes::~Carnes()
{
}

string Carnes::toString()const
{
	stringstream ss;
	ss << Articulos::toString()<< " Vencimiento: " << Vencimiento << ", Corte: " << Corte;
	return ss.str();
}