//#include <stdio.h>
//#include <stdlib.h>
//#include <locale.h>
//
//struct data
//{
//	int mes;
//	int ano;
//};
//struct livro
//{
//	char nome[30];
//	char autor[50];
//	struct data data_pub; //aqui estou chamando a struct data, com seus atributos individuais a fazer parte do livro
//};
//
//int main() 
//{
//	setlocale(LC_ALL, "Portuguese");
//	//estou chamando a estrutura Livro, dando um nome a ela(l1/l2) e inserindo valores para os atributos nome e autor
//	struct livro l1 ={"Primo Basílio", "Eca de Queiroz"};
//	l1.data_pub.ano = 1878;
//	
//	struct livro l2 ={"Dom Casmurro", "Machado de Assis"};
//	l2.data_pub.ano = 1899;
//	//observe que, aqui estão sendo retornadas as informações inseridas nos 2 livros cadastrados acima		
//	printf("Livro 1: %s \nAutor: %s \nAno: %d \n", l1.nome, l1.autor, l1.data_pub.ano);
//	printf("Livro 2: %s \nAutor: %s \nAno: %d \n", l2.nome, l2.autor, l2.data_pub.ano);
//	
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct data
{
	int mes;
	int ano;
}TP_DATA;

typedef struct livro
{
	char nome[30];
	char autor[50];
	TP_DATA data_pub; //aqui estou chamando a struct data, com seus atributos individuais a fazer parte do livro
}TP_LIVRO;

void mostra(TP_LIVRO *livro)
{
	printf("Livro em mostra(): %s \n Autor: %s \n Ano: %d \n", livro->nome, livro->autor, livro->data_pub.ano);
	livro->data_pub.ano = 2021;
}


int main() 
{
	setlocale(LC_ALL, "Portuguese");
	//estou chamando a estrutura Livro, dando um nome a ela(l1/l2) e inserindo valores para os atributos nome e autor
	TP_LIVRO l1 ={"Primo Basílio", "Eca de Queiroz"};
	l1.data_pub.ano = 1878;
	
	mostra(&l1);
	//observe que, aqui estão sendo retornadas as informações inseridas nos 2 livros cadastrados acima		
	printf("Livro depois de mostra(): %s \nAutor: %s \nAno: %d \n", l1.nome, l1.autor, l1.data_pub.ano);

	return 0;
}
