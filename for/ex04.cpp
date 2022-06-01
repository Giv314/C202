#include <iostream> //biblioteca iostream
#include <cmath>
using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");

float x, f, soma = 0;

cout << "Valor de x: ";
cin >> x;
for(int i = 1; i <= 10; ++i){
	f = pow(x, i);
	soma += f;
	
}
cout << "Valor da soma: " << soma;
	return 0;
}