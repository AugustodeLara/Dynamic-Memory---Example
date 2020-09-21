#include<iostream>
using namespace std;

#include "Carros.h"

int main()
{
	cout << "Numero de carros antes da instancia" << endl;
	cout << Carro::getCount() << endl;

	//instanciando os carros
	cout << "\n\n";
	Carro *Car01 = new Carro("Gol");
	cout << "\n\n";

	Carro *Car02 = new Carro("Corsa");
	cout << "\n\n";

	cout << "Numero de carros depois da instancia" << endl;
	cout << Car01->getCount() << endl;
	cout << "  Carro 1 =  " << Car01->getNome() << endl;
	cout << "  Carro 2 =  " << Car02->getNome() << endl;

	//deletando os carros e recuperando a memoria
	delete Car01;
	Car01 = 0;
	delete Car02;
	Car02 = 0;

	cout << "Numero de carros apos o delete" << endl;
	cout << Carro::getCount() << endl;

	system("pause");
	return 0;
}