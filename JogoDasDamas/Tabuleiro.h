#pragma once
#include "Jogador.h"
#include "Ponto.h"
#include "Message.h"
class Tabuleiro
{
public:
	char tabuleiro[8][8];
	Jogador Um;
	Jogador Dois;
	Ponto PosicaoInicial;
	Ponto PosicaoFinal;

	//----------------Funçoes----------------------
	//Metodo Construtor
	Tabuleiro();
	Message AcabouJogo();
	void ImprimirTabuleiro();
	Message JogarPecaBranca(Ponto _p);
	Message JogarPecaPreta(Ponto _p);
	//0-Brancas, 1-Pretas
	void verificarTransformaDama(int i, int x,int y);
	//0-Brancas, 1-Pretas
	bool verificarSePossivelComerOutraPeca(int i, int _x, int _y);
	//0-Brancas, 1-Pretas
	bool verificarObrigatorioComer(int i);
	//0-Brancas, 1-Pretas
	bool possivelMovimentarAlguma(int i);

};

