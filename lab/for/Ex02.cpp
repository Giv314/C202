#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	/*declara��o das variaveis.
	qn � a quantidade de numeros que o usu�rio vai digitar
	numero s�o os numeros que o usuarios digitar�
	maior armazenar� o maior numero, e menor, o menor (kkjjkk??)*/
	
	int qn, numero = 0, maior = -10000, menor = 10000;
	cin >> qn; //o usuario digitar� a quantidade de numeros que ele quer
	for(int i = 1; i <= qn; i++){ 
    /* no ciclo for, declaramos uma variavel i, que far� com que o programa rode n vezes.
    essas n vezes ser� igual � vari�vel qn, digitada anteriormente. Traduzindo oq est�
	escrito, vari�vel i � igual a 1. Enquanto i for menor ou igual � quantidade de numeros,
	incremente 1 na vari�vel.*/
		
		cin >> numero; // dentro do ciclo for, precisamos que o usuario digite os numeros qn vezes
		if (numero > maior) 
			maior = numero;
		/* Traduzindo, se o numero digitado for maior que a vari�vel maior (que vale -1000 no
		primeiro ciclo), maior receber� o valor do numero digitado. Por exemplo, se o numero digitado
		foi 1, ele vai comparar. 1 � maior que -10000. Ent�o maior receber� esse valor.*/
		 
		if (numero < menor)
			menor = numero;
	}
cout << "Maior: " << maior << endl;
cout << "Menor: " << menor;
return 0;

}
