#include <iostream> //biblioteca iostream
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	//declara��o das variaveis
	float x, y;
	//entrada e saida
	cout << "Digite dois numeros: ";
	cin >> x >> y;
	//testes
	if (x > y)
		cout << x << " � maior que " << y << endl;
	else if (x == y)
		cout << "Os numeros digitados s�o iguais." << endl;
	else
		cout << y << " � maior que " << x << endl;
	return 0;
}
