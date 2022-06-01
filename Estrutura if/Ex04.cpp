#include <iostream> //biblioteca iostream
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	//declaração das variaveis
	float x, y;
	//entrada e saida
	cout << "Digite dois numeros: ";
	cin >> x >> y;
	//testes
	if (x > y)
		cout << x << " é maior que " << y << endl;
	else if (x == y)
		cout << "Os numeros digitados são iguais." << endl;
	else
		cout << y << " é maior que " << x << endl;
	return 0;
}
