#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main(){
	int x1, x2, x3;
	float v1, v2, v3;
    cin >> x1 >> x2 >> x3;
    v1 = (10*x1) - (4./3)*x1;
    v2 = (10*x2) - (4./3)*x2;
    v3 = (10*x3) - (4./3)*x3;
    if(v1 > v2 && v1 > v3)
    	cout << "Moto 1" << endl;
    if(v1 < v2 && v3 < v2)
    	cout << "Moto 2" << endl;
    if(v3 > v1 && v3 > v2)
    	cout << "Moto 3" << endl;

return 0;

}
