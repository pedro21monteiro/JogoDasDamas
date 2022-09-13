#include "Tabuleiro.h"
#include <iostream>
#include "Message.h"

Tabuleiro::Tabuleiro()
{	
	//TabuleiroInicial
	tabuleiro[0][0] = 'X';
	tabuleiro[0][1] = ' ';
	tabuleiro[0][2] = 'X';
	tabuleiro[0][3] = ' ';
	tabuleiro[0][4] = 'X';
	tabuleiro[0][5] = ' ';
	tabuleiro[0][6] = 'X';
	tabuleiro[0][7] = ' ';
	tabuleiro[1][0] = ' ';
	tabuleiro[1][1] = 'X';
	tabuleiro[1][2] = ' ';
	tabuleiro[1][3] = 'X';
	tabuleiro[1][4] = ' ';
	tabuleiro[1][5] = 'X';
	tabuleiro[1][6] = ' ';
	tabuleiro[1][7] = 'X';
	tabuleiro[2][0] = 'X';
	tabuleiro[2][1] = ' ';
	tabuleiro[2][2] = 'X';
	tabuleiro[2][3] = ' ';
	tabuleiro[2][4] = 'X';
	tabuleiro[2][5] = ' ';
	tabuleiro[2][6] = 'X';
	tabuleiro[2][7] = ' ';
	tabuleiro[3][0] = ' ';
	tabuleiro[3][1] = ' ';
	tabuleiro[3][2] = ' ';
	tabuleiro[3][3] = ' ';
	tabuleiro[3][4] = ' ';
	tabuleiro[3][5] = ' ';
	tabuleiro[3][6] = ' ';
	tabuleiro[3][7] = ' ';
	tabuleiro[4][0] = ' ';
	tabuleiro[4][1] = ' ';
	tabuleiro[4][2] = ' ';
	tabuleiro[4][3] = ' ';
	tabuleiro[4][4] = ' ';
	tabuleiro[4][5] = ' ';
	tabuleiro[4][6] = ' ';
	tabuleiro[4][7] = ' ';
	tabuleiro[5][0] = ' ';
	tabuleiro[5][1] = 'O';
	tabuleiro[5][2] = ' ';
	tabuleiro[5][3] = 'O';
	tabuleiro[5][4] = ' ';
	tabuleiro[5][5] = 'O';
	tabuleiro[5][6] = ' ';
	tabuleiro[5][7] = 'O';
	tabuleiro[6][0] = 'O';
	tabuleiro[6][1] = ' ';
	tabuleiro[6][2] = 'O';
	tabuleiro[6][3] = ' ';
	tabuleiro[6][4] = 'O';
	tabuleiro[6][5] = ' ';
	tabuleiro[6][6] = 'O';
	tabuleiro[6][7] = ' ';
	tabuleiro[7][0] = ' ';
	tabuleiro[7][1] = 'O';
	tabuleiro[7][2] = ' ';
	tabuleiro[7][3] = 'O';
	tabuleiro[7][4] = ' ';
	tabuleiro[7][5] = 'O';
	tabuleiro[7][6] = ' ';
	tabuleiro[7][7] = 'O';

	//Tabuleiro para experiencias
	/*tabuleiro[0][0] = ' ';
	tabuleiro[0][1] = ' ';
	tabuleiro[0][2] = ' ';
	tabuleiro[0][3] = ' ';
	tabuleiro[0][4] = 'X';
	tabuleiro[0][5] = ' ';
	tabuleiro[0][6] = 'X';
	tabuleiro[0][7] = ' ';
	tabuleiro[1][0] = ' ';
	tabuleiro[1][1] = 'X';
	tabuleiro[1][2] = ' ';
	tabuleiro[1][3] = ' ';
	tabuleiro[1][4] = ' ';
	tabuleiro[1][5] = ' ';
	tabuleiro[1][6] = ' ';
	tabuleiro[1][7] = ' ';
	tabuleiro[2][0] = 'O';
	tabuleiro[2][1] = ' ';
	tabuleiro[2][2] = ' ';
	tabuleiro[2][3] = ' ';
	tabuleiro[2][4] = ' ';
	tabuleiro[2][5] = 'P';
	tabuleiro[2][6] = ' ';
	tabuleiro[2][7] = ' ';
	tabuleiro[3][0] = ' ';
	tabuleiro[3][1] = ' ';
	tabuleiro[3][2] = 'X';
	tabuleiro[3][3] = ' ';
	tabuleiro[3][4] = ' ';
	tabuleiro[3][5] = ' ';
	tabuleiro[3][6] = 'O';
	tabuleiro[3][7] = ' ';
	tabuleiro[4][0] = ' ';
	tabuleiro[4][1] = ' ';
	tabuleiro[4][2] = ' ';
	tabuleiro[4][3] = ' ';
	tabuleiro[4][4] = ' ';
	tabuleiro[4][5] = ' ';
	tabuleiro[4][6] = ' ';
	tabuleiro[4][7] = 'X';
	tabuleiro[5][0] = ' ';
	tabuleiro[5][1] = ' ';
	tabuleiro[5][2] = 'X';
	tabuleiro[5][3] = ' ';
	tabuleiro[5][4] = ' ';
	tabuleiro[5][5] = ' ';
	tabuleiro[5][6] = ' ';
	tabuleiro[5][7] = ' ';
	tabuleiro[6][0] = 'O';
	tabuleiro[6][1] = 'B';
	tabuleiro[6][2] = ' ';
	tabuleiro[6][3] = 'O';
	tabuleiro[6][4] = ' ';
	tabuleiro[6][5] = ' ';
	tabuleiro[6][6] = 'O';
	tabuleiro[6][7] = ' ';
	tabuleiro[7][0] = ' ';
	tabuleiro[7][1] = ' ';
	tabuleiro[7][2] = ' ';
	tabuleiro[7][3] = ' ';
	tabuleiro[7][4] = ' ';
	tabuleiro[7][5] = ' ';
	tabuleiro[7][6] = ' ';
	tabuleiro[7][7] = 'O';*/

	
}

