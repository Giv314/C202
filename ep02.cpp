#include <iostream> //biblioteca iostream
#include <cmath>
using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");

   int npessoas, op, op1 = 0, op2 = 0, op3 = 0;
   float p1, p2, p3, soma;
   cout << "N�mero de pessoas: ";
   cin >> npessoas;
   cout << "Voc� aprova as a��es do governo federal com rela��o � pandemia?" << endl; 
   cout << "(1 p/ sim ; 2 p/ n�o ; 3 p/ n�o sei)?" << endl;
   for(int i = 1; i <= npessoas; i++){
   cout << "Op��o: ";
   cin >> op;
   
if(op == 1)
   op1++;
else
     if(op == 2)
     op2++;
else
	if(op ==3)
	op3++;
   }
   
soma = op1 + op2 + op3;
p1 =  op1/soma;
p2 =  op2/soma;
p3 =  op3/soma;
cout << endl;
cout << op1 << " Pessoas votaram na op��o 1 (" << p1*100 << "%)" << endl;
cout << op2 << " Pessoas votaram na op��o 2 (" << p2*100 << "%)" << endl;
cout << op3 << " Pessoas votaram na op��o 3 (" << p3*100 << "%)" << endl;
  	
	return 0;
}