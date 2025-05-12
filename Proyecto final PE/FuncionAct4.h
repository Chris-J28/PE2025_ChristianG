//inclusión condicional "Evitar se incluya más de una vez en el mismo proyecto"
#ifndef PROYECTO4_H
#define PROYECTO4_H

// Función para realizar un serie de fibonacci
void proyecto4();

//Fin de la inclusion condicional
#endif // PROYECTO4_H
#include <iostream>
void proyecto4() {
    using namespace std;
    //incio del proyecto
    {
        int opcion, limite,a = 0, b = 1, temp;
        char continuar;
        cout << "Este programa te imprimira la serie de fibonacci hasta el limite que decidas" << endl;
        do {
            //Menu para seleccionar el limite de la serie y con qie cilo utilizar
            cout << "Ingrese un valor limite para la serie Fibonacci: ";
            cin >> limite;
            cout << "Elija el ciclo a usar: 1. for, 2. while, 3. do-while: ";
            cin >> opcion;
            cout << "Serie Fibonacci: " << a << " " << b << " ";

            if (opcion == 1) {
                //Realizar por cilo for
                for (int i = 2; a + b <= limite; i++) {
                    temp = a + b;
                    cout << temp << " ";
                    a = b;
                    b = temp;
                }
            } else if (opcion == 2) {
                //Realizar por ciclo while
                while (a + b <= limite) {
                    temp = a + b;
                    cout << temp << " ";
                    a = b;
                    b = temp;
                }
            } else if (opcion == 3) {
                //Realizar por ciclo do-while
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
        cout << "\nGracias por utilizar el programa\n\n";
        //fin del programa
    }
}
