#include <iostream> //biblioteca iostream
using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");

int num, num2=0, pessoas;

cout << "Digite o número de pessoas: ";
cin >> pessoas;
for (int i = 1; i <= pessoas; i++){
	cout << "Idade da pessoa "<< i << ": ";
	cin >> num;
	if(num > 21){
	
		++num2;
			
	}		
	
}
    
	cout << num2 << " pessoa (s) tem mais de 21 anos.";

	return 0;
}