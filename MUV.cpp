#include <iostream>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	float vo, so, a, t, v, sfinal; //decalaracao das variaveis
	cout<<"Informe a velocidade inicial (m/s): "; 
	cin >> vo; //entrada de dados
	cout << endl;
	cout<<"Informe a posição incial (m): ";
	cin >> so;
	cout << endl;
	cout<<"Informe a aceleração (m/s)^2: ";
	cin >> a;
	cout << endl;
	cout<<"Informe o tempo percorrido (s): ";	
	cin >> t;
	cout << endl << endl;
	//calculos
	v = (vo + a*t);
	sfinal = (so + vo*t + a*t*t/2); 
	//saida de dados
	cout << "A velocidade final percorrida é: "<< v << " m/s" << endl;
	cout << "A posição final é: " << sfinal << " metros" << endl;
	return 0;	
	
}