#include "Articulos.h"
#include <string>
#include <sstream>

using namespace std;

Articulos::Articulos()
{
}

Articulos::Articulos(string Codigo, string Nombre, int Precio, int Cantidad, string Tipo): Codigo(Codigo), Nombre(Nombre), Precio(Precio), Cantidad(Cantidad), Tipo(Tipo)
{
}

string Articulos::toString()const
{
	stringstream ss;
	ss << "Articulos: Codigo: " << Codigo << ", Nombre: " << Nombre << ", Precio: " << Precio << ", Cantidad: " << ", Tipo: " << Tipo;
	return ss.str();
}

Articulos::~Articulos()
{
}

int Articulos::getCantidad()
{
	return Cantidad;
}

void Articulos::setCantidad(int valor)
{
	Cantidad = valor;
}

int Articulos::getPrecio()
{
	return Precio;
}