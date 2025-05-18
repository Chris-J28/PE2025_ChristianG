//inclusión condicional "Evitar se incluya más de una vez en el mismo proyecto"
#ifndef PROYECTO9_H
#define PROYECTO9_H

// Función para una calculadora que realice la suma, resta y multiplicación de 2 matrices.
void proyecto9();

//Fin de la inclusion condicional
#endif // PROYECTO9_H

#include <iostream>
#include "funcionesdelaAct9.h"

using namespace std;

//inicio del programa
void proyecto9()
{
    char repetir;
    do {
    int opcion, eleccionmatriz, tamaño;
    int matriz1[10][10];
        int matriz2[10][10];
    cout<<"*Este programa te permite realizar operaciones entre dos matrices*\n"<<endl;
  do {
        cout << "¿De que tamaño quieres tus matrices (2-10)? ";
        cin >> tamaño;
    } while (tamaño < 2 || tamaño > 10);

    // Bucle principal del menú
    do {
        menu2(); // Mostrar el menú
        cout << "Ingresa tu opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: // Añadir un elemento
                eleccionmatriz = ElegirMatriz();
            if (eleccionmatriz == 1) añadirElemento(matriz1, tamaño);
            else añadirElemento(matriz2, tamaño);
            break;

            case 2: // Añadir elementos aleatoriamente
                eleccionmatriz = ElegirMatriz();
                if (eleccionmatriz == 1) {
                    aleatorio(matriz1, tamaño);
                    MostarMatriz(matriz1, tamaño);
                } else {
                    aleatorio(matriz2, tamaño);
                    MostarMatriz(matriz2, tamaño);
                }
                break;

            case 3: // Sumar matrices
                cout << "Sumando matrices..." << endl;
                sumaMatrices();
                break;

            case 4: // Restar matrices
                cout << "Restando matrices..." << endl;
                restaMatrices();
                break;

            case 5: // Multiplicar matrices
                cout << "Multiplicando matrices..." << endl;
                 multiplicarMatrices();
                break;

            case 6: // Borrar un elemento
                eleccionmatriz = ElegirMatriz();
            if (eleccionmatriz == 1) borrarElemento(matriz1);
            else borrarElemento(matriz2);
            break;

            case 7: // Editar un elemento
                eleccionmatriz = ElegirMatriz();
            if (eleccionmatriz == 1) editarElemento(matriz1);
            else editarElemento(matriz2);
            break;

            case 8: // Vaciar matriz
                eleccionmatriz = ElegirMatriz();
            if (eleccionmatriz == 1) vaciarMatriz(matriz1);
            else vaciarMatriz(matriz2);
            break;

            case 9: // Mostrar matriz
                eleccionmatriz = ElegirMatriz();
            if (eleccionmatriz == 1) MostarMatriz(matriz1, tamaño);
            else MostarMatriz(matriz2, tamaño);
            break;
            case 10:
                cout << "Saliendo del programa..." << endl;
            break;
        }
    } while (opcion != 10); // Seguir hasta que el usuario elija salir
        cout << "\n¿Deseas volver a utilizar el programa? (s/S para si, n/N para no): ";
        cin >> repetir;
        cout << endl;

    } while (repetir == 's' || repetir == 'S');
    cout << "\nGracias por utilizar el programa\n\n";
}//fin del programa