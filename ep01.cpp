#include <iostream> //biblioteca iostream
#include <cmath>
using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");
	float t;
	float y;
	cout << "Digite o valor de t: ";
	cin >> t;
	if(t >= -1 && t <= 1)
		y = 1 - abs(t);
	else
		y = 0;
    cout << "O valor de f(t) é " << y;
	return 0;
}