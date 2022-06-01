#include <iostream> //biblioteca iostream
#include <iomanip>
#include <string.h>
#include <cstdlib>
using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");

char fruta[10] = "Morango";
char str[15]; 
cout << "Digite minha fruta preferida (jkkj): ";
cin.getline(str, 15);

while (strcmp(fruta, str)!= 0){
	cout << "Resposta errada! Tente novamente: ";
	cin.getline(str, 15);
}

cout << "\aVOCÊ ACERTOUUUUU! Seu Doido. Kkjkjkjkjkkjak." << endl;
system("pause");
	return 0;
}