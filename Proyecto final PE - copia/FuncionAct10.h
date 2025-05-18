//inclusión condicional "Evitar se incluya más de una vez en el mismo proyecto"
#ifndef PROYECTO10_H
#define PROYECTO10_H

// Función para realizar operaciones de conjuntos con vectores y arreglos.
void proyecto10();

//Fin de la inclusion condicional
#endif // PROYECTO10_H

#include <iostream>
#include <vector>
#include "funcionesdelaAct10.h"
using namespace std;

vector<int> conjunto1;
vector<int> conjunto2;

void proyecto10() {
char repetir;
    do {
    bool eleccion = true;
    int opcion;
//Inicio del programa
    cout<<"*Este programa te permite realizar operaciones basicas entre dos conjuntos, medinate vectores*\n"<<endl;
    do {
        //llamr al menu
        menu3();
        cout << "Seleccione una opcion: ";
        cin >> opcion;
// switch con las opciones del menu
        switch (opcion) {
            case 1: { // Añadir elemento
                int valor;
                ElegirConjunto();
                cout << "Ingrese el valor a añadir: ";
                cin >> valor;
                if (opcion == 1) {
                    InsertarElemento(valor, conjunto1);
                } else {
                    InsertarElemento(valor, conjunto2);
                }
                break;
            }
            case 2: { // Borrar elemento
                ElegirConjunto();
                if (opcion == 1) {
                    MostrarConjunto(conjunto1);
                } else {
                    MostrarConjunto(conjunto2);
                }
                int valor;
                cout << "Ingrese el valor a borrar: ";
                cin >> valor;
                if (opcion == 1) {
                    BorrarElemento(valor, conjunto1);
                } else {
                    BorrarElemento(valor, conjunto2);
                }
                break;
            }
            case 3: { // Editar elemento
                ElegirConjunto();
                if (opcion == 1) {
                    MostrarConjunto(conjunto1);
                    EditarElemento(conjunto1);
                } else {
                    MostrarConjunto(conjunto2);
                    EditarElemento(conjunto2);
                }
                break;
            }
            case 4: { // Vaciar conjuntos
                ElegirConjunto();
                if (opcion == 1) {
                    VaciarConjunto(conjunto1);
                } else {
                    VaciarConjunto(conjunto2);
                }
                break;
            }
            case 5: { // Unión
                vector<int> resultado = Union(conjunto1, conjunto2);
                cout << "Resultado de la union: ";
                MostrarConjunto(resultado);
                break;
            }
            case 6: { // Interseccion
                vector<int> resultado = Interseccion(conjunto1, conjunto2);
                cout << "Resultado de la interseccion: ";
                MostrarConjunto(resultado);
                break;
            }
            case 7: { // Diferencia
                vector<int> resultado = Diferencia(conjunto1, conjunto2);
                cout << "Resultado de la diferencia (C1 - C2): ";
                MostrarConjunto(resultado);
                break;
            }
            case 8: { // Complemento
                ElegirConjunto();
                vector<int> resultado;
                if (opcion == 1) {
                    resultado = Complemento(conjunto1, conjunto2);
                } else {
                    resultado = Complemento(conjunto2, conjunto1);
                }
                cout << "Resultado del complemento: ";
                MostrarConjunto(resultado);
                break;
            }
            case 9: { // Mostrar conjuntos
                cout << "Conjunto 1: ";
                MostrarConjunto(conjunto1);
                cout << "Conjunto 2: ";
                MostrarConjunto(conjunto2);
                break;
            }
            case 10: // Salir
                eleccion = false;
                cout << "¡Gracias por usar el programa!" << endl;
                break;
            default:
                cout << "Opcion no valida, intente de nuevo." << endl;
        }
    } while (eleccion);
        cout << "¿Deseas volver a utilizar el programa?? (s/n): ";
        cin >> repetir;
    } while (repetir == 's' || repetir == 'S');
    cout << "\nGracias por utilizar el programa\n\n";
}//fin del programa
