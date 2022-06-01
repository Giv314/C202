#include <iostream> //biblioteca iostream
#include <cmath>
using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");

int alunos, resposta, cont1 = 0, cont2 = 0, cont3 = 0;

cout << "Quantos alunos? ";
cin >> alunos;
for (int i = 1; i <= alunos; ++i){
	
	cout << "Qual opção? ";
	cin >> resposta;
	if(resposta == 1)
		cont1++;
	else
		if(resposta == 2)
			cont2++;
	else
			if(resposta == 3)
				cont3++;
}
     	              

cout << cont1 << " aluno(s) responderam 1" << endl;
cout << cont2 << " aluno(s) responderam 2" << endl;
cout << cont3 << " aluno(s) responderam 3" << endl;

	return 0;
}