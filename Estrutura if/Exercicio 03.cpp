#include <iostream> //biblioteca iostream
using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");
	
	int idade; //declaração da variavel
	cout << "Digite a idade da pessoa desejada: ";
	cin >> idade;
	//testes e saida:
	if(idade >= 18)
		cout << "Pessoa maior de idade." << endl;
	else
		cout << "Pessoa menor de idade." << endl;
	return 0;
}