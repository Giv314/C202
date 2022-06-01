#include <iostream> //biblioteca iostream
#include <iomanip>
using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");
char nome[100];
double salario, montante, total;
cin >> nome >> salario >> montante;
total = salario + 0.15*montante;
cout << fixed << setprecision(2) << "TOTAL = R$ " << total << endl;

	return 0;
}