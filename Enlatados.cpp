#include "Articulos.h"
#include "Enlatados.h"
#include <string>
#include <sstream>

using namespace std;

Enlatados::Enlatados()
{
}

Enlatados::Enlatados(string Codigo, string Nombre, int Precio, int Cantidad, string Tipo, string Vencimiento, int Tamano):Articulos(Codigo, Nombre, Precio, Cantidad, Tipo), Vencimiento(Vencimiento), Tamano(Tamano)
{
}

Enlatados::~Enlatados()
{
}

string Enlatados::toString()const
{
	stringstream ss;
	ss << Articulos::toString()<< " Vencimiento: " << Vencimiento << ", Tamano: " << Tamano;
	return ss.str();
}