#include <iostream> //biblioteca iostream
#include <cmath>
using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");

int alunos, nota1, nota2, media;
cout << "Quantos alunos? ";
cin >> alunos;
for(int i = 1; i <= alunos; i++){
	cout << "Digite as notas P1 e P2 do aluno " << i << ": ";
	cin >> nota1 >> nota2;
	media = (nota1 + nota2)/2;
	cout << "Média: " << media;
	if (media >= 50)
		cout <<	" - APROVADO " << endl;
	else
		cout << "- REPROVADO " << endl;
}
	return 0;
}