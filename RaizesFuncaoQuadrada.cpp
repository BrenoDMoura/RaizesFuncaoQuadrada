#include <iostream>
using namespace std;
#include <math.h>

int main(){
	int a, b, c, delta, raiz1, raiz2;
	
	cout << "Digite o coeficiente a: \n";
	cin >> a;
	
	cout << "Digite o coeficiente b: \n";
	cin >> b;
	
	cout << "Digite o coeficiente c: \n";
	cin >> c;
	
	delta = pow(b,2) -4 * a * c;
	
	raiz1 = (-1 * b + sqrt(delta))/ 2 * a;
	raiz2 = (-1 * b - sqrt(delta))/ 2 * a;
	
	cout << "Raiz 1 = " << raiz1 << " e a Raiz 2 = " << raiz2;
	return 0;
}
