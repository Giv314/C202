#include <iostream> //biblioteca iostream
using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");
	double a, b;
	char op;
	cout << "Digite dois n�meros: ";
	cin >> a >> b;
	cout << "Qual op��o: + para soma ou * para produto?: ";
	cin >> op; //op recebe + ou *
    //testes e saida
	if(op == '+')
		cout << "Soma = " << a + b << endl;
    else
	if(op == '*')
		cout << "Produto = " << a*b << endl;
	else
		cout << "Entrada inv�lida." << endl;
	return 0;
}