Message Tabuleiro::AcabouJogo()
{
	Message mensagem;
	int i, j;
	int pretas = 0, brancas = 0;
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			if (tabuleiro[i][j] == 'X' || tabuleiro[i][j] == 'P') {
				pretas++;
			}
			if (tabuleiro[i][j] == 'O' || tabuleiro[i][j] == 'B') {
				brancas++;
			}
		}
	}
	//só esta a verificar se fica sem pecas, tbm tem de verificar se não da para fazer mais movimentos
	if (pretas == 0) {
		mensagem.acabouJogo = true;
		mensagem.jogadorVencedor = Um;
		return mensagem;
	}
	if (brancas == 0) {
		mensagem.acabouJogo = true;
		mensagem.jogadorVencedor = Dois;
		return mensagem;
	}

	//vai ter de verificar se é possivel movimentar alguma peca, pq tbm se perde se não for possivel movimentar
	bool possivelMovimentarBranca, possivelMovimentarPreta;
	
	possivelMovimentarBranca = possivelMovimentarAlguma(0);
	possivelMovimentarPreta = possivelMovimentarAlguma(1);

	return mensagem;

}

void Tabuleiro::ImprimirTabuleiro()
{
	int i, j;

		cout << Dois.nome << endl << endl;
		for (i = 0; i < 8; i++) {
			cout << i << "  |";
			for (j = 0; j < 8; j++) {

				cout << tabuleiro[i][j] << "|";
			}cout << endl;
		}
		cout << "    0 1 2 3 4 5 6 7";
		cout << endl << endl;
		cout << Um.nome << endl << endl;
		

}

Message Tabuleiro::JogarPecaBranca(Ponto _p)
{
	Message mensagem;
	mensagem.PosicaoFinal = _p;

	int x1, y1, x2, y2 = 0;
	cout << Um.nome << " e a sua vez de jogar" << endl;
	cout << "Insira a linha da peca que quer movimentar" << endl;
	cin >> x1;
	cout << "Insira a coluna da peca que quer movimentar" << endl;
	cin >> y1;
	cout << "Insira a linha para onde quer que a peca se movimente" << endl;
	cin >> x2;
	cout << "Insira a coluna para onde quer que a peca se movimente" << endl;
	cin >> y2;
	PosicaoInicial.x = x1;
	PosicaoInicial.y = y1;
	PosicaoFinal.x = x2;
	PosicaoFinal.y = y2;
	

	//vai fazer a verificação se o movimento está correto
	//-----------------------------------------------------------------------------------------------------------------
	int variaX, variaY;//

	variaX = x2 - x1;
	variaY = y2 - y1;

	if ((_p.x != -1 && _p.y != -1) && (_p.x != x1 || _p.y != y1)) {
		mensagem.MensagemDeErro = "Só pode jogar a peca com que comeu anteriormente, neste caso " + _p.ToString();
		mensagem.PossivelJogarNovamente = true;
		mensagem.JogadaValida = true;
		return mensagem;
	}
	//verificar se as duas posições são válidas
	if (PosicaoInicial.EValido() == false || PosicaoFinal.EValido() == false) {
		
		return mensagem;
	}
	//para o movimento ser valido a posicao final tem de estar vazia
	if (tabuleiro[x2][y2] != ' ') {
		return mensagem;
	}
	//Agora na posicao Inicial tem de ter "O" ou "B" senão é erro
	//Nesta o gradinete(variaçãox/variaçaoy) == a 1 ou -1, se for 1 vai para a esquerda, se for -1 vai para a direira
	double gradiente = (double)variaX / (double)variaY;
	if (gradiente != (double)1 && gradiente != (double)-1) {
		return mensagem;
	}
	//Se for O ou "B" pois ambas podem movimentar da mesma maneira
	if (tabuleiro[x1][y1] == 'O' || tabuleiro[x1][y1] == 'B') {
		//chegando aqui pode haver 2 movimentos, comer uma peca ou andar só para os lados
		//anda para a esquerda ou para a direita sem comer
		char simboloPecaInicial = tabuleiro[x1][y1];

		if (variaX == -1) {
			if (verificarObrigatorioComer(0) == false) {
				tabuleiro[x1][y1] = ' ';
				tabuleiro[x2][y2] = simboloPecaInicial;
				verificarTransformaDama(0, x2, y2);
				mensagem.JogadaValida = true;
				return mensagem;
			}
			else {
				
				mensagem.JogadaValida = false;
				mensagem.MensagemDeErro = "E Obrigado a comer!!";
				return mensagem;
			}
		}
		//Comer para a esquerda ou para a direita
		if (variaX == -2) {
			//vai ver se existe alguma peca no preta no meio
			if (variaY == -2) {
				if (tabuleiro[x1 - 1][y1 - 1] == 'X' || tabuleiro[x1 - 1][y1 - 1] == 'P') {

					tabuleiro[x1][y1] = ' ';
					tabuleiro[x1 - 1][y1 - 1] = ' ';
					tabuleiro[x2][y2] = simboloPecaInicial;
					verificarTransformaDama(0, x2, y2);
					mensagem.PossivelJogarNovamente = verificarSePossivelComerOutraPeca(0,x2,y2);
					if (mensagem.PossivelJogarNovamente) {
						mensagem.PosicaoFinal.x = x2;
						mensagem.PosicaoFinal.y = y2;
					}
					mensagem.JogadaValida = true;
					return mensagem;
				}
				else {
					return mensagem;
				}
			}
			if (variaY == 2) {
				if (tabuleiro[x1 - 1][y1 + 1] == 'X' || tabuleiro[x1 - 1][y1 + 1] == 'P') {

					tabuleiro[x1][y1] = ' ';
					tabuleiro[x1 - 1][y1 + 1] = ' ';
					tabuleiro[x2][y2] = simboloPecaInicial;
					verificarTransformaDama(0, x2, y2);
					mensagem.PossivelJogarNovamente = verificarSePossivelComerOutraPeca(0, x2, y2);
					if (mensagem.PossivelJogarNovamente) {
						mensagem.PosicaoFinal.x = x2;
						mensagem.PosicaoFinal.y = y2;
					}
					mensagem.JogadaValida = true;
					return mensagem;
				}
				else {
					return mensagem;
				}
			}
		}
	}
	//Jogar a dama, é o resto das que falta, que é andar para baixo e comer para baixo pq andar para cima e comer para cima já pode
	if (tabuleiro[x1][y1] == 'B') {

		if (variaX == 1) {
			if (verificarObrigatorioComer(0) == false) {
				tabuleiro[x1][y1] = ' ';
				tabuleiro[x2][y2] = 'B';
				mensagem.JogadaValida = true;
				return mensagem;
			}
			else {

				mensagem.JogadaValida = false;
				mensagem.MensagemDeErro = "E Obrigado a comer!!";
				return mensagem;
			}			
		}
		//Comer para a esquerda ou para a direita
		if (variaX == 2) {
			//vai ver se existe alguma peca no preta no meio
			if (variaY == -2) {
				if (tabuleiro[x1 + 1][y1 - 1] == 'X' || tabuleiro[x1 + 1][y1 - 1] == 'P') {

					tabuleiro[x1][y1] = ' ';
					tabuleiro[x1 + 1][y1 - 1] = ' ';
					tabuleiro[x2][y2] = 'B';
					mensagem.PossivelJogarNovamente = verificarSePossivelComerOutraPeca(0, x2, y2);
					if (mensagem.PossivelJogarNovamente) {
						mensagem.PosicaoFinal.x = x2;
						mensagem.PosicaoFinal.y = y2;
					}
					mensagem.JogadaValida = true;
					return mensagem;
				}
				else {

					return mensagem;
				}
			}
			if (variaY == 2) {
				if (tabuleiro[x1 + 1][y1 + 1] == 'X' || tabuleiro[x1 + 1][y1 + 1] == 'P') {

					tabuleiro[x1][y1] = ' ';
					tabuleiro[x1 + 1][y1 + 1] = ' ';
					tabuleiro[x2][y2] = 'B';
					mensagem.PossivelJogarNovamente = verificarSePossivelComerOutraPeca(0, x2, y2);
					if (mensagem.PossivelJogarNovamente) {
						mensagem.PosicaoFinal.x = x2;
						mensagem.PosicaoFinal.y = y2;
					}
					mensagem.JogadaValida = true;
					return mensagem;
				}
				else {
					return mensagem;
				}
			}
		}
	}
	

}

Message Tabuleiro::JogarPecaPreta(Ponto _p)
{
	Message mensagem;
	mensagem.PosicaoFinal = _p;
	int x1, y1, x2, y2 = 0;
	cout << Dois.nome << " e a sua vez de jogar" << endl;
	cout << "Insira a linha da peca que quer movimentar" << endl;
	cin >> x1;
	cout << "Insira a coluna da peca que quer movimentar" << endl;
	cin >> y1;
	cout << "Insira a linha para onde quer que a peca se movimente" << endl;
	cin >> x2;
	cout << "Insira a coluna para onde quer que a peca se movimente" << endl;
	cin >> y2;
	PosicaoInicial.x = x1;
	PosicaoInicial.y = y1;
	PosicaoFinal.x = x2;
	PosicaoFinal.y = y2;

	//vai fazer a verificação se o movimento está correto
	//-----------------------------------------------------------------------------------------------------------------
	int variaX, variaY, NumeroDeCasasEntrePontos;//

	variaX = x2 - x1;
	variaY = y2 - y1;

	if ((_p.x != -1 && _p.y != -1) && (_p.x != x1 || _p.y != y1)) {
		mensagem.MensagemDeErro = "So pode jogar a peca com que comeu anteriormente, neste caso " + _p.ToString();
		mensagem.PossivelJogarNovamente = true;
		mensagem.JogadaValida = true;
	}
	//verificar se as duas posições são válidas
	if (PosicaoInicial.EValido() == false || PosicaoFinal.EValido() == false) {
		return mensagem;
	}
	//para o movimento ser valido a posicao final tem de estar vazia
	if (tabuleiro[x2][y2] != ' ') {
		return mensagem;
	}
	if (tabuleiro[x2][y2] != ' ') {
		return mensagem;
	}

	//Nesta o gradinete(variaçãox/variaçaoy) == a 1 ou -1, se for 1 vai para a esquerda, se for -1 vai para a direira
	double gradiente = (double)variaX / (double)variaY;
	if (gradiente != (double)1 && gradiente != (double)-1) {
		return mensagem;
	}
	//Agora na posicao Inicial tem de ter "O" ou "B" senão é erro
	//Se for X ou "P" pois ambas podem movimentar da mesma maneira
	if (tabuleiro[x1][y1] == 'X' || tabuleiro[x1][y1] == 'P') {
		//chegando aqui pode haver 2 movimentos, comer uma peca ou andar só para os lados
		//anda para a esquerda ou para a direita sem comer
		char simboloPecaInicial = tabuleiro[x1][y1];
		if (variaX == 1) {
			if (verificarObrigatorioComer(1) == false) {
				tabuleiro[x1][y1] = ' ';
				tabuleiro[x2][y2] = simboloPecaInicial;
				verificarTransformaDama(0, x2, y2);
				mensagem.JogadaValida = true;
				return mensagem;
			}
			else {

				mensagem.JogadaValida = false;
				mensagem.MensagemDeErro = "E Obrigado a comer!!";
				return mensagem;
			}
		}
		//Comer para a esquerda ou para a direita
		if (variaX == 2) {
			//vai ver se existe alguma peca no preta no meio
			if (variaY == -2) {
				if (tabuleiro[x1 + 1][y1 - 1] == 'O' || tabuleiro[x1 + 1][y1 - 1] == 'B') {

					tabuleiro[x1][y1] = ' ';
					tabuleiro[x1 + 1][y1 - 1] = ' ';
					tabuleiro[x2][y2] = simboloPecaInicial;
					verificarTransformaDama(1, x2, y2);
					mensagem.PossivelJogarNovamente = verificarSePossivelComerOutraPeca(1, x2, y2);
					if (mensagem.PossivelJogarNovamente) {
						mensagem.PosicaoFinal.x = x2;
						mensagem.PosicaoFinal.y = y2;
					}
					mensagem.JogadaValida = true;
					return mensagem;
				}
				else {

					return mensagem;
				}
			}
			if (variaY == 2) {
if (tabuleiro[x1 + 1][y1 + 1] == 'O' || tabuleiro[x1 + 1][y1 + 1] == 'B') {

	tabuleiro[x1][y1] = ' ';
	tabuleiro[x1 + 1][y1 + 1] = ' ';
	tabuleiro[x2][y2] = simboloPecaInicial;
mensagem.PossivelJogarNovamente = verificarSePossivelComerOutraPeca(1, x2, y2);
if (mensagem.PossivelJogarNovamente) {
	mensagem.PosicaoFinal.x = x2;
	mensagem.PosicaoFinal.y = y2;
}
verificarTransformaDama(1, x2, y2);
mensagem.JogadaValida = true;
return mensagem;
}
else {
return mensagem;
}
			}
		}
	}
	if (tabuleiro[x1][y1] == 'P') {
		if (variaX == -1) {

			if (verificarObrigatorioComer(1) == false) {
				tabuleiro[x1][y1] = ' ';
				tabuleiro[x2][y2] = 'P';
				mensagem.JogadaValida = true;
				return mensagem;
			}
			else {

				mensagem.JogadaValida = false;
				mensagem.MensagemDeErro = "E Obrigado a comer!!";
				return mensagem;
			}
		}
		//Comer para a esquerda ou para a direita
		if (variaX == -2) {
			//vai ver se existe alguma peca no preta no meio
			if (variaY == -2) {
				if (tabuleiro[x1 - 1][y1 - 1] == 'O' || tabuleiro[x1 - 1][y1 - 1] == 'B') {

					tabuleiro[x1][y1] = ' ';
					tabuleiro[x1 - 1][y1 - 1] = ' ';
					tabuleiro[x2][y2] = 'P';
					mensagem.PossivelJogarNovamente = verificarSePossivelComerOutraPeca(1, x2, y2);
					if (mensagem.PossivelJogarNovamente) {
						mensagem.PosicaoFinal.x = x2;
						mensagem.PosicaoFinal.y = y2;
					}
					mensagem.JogadaValida = true;
					return mensagem;
				}
				else {
					return mensagem;
				}
			}
			if (variaY == 2) {
				if (tabuleiro[x1 - 1][y1 + 1] == 'O' || tabuleiro[x1 - 1][y1 + 1] == 'B') {

					tabuleiro[x1][y1] = ' ';
					tabuleiro[x1 - 1][y1 + 1] = ' ';
					tabuleiro[x2][y2] = 'P';
					mensagem.PossivelJogarNovamente = verificarSePossivelComerOutraPeca(1, x2, y2);
					if (mensagem.PossivelJogarNovamente) {
						mensagem.PosicaoFinal.x = x2;
						mensagem.PosicaoFinal.y = y2;
					}
					mensagem.JogadaValida = true;
					return mensagem;
				}
				else {
					return mensagem;
				}
			}
		}
	}

}

