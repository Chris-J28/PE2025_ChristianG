//inclusión condicional "Evitar se incluya más de una vez en el mismo proyecto"
#ifndef PROYECTO7_H
#define PROYECTO7_H

// Función para encontrar la suma de los numeors primos de cierta cantidad
void proyecto7();

//Fin de la inclusion condicional
#endif // PROYECTO7_H
#include <iostream>
// Función para determinar si un numero es primo o no
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
// Funcion para dentificar los numeros primos de un número dado por el usuario y posteriormente realizar la suma de estos
void proyecto7() {
    using namespace std;
//Inicio del proyecto
    {
        char opcion;
        int numero;
        int sumaprimos = 0;
        cout << "*Este programa calculara los numeros primos de un numero y los sumara*\n" << endl;
        do {
            sumaprimos = 0;
            cout << "Introduce un numero: ";
            cin >> numero;
            cout << "Los numeros primos hasta " << numero << " son: ";
            //Ciclo For para sumar los numeros primos
            for (int i = 2; i <= numero; i++) {
                if (esPrimo(i)) {
                    cout << i << " ";
                    sumaprimos += i;
                }
            }
            cout << endl;
            cout << "La suma de los numeros primos hasta " << numero << " es: " << sumaprimos << endl;
            cout << "¿Deseas volver a usar el programa? (s/S para si o n/N para no) " << endl;
            cin >> opcion;
        } while (opcion == 's' || opcion == 'S');
    }cout << "\nGracias por utilizar el programa\n\n";
}//Fin del proyecto
