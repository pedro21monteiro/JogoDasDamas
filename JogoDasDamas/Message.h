#pragma once
#include "Ponto.h"
#include <string>
#include "Jogador.h"
using namespace std;

class Message
{
public:
	bool JogadaValida;
	bool PossivelJogarNovamente;
	Ponto PosicaoFinal;
	string MensagemDeErro;
	bool acabouJogo;
	Jogador jogadorVencedor;

	Message();
};

