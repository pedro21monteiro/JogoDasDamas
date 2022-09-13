#include "Ponto.h"

Ponto::Ponto()
{
	x = -1;
	y = -1;
}

bool Ponto::EValido() const
{
	if (x >= 0 && x <= 7 && y >= 0 && y <= 7) {
		return true;
	}
	else {
		return false;
	}
}

string Ponto::ToString()
{
	return "(" + to_string(x) + "," + to_string(y) + ")";
}
