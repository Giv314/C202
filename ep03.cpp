#include <iostream> //biblioteca iostream
#include <iomanip>
using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");

int vendas;
float preco1, preco2;
cout << "Vendas: ";
cin >> vendas;
cout << "Pre�o atual: ";
cin >> preco1;
if (vendas == 0 && preco1 > 0){
	preco2 = preco1 * 0.9;
    cout << fixed << setprecision(2) << "Novo pre�o: R$ " << preco2 << " (Pre�o reduzido)" << endl;
}
if(vendas > 0 && vendas < 500 && preco1 > 0){
    preco2 = preco1;
    cout << fixed << setprecision(2) << "Novo pre�o: R$ " << preco2 << " (Pre�o sem reajuste)"<< endl;
}
if(vendas >= 500 && vendas < 1000 && preco1 > 0){
	preco2 = preco1 * 1.10;
    cout << fixed << setprecision(2) << "Novo pre�o: R$ " << preco2 << " (Pre�o aumentado)" << endl;
}
if(vendas >= 1000 && preco1 > 0){
	preco2 = preco1 * 1.15;
    cout << fixed << setprecision(2) << "Novo pre�o: R$ " << preco2 <<  " (Pre�o aumentado)" << endl;
}
if(vendas < 0 || preco1 < 0){
	cout << "Erro de entrada...";
}
return 0;
}