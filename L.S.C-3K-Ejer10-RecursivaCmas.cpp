// L.S.C-3K-Ejer10-RecursivaCmas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//RECURSIVA PAOLA JAZMIN ESQUINCA LOPEZ

#include <iostream>
using namespace std;

int sumaRecursiva(int n) {
	if (n <= 9)
		return n;
	else
		return sumaRecursiva(n / 10) + n % 10;
}

int main() {
	int n;
	cout << "Ingresa un número entero: ";
	cin >> n;

	int resultado = sumaRecursiva(n);
	cout << "La suma de los dígitos es:" << resultado << endl;

	return 0;
}