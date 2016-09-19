#pragma once
#include <string>

using namespace std;

class Articulos
{
	private:
		string Codigo;
		string Nombre;
		int Precio;
		int Cantidad;
		string Tipo;
	public:
		Articulos();
		Articulos(string, string, int, int ,string);
		virtual int getCantidad();
		virtual void setCantidad(int);
		virtual int getPrecio();
		virtual ~Articulos();
		virtual string toString()const;
};