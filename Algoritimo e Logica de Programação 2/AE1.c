/*
Unicesumar - Analise e Desenvolvimento de Sistemas - EAD
Algoritimo e Lógica de Programação II - AE1
*/

//Inclusão das Bibliotecas.
#include <stdio.h>

//Inclusão de variáveis pré-definidas
#define nome_empresa "ANGELO SupTec" //Empresa Fictícia.
#define ra "20126634-5" // RA gerado para identificar o aluno no sistema da faculdade.
#define nome_completo "Angelo Rodrigo Almeida Fernandes" //Nome completo do aluno.
#define reajuste 7.50 //Percentual do reajuste.
#define sb 1750 //Sálario limite para obtenção do benefício
#define beneficio 150.00 //Benefício para quem recebe até 1750,00.

int main (){
	
	//Declaração das Variáveis.
	float sl = 0, sf = 0, p0; //sl = Salario Liquido - sf = Salario Final - porc = Conversão de %
	
	//Impressão do cabeçalho contendo o nome da empresa, o RA e o nome completo.
	printf ("************************************************************\n");
	printf ("* Empresa %s *\n", nome_empresa);
	printf ("* Nome: %s *\n", nome_completo);
	printf ("* RA: %s *\n", ra);
	printf ("************************************************************\n");
	printf ("Informe seu salario liquido do ultimo holerite: ");
	scanf ("%f", &sl); //Armazenamento do salário na variável sl.
	printf ("************************************************************\n");
	
	//calculo para o reajuste salárial.
	sf = sl + (sl * (reajuste / 100));
	//Validação para benefício.
	if (sl <= sb) {
		sf = sf + beneficio;
	}
	
	//impressão do resultado.
	printf ("* Salario liquido informado R$ %.2f *\n", sl);
	printf ("* Salario a receber R$ %.2f *\n", sf);
	printf ("************************************************************\n");
	//Fim
	return (0);
}