#include <iostream>
using namespace std;
int main(void) {
	int C, A;
	cin >> C >> A;
	int viajes = A / (C - 1);
	int descartar = A % (C - 1);
	int respuesta = viajes;
	if (descartar > 0) respuesta++;
	cout << respuesta << endl; 
	return 0;
}
