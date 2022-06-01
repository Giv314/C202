#include <iostream> //biblioteca iostream
#include <iomanip> //bibliotea iomanip
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float reais, dolar, euro;
	cout << "Digite o valor em reais (R$): ";
	cin >> reais;
	//calculos
	dolar = reais/5.60;
	euro = reais/6.70;
	cout << fixed << setprecision(2);
	cout << "O Valor digitado equivale a " << dolar << " dólares" << endl;
	cout << "E a " << euro << " euros" << endl;  
	return 0;

}