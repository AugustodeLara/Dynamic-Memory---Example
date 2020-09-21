
class Carro
{

public:
	//metodo construtor
	Carro(const char*);

	//metodo destruidor
	~Carro();

	// retorno do nome
	const char *getNome() const;

	//metodo estatico que retorna numero de objetos instanciados
	static int getCount();

private:
	char *Nome;

	//numero de dados instanciados
	static int count;
};
