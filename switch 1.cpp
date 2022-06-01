#include <iostream> //biblioteca iostream
using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");
	double a, b;
	char op;
	cout << "Digite dois números: ";
	cin >> a >> b;
	cout << "Qual opção: + para soma ou * para produto?: ";
	cin >> op; //op recebe + ou *
    //testes e saida
	if(op == '+')
		cout << "Soma = " << a + b << endl;
    else
	if(op == '*')
		cout << "Produto = " << a*b << endl;
	else
		cout << "Entrada inválida." << endl;
	return 0;
}