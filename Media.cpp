#include <iostream> //biblioteca iostream
#include <iomanip>
using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");
	
	float pv1, pv2, ep, media;
	cout << "Digite a nota da PV1: ";
	cin >> pv1;
	cout << "Digite a nota da PV2: ";
	cin >> pv2;
	cout << "Digite a nota dos exerc�cios propostos (EP): ";
	cin >> ep;
	//c�lculos
	media = (pv1 + pv2)/2*0.9 + ep*0.1;
	cout << endl;
	cout << fixed << setprecision(1);
	cout << "A m�dia final � " << media << " pontos" << endl;
	return 0;
}