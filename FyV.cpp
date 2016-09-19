#include "Articulos.h"
#include "FyV.h"
#include <string>
#include <sstream>

using namespace std;

FyV::FyV()
{
}

FyV::FyV(string Codigo, string Nombre, int Precio, int Cantidad, string Tipo, string Vencimiento):Articulos(Codigo, Nombre, Precio, Cantidad, Tipo), Vencimiento(Vencimiento) 
{
}

FyV::~FyV()
{
}

string FyV::toString()const
{
	stringstream ss;
	ss << Articulos::toString()<< " Vencimiento: " << Vencimiento;
	return ss.str();
}