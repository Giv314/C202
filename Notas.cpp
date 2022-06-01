#include <iostream> //biblioteca iostream
using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");
	
	int valor;
	cout << "Digite um valor: " << endl;
	cin >> valor;
	cout << valor/100 << " Notas de 100 " << endl;
	valor %= 100;
	cout << valor/50 << " Notas de 50 "<< endl;
	
	return 0;
	
	
	
}