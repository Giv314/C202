#include <iostream> //biblioteca iostream
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");
double num = 3, res = 1, sinal = 1, fat = 1;

for (int j = 1; j <= 5; j++){
	for(int i = 1; i <= num; i++){
	fat *= i;
}
	res += num/(fat*(sinal));
	sinal *= (-1);
	num += 2;
	fat = 1;
}
cout << fixed << setprecision(5) << res << endl;
}