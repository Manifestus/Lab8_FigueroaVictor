#include "Articulos.h"
#include "Lavanderia.h"
#include <string>
#include <sstream>

using namespace std;

Lavanderia::Lavanderia()
{
}

Lavanderia::Lavanderia(string Codigo, string Nombre, int Precio, int Cantidad, string Tipo, string Marca, string Componentes):Articulos(Codigo, Nombre, Precio, Cantidad, Tipo), Marca(Marca), Componentes(Componentes)
{
}

Lavanderia::~Lavanderia()
{
}

string Lavanderia::toString()const
{
	stringstream ss;
	ss << Articulos::toString()<< " Marca: " << Marca << ", Componentes: " << Componentes;
	return ss.str();
}