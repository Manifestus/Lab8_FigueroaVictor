#include "Articulos.h"
#include "Lacteos.h"
#include <string>
#include <sstream>

using namespace std;

Lacteos::Lacteos()
{
}

Lacteos::Lacteos(string Codigo, string Nombre, int Precio, int Cantidad, string Tipo, string Vencimiento, int Peso):Articulos(Codigo, Nombre, Precio, Cantidad, Tipo), Vencimiento(Vencimiento), Peso(Peso)
{
}

Lacteos::~Lacteos()
{
}

string Lacteos::toString()const
{
	stringstream ss;
	ss << Articulos::toString()<< " Vencimiento: " << Vencimiento << ", Peso: " << Peso;
	return ss.str();
}