#include <iostream> //biblioteca iostream
using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");
	
	double pv1, pv2, md;
	cout << "Digite as notas 1 e 2: ";
	cin >> pv1 >> pv2;
	md = (pv1+pv2)/2;
	cout << "Média: "<< md << endl;
	if(md >= 70)
     cout << "PARABEMNS VC FOI APROVADO DOIDDODOODIIDOIDUIEFQ3UERFH12EDFQWS" <<endl;
	if(md < 70)
	 cout << "VC FOI Reprovado! Burro. jkkjjkjk" << endl;	
	return 0;
 }