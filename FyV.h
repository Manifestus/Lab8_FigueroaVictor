#pragma once
#include "Articulos.h"
#include <string>

using namespace std;

class FyV: public Articulos
{
	private:
		string Vencimiento;
	public:
		FyV();
		FyV(string, string, int, int, string, string);
		virtual ~FyV();
		virtual string toString()const;
};