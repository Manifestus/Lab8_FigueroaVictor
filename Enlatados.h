#pragma once
#include "Articulos.h"
#include <string>

using namespace std;

class Enlatados: public Articulos
{
	private:
		string Vencimiento;
		int Tamano;

	public: 
		Enlatados();
		Enlatados(string, string, int, int , string, string, int);
		virtual ~Enlatados();
		virtual string toString()const;
};