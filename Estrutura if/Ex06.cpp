#include <iostream> //biblioteca iostream
#include <math.h>
using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");
//declara��o das variaveis	
float x, y, z;
//entrada
cout << "Digite o valor de x: ";
cin >> x;
cout << "Digite o valor de y: ";
cin >> y;
//testes e saida
if(x - y < 0 || x + y <= 0)
	cout << "C�lculo imposs�vel" << endl;
else{
z = sqrt(x-y)/sqrt(x+y);
cout << "O valor da fun��o �: " << z << endl; 
}
return 0;
}
