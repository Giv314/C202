#include <iostream> //biblioteca iostream
#include <math.h>
using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");
	
float x, fun;
cout << "Digite o valor de x: ";
cin >> x;

if(x > 0){
	
	fun = (1/sqrt(x)) + 1;
	cout << "O valor da fun��o calculada �: "<< fun << endl;
	
}else
	cout << "C�lculo imposs�vel de ser realizado." << endl;
return 0;
}
