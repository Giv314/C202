#include <iostream> //biblioteca iostream
#include <cmath>
using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");

float x, f, soma = 0, i;

cout << "Valor de x: ";
cin >> x;
soma = x;
for(i = 2; i <= 10; i+=2){

f = x/i;
soma += f;	
	
}
cout << "Valor da função f(i): " << soma;
	return 0;
}