#pragma once
#include "Tabuleiro.h"
class Jogo
{
public:
	Tabuleiro tabuleiro;

	//-----------------------------Fun��es-----------------------
	void menu();
	void IniciarJogo();
	void InserirNomeJogadoresEAtribuirPecas();
	void JogarPecas(int i);
};

