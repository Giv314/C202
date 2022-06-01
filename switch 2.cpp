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
	switch(op)
	{
		case '+': 
            cout << "Soma = " << a + b;
            break;
        case '*':
        	cout << "Produto = " << a*b;
			break;
		default: 
            cout << "Entrada inválida..." << endl; 
	}
	
	return 0;
}