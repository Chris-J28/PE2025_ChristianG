/**PRESENTACION***
NOMBRE: Christian Jair Gomez Jimenez
FECHA: 6 de Febrero de 2025
PROGRAMA: Cadena de Fribonacci
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Programa para imprimir la cadena de Fribonacci, con ciclos que el usuario decida y com el limite determinado por el
************************/
#include <iostream>
using namespace std;
//incio main
int main() {
    int opcion, limite,a = 0, b = 1, temp;
    char continuar;
    do {
        cout << "Ingrese un valor límite para la serie Fibonacci: ";
        cin >> limite;
        cout << "Elija el ciclo a usar: 1. for, 2. while, 3. do-while: ";
        cin >> opcion;
        cout << "Serie Fibonacci: " << a << " " << b << " ";

        if (opcion == 1) {
            for (int i = 2; a + b <= limite; i++) {
                temp = a + b;
                cout << temp << " ";
                a = b;
                b = temp;
            }
        } else if (opcion == 2) {
            while (a + b <= limite) {
                temp = a + b;
                cout << temp << " ";
                a = b;
                b = temp;
            }
        } else if (opcion == 3) {
            do {
                temp = a + b;
                if (temp > limite) break;
                cout << temp << " ";
                a = b;
                b = temp;
            } while (true);
        } else {
            cout << "Opción no válida.\n";
        }

        cout << endl;
        cout << "¿Desea continuar? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

    return 0;
}// fin main
