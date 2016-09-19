#pragma once
#include "Articulos.h"
#include <string>

using namespace std;

class Carnes: public Articulos
{
	private:
		string Vencimiento;
		string Corte;

	public: 
		Carnes();
		Carnes(string, string, int, int , string, string, string);
		virtual ~Carnes();
		virtual string toString()const;
};