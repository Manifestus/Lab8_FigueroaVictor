#pragma once
#include "Articulos.h"
#include <string>

using namespace std;

class Lavanderia: public Articulos
{
	private:
		string Marca;
		string Componentes;

	public: 
		Lavanderia();
		Lavanderia(string, string, int, int , string, string, string);
		virtual ~Lavanderia();
		virtual string toString()const;
};