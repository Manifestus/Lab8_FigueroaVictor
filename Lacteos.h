#pragma once
#include "Articulos.h"
#include <string>

using namespace std;

class Lacteos: public Articulos
{
	private:
		string Vencimiento;
		int Peso;

	public: 
		Lacteos();
		Lacteos(string, string, int, int , string, string, int);
		virtual ~Lacteos();
		virtual string toString()const;
};