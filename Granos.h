#pragma once
#include "Articulos.h"
#include <string>

using namespace std;

class Granos: public Articulos
{
	private:
		bool Aceitoso;
		bool Procesado;

	public: 
		Granos();
		Granos(string, string, int, int , string, bool, bool);
		virtual ~Granos();
		virtual string toString()const;
};