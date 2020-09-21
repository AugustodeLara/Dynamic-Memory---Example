#include<iostream>
using namespace std;

//Evitar erro de compilação pelo uso do strcpy()
#pragma warning(disable : 4996)

#include<cassert>
#include "Carros.h"

//Iniciar o atributo estatico
int Carro::count = 0;

//Implemento metodo estatico
int Carro::getCount()
{
	return count;
}

//Alocando com o construtor
Carro::Carro(const char *N)
{
	Nome = new char[strlen(N) + 1];
	// asseguro que a memoria foi alocada
	assert(Nome != 0);
	strcpy(Nome, N);

	//faço o incremento do count
	++count;

	cout << "Construtor para o carro" << Nome << "foi chamado" << endl;
}

//Desalocar com o destruidos
Carro::~Carro()
{
	cout << "Destrutidor para o carro" << Nome << "foi chamado" << endl;

	//uso delete para recuperar a memoria
	delete[] Nome;
	//decremento count
	--count;
}

//Uso do metodo getNome
const char *Carro::getNome() const
{
	return Nome;
}