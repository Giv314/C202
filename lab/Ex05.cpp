#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main(){

float a, b1, b2 , c, delta, bh1, bh2;
cin >> a >> b1 >> c;
b2 = b1*(-1);
delta = pow(b1, 2) - (4*a*c);
if(a == 0 || delta < 0)
	cout << "Impossivel" << endl;
else{
bh1 = (b2+sqrt(delta))/(2*a);
bh2 = (b2-sqrt(delta))/(2*a);
cout << " X1 = " << fixed << setprecision (5) << bh1 << endl;
cout << " X2 = " << fixed << setprecision (5) << bh2 << endl;
}
return 0;

}