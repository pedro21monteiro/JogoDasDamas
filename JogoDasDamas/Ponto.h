#pragma once
#include <string>
using namespace std;

class Ponto
{
public:
	int x;
	int y;

	//--------------------Funções------------------
	Ponto();
	bool EValido() const;
	string ToString();

};