void Tabuleiro::verificarTransformaDama(int i, int x, int y)
{
	if (i == 0) {
		if (x == 0 && tabuleiro[x][y] == 'O') {
			tabuleiro[x][y] = 'B';
		}
	}if (i == 1) {
		if (x == 7 && tabuleiro[x][y] == 'X') {
			tabuleiro[x][y] = 'P';
		}
	}
}

bool Tabuleiro::verificarSePossivelComerOutraPeca(int i, int _x, int _y)
{
	if (i == 0) {
		//Comer para cima
		if (tabuleiro[_x][_y] == 'O' || tabuleiro[_x][_y] == 'B') {

			if (_x - 1 >= 0 && _x - 2 >= 0 && _y - 1 >= 0 && _y - 2 >= 0) {
				if ((tabuleiro[_x - 1][_y - 1] == 'X' || tabuleiro[_x - 1][_y - 1] == 'P') && tabuleiro[_x - 2][_y - 2] == ' ') {
					return true;
				}
			}
			if (_x - 1 >= 0 && _x - 2 >= 0 && _y + 1 <= 7 && _y + 2 <= 7) {
				if ((tabuleiro[_x - 1][_y + 1] == 'X' || tabuleiro[_x - 1][_y + 1] == 'P') && tabuleiro[_x - 2][_y + 2] == ' '){
					return true;
				}
			}
		}
		//Comer para baixo 
		if (tabuleiro[_x][_y] == 'B') {

			if (_x + 1 <= 7 && _x + 2 <= 7 && _y - 1 >= 0 && _y - 2 >= 0) {
				if ((tabuleiro[_x + 1][_y - 1] == 'X' || tabuleiro[_x + 1][_y - 1] == 'P') && tabuleiro[_x + 2][_y - 2] == ' ') {
					return true;
				}
			}
			if (_x + 1 <= 7 && _x + 2 <= 7 && _y + 1 <= 7 && _y + 2 <= 7) {
				if ((tabuleiro[_x + 1][_y + 1] == 'X' || tabuleiro[_x + 1][_y + 1] == 'P') && tabuleiro[_x + 2][_y + 2] == ' ') {
					return true;
				}
			}
		}
		return false;
		
	}
	if (i == 1) {
		//Comer para Baixo
		if (tabuleiro[_x][_y] == 'X' || tabuleiro[_x][_y] == 'P') {
			if (_x + 1 <= 7 && _x + 2 <= 7 && _y - 1 >= 0 && _y - 2 >= 0) {
				if ((tabuleiro[_x + 1][_y - 1] == 'O' || tabuleiro[_x + 1][_y - 1] == 'B') && tabuleiro[_x + 2][_y - 2] == ' ') {
					return true;
				}
			}if (_x + 1 <= 7 && _x + 2 <= 7 && _y + 1 <= 7 && _y - 2 <= 7) {
				if ((tabuleiro[_x + 1][_y + 1] == 'O' || tabuleiro[_x + 1][_y + 1] == 'B') && tabuleiro[_x + 2][_y + 2] == ' ') {
					return true;
				}
			}
		}
		//Comer para Cima
		if (tabuleiro[_x][_y] == 'P') {
			if (_x - 1 >= 0 && _x - 2 >= 0 && _y - 1 >= 0 && _y - 2 >= 0) {
				if ((tabuleiro[_x - 1][_y - 1] == 'O' || tabuleiro[_x - 1][_y - 1] == 'B') && tabuleiro[_x - 2][_y - 2] == ' ') {
					return true;
				}
			}
			if (_x - 1 >= 0 && _x - 2 >= 0 && _y + 1 <= 7 && _y + 2 <= 7) {
				if ((tabuleiro[_x - 1][_y + 1] == 'O' || tabuleiro[_x - 1][_y + 1] == 'B') && tabuleiro[_x - 2][_y + 2] == ' ') {
					return true;
				}
			}
		}
		return false;
	}
}


