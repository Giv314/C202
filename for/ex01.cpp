#include <iostream> //biblioteca iostream
using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");

int soma = 0;
for (int i = 0; i <= 10; i+= 2){
	soma += i;
	
}
    
	cout << "A soma dos números é: " << soma;

	return 0;
}