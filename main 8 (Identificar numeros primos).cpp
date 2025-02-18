#include <iostream>
using namespace std;

// Función para determinar si un número es primo
bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i < numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}
// Inicio de main
int main() {
    int numero;
    int sumaprimos = 0;
    cout << "Introduce un numero: ";
    cin >> numero;
    cout << "Los numeros primos hasta " << numero << " son: ";
    for (int i = 2; i <= numero; i++) {
        if (esPrimo(i)) {
            cout << i << " ";
            sumaprimos += i;
        }
    }
    cout << endl;
    cout << "La suma de los numeros primos hasta " << numero << " es: " << sumaprimos << endl;
    return 0;
}