bool Tabuleiro::verificarObrigatorioComer(int i)
{
	int a = 0, b = 0;

	for (a = 0; a < 8; a++) {
		for (b = 0; b < 8; b++) {
			if (verificarSePossivelComerOutraPeca(i, a, b)) {
				return true;
			}
		}
	}
		return false;
}

bool Tabuleiro::possivelMovimentarAlguma(int i)
{
	//vai verificar se é possivel comer alguma peca
	//ou se é possivelmovimentar 
	int a = 0, b = 0;

	for (a = 0; a < 8; a++) {
		for (b = 0; b < 8; b++) {
			if (verificarSePossivelComerOutraPeca(i, a, b)) {
				return true;
			}
			if (i == 0) {
				//verificar se é possivel movimentar para a direita ou esquerda alguma branca
				if (tabuleiro[a][b] == 'O' || tabuleiro[a][b] == 'B') {
					if (a - 1 >= 0 && b - 1 >= 0) {
						if (tabuleiro[a - 1][b - 1] == ' ') {
							return true;
						}
					}
					if (a - 1 >= 0 && b + 1 <= 7) {
						if (tabuleiro[a - 1][b + 1] == ' ') {
							return true;
						}
					}
				}
				if (tabuleiro[a][b] == 'B') {
					if (a + 1 <= 7 && b - 1 >= 0) {
						if (tabuleiro[a + 1][b - 1] == ' ') {
							return true;
						}
					}
					if (a + 1 <= 7 && b + 1 <= 7) {
						if (tabuleiro[a +1][b + 1] == ' ') {
							return true;
						}
					}
				}
			}if (i == 1) {
				//verificar se é possivel movimentar para a direita ou esquerda alguma branca
				if (tabuleiro[a][b] == 'X' || tabuleiro[a][b] == 'P') {
					if (a + 1 <= 7 && b - 1 >= 0) {
						if (tabuleiro[a + 1][b - 1] == ' ') {
							return true;
						}
					}
					if (a + 1 <= 7 && b + 1 <= 7) {
						if (tabuleiro[a + 1][b + 1] == ' ') {
							return true;
						}
					}
				}
				if (tabuleiro[a][b] == 'P') {
					if (a - 1 >= 0 && b - 1 >= 0) {
						if (tabuleiro[a - 1][b - 1] == ' ') {
							return true;
						}
					}
					if (a - 1 >= 0 && b + 1 <= 7) {
						if (tabuleiro[a - 1][b + 1] == ' ') {
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}





