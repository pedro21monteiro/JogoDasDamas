#pragma once
#include <string>
using namespace std;

class Ponto
{
public:
	int x;
	int y;

	//--------------------Fun��es------------------
	Ponto();
	bool EValido() const;
	string ToString();

};

