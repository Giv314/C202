#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	/*declaração das variaveis.
	qn é a quantidade de numeros que o usuário vai digitar
	numero são os numeros que o usuarios digitará
	maior armazenará o maior numero, e menor, o menor (kkjjkk??)*/
	
	int qn, numero = 0, maior = -10000, menor = 10000;
	cin >> qn; //o usuario digitará a quantidade de numeros que ele quer
	for(int i = 1; i <= qn; i++){ 
    /* no ciclo for, declaramos uma variavel i, que fará com que o programa rode n vezes.
    essas n vezes será igual à variável qn, digitada anteriormente. Traduzindo oq está
	escrito, variável i é igual a 1. Enquanto i for menor ou igual à quantidade de numeros,
	incremente 1 na variável.*/
		
		cin >> numero; // dentro do ciclo for, precisamos que o usuario digite os numeros qn vezes
		if (numero > maior) 
			maior = numero;
		/* Traduzindo, se o numero digitado for maior que a variável maior (que vale -1000 no
		primeiro ciclo), maior receberá o valor do numero digitado. Por exemplo, se o numero digitado
		foi 1, ele vai comparar. 1 é maior que -10000. Então maior receberá esse valor.*/
		 
		if (numero < menor)
			menor = numero;
	}
cout << "Maior: " << maior << endl;
cout << "Menor: " << menor;
return 0;

}
