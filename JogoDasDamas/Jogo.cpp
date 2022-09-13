#include "Jogo.h"
#include <xmemory>
#include <iostream>
#include "Message.h"
using namespace std;



void Jogo::menu()
{
	system("cls");
	int opcao;
	printf("\n\t__________________________________________________________\n");
	printf("\t__________________________________________________________\n");
	printf("\t__________________________________________________________\n");
	printf("\t__________________                    ____________________\n");
	printf("\t__________________                    ____________________\n");
	printf("\t__________________  JOGO  DAS  DAMAS  ____________________\n");
	printf("\t__________________                    ____________________\n");
	printf("\t__________________________________________________________\n");
	printf("\t__________________________________________________________\n");
	printf("\t__________________________________________________________\n\t\t\t\t\tCriado Por :Pedro Monteiro\n\n");

	cout << "Escolha uma das opcoes abaixo:" << endl << "1-Jogar"  << endl << "2-Sair" << endl;
	cin >> opcao;

	while (opcao != 1 && opcao != 2 && opcao != 3) {
		cout << "Insira um numero valido" << endl;
		cin >> opcao;
	}if (opcao == 1) {
		//limpa consola
		system("cls");
		//Inicializar o jogo
	}
	if (opcao == 2) {
		//limpa consola
		system("cls");
		//sair do jogo
		exit(1);
	}
}

void Jogo::IniciarJogo()
{
	//primeiro chama o menu
	while (true) {
		menu();
		//Meter nomes dos jogadores
		InserirNomeJogadoresEAtribuirPecas();
		//Agora vai começar o jogo
		int PecaJogar = 0; //0-branca joga, 1 preta joga
		bool acabouOjogo = false;
		Message mensagem;
		while (acabouOjogo != true) {
			//jogar peca branca
			JogarPecas(PecaJogar);
			if (PecaJogar == 0) {
				PecaJogar = 1;
			}
			else {
				PecaJogar = 0;
			}
			mensagem = tabuleiro.AcabouJogo();
			acabouOjogo = mensagem.acabouJogo;
		}
		//Mostrar que foi o jogador vencedor
		system("cls");
		cout << "Jogador Vencedor:" + mensagem.jogadorVencedor.nome << endl;
		system("pause");
		system("cls");
	}
	

}

void Jogo::InserirNomeJogadoresEAtribuirPecas()
{
	string nome1,nome2;
	cout << "Insira o nome do jogador 1:" << endl;
	cin >> nome1;
	cout << "Insira o nome do jogador 2:" << endl;
	cin >> nome2;

	
	//Atribuir Pecas Aleatoriamente
	int b;
	srand(time(NULL));
	b = rand() % 2;

	cout << endl << endl;
	//O jogador um vai ser sempre com as brancas e o 2 com as pretas
	tabuleiro.Um.Pecas = 'B';
	tabuleiro.Dois.Pecas = 'P';
	if (b == 0) {
		tabuleiro.Um.nome = nome2;
		tabuleiro.Dois.nome = nome1;
		cout << "Aletoriamente calhou:\n" << nome1 << " - X (Pretas)\n" << nome2 << "- O(Brancas)\n\n";
	}if (b == 1) {
		tabuleiro.Um.nome = nome1;
		tabuleiro.Dois.nome = nome2;
		cout << "Aletoriamente calhou:\n" << nome1 << "- O(Brancas)\n" << nome2 << "- X(Pretas)\n\n";
	}
	
	

	system("pause");
	system("cls");

}

void Jogo::JogarPecas(int i)
{
	Message mensagem;
	

	while (mensagem.JogadaValida == false || mensagem.PossivelJogarNovamente == true) {
		system("cls");
		tabuleiro.ImprimirTabuleiro();
		if (i == 0) {
			//JogarPecaBranca
			mensagem = tabuleiro.JogarPecaBranca(mensagem.PosicaoFinal);
			//verificar se pode comer outra
		}
		if (i == 1) {
			//JogarPecaPreta
			mensagem = tabuleiro.JogarPecaPreta(mensagem.PosicaoFinal);
		}

		if (mensagem.JogadaValida == false) {
			cout << "Movimento invaldo" << endl;
			system("pause");
		}

		if (mensagem.PossivelJogarNovamente == true && mensagem.MensagemDeErro == "") {
			cout << "Pode comer outra peca, neste caso a peca: " + mensagem.PosicaoFinal.ToString() << endl;

			system("pause");
		}
		if (mensagem.MensagemDeErro != "") {
			cout << mensagem.MensagemDeErro << endl;
			system("pause");
		}
	}	

}
