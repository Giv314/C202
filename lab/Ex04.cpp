#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main(){

int idade1, idade2;
char nome1[70], nome2[70];
cin.getline(nome1, 70);
cin >> idade1;
cin.ignore();
cin.getline(nome2, 70);
cin >> idade2;
if(idade1 > idade2)
cout << nome1 << endl;
else
if(idade1 == idade2)
cout << "Idades iguais" << endl;
else
if(idade1 < idade2)
cout << nome2 << endl;
else
cout << "Entrada invalida..." << endl;

return 0;

}