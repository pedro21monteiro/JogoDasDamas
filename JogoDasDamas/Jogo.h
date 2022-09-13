#pragma once
#include "Tabuleiro.h"
class Jogo
{
public:
	Tabuleiro tabuleiro;

	//-----------------------------Funções-----------------------
	void menu();
	void IniciarJogo();
	void InserirNomeJogadoresEAtribuirPecas();
	void JogarPecas(int i);
};

