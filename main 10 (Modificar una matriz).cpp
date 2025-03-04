//**PRESENTACION***
//NOMBRE: Christian Jair Gomez Jimenez
//FECHA: 4 de marzo de 2025
//PROGRAMA: Actividad de programacion 9
//CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
//PROFESOR: Sergio Franco Casillas
//DESCRIPCION: Programa para modificar matrices y realizar operaciones basicas

#include <iostream>
#include "funciones.h"

using namespace std;
//Variables Globales
int opcion, eleccionmatriz;
//inicio main
int main()
{
  do {
        cout << "¿De qué tamaño quieres tus matrices (2-10)? ";
        cin >> tamaño;
    } while (tamaño < 2 || tamaño > 10);

    // Bucle principal del menú
    do {
        menu(); // Mostrar el menú
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
                    MostarMatriz(matriz1);
                } else {
                    aleatorio(matriz2, tamaño);
                    MostarMatriz(matriz2);
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
            if (eleccionmatriz == 1) MostarMatriz(matriz1);
            else MostarMatriz(matriz2);
            break;
        }
    } while (eleccion != 10); // Seguir hasta que el usuario elija salir

    return 0;
}