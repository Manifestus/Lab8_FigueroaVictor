#include "Articulos.h"
#include "Granos.h"
#include <string>
#include <sstream>

using namespace std;

Granos::Granos()
{
}

Granos::Granos(string Codigo, string Nombre, int Precio, int Cantidad, string Tipo, bool Aceitoso, bool Procesado):Articulos(Codigo, Nombre, Precio, Cantidad, Tipo), Aceitoso(Aceitoso), Procesado(Procesado)
{
}

Granos::~Granos()
{
}

string Granos::toString()const
{
	stringstream ss;
	ss << Articulos::toString()<< " Aceitoso: " << Aceitoso << ", Procesado: " << Procesado;
	return ss.str();
}