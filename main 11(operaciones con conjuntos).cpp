//**PRESENTACION***
//NOMBRE: Christian Jair Gomez Jimenez
//FECHA: 4 de marzo de 2025
//PROGRAMA: Actividad de programacion 10
//CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
//PROFESOR: Sergio Franco Casillas
//DESCRIPCION: Programa para realizar operaciones basicas con conjuntos, asi como editarlos



#include <iostream>
#include <vector>
#include "Funciones.h"
using namespace std;

vector<int> conjunto1;
vector<int> conjunto2;

int main() {
    bool eleccion = true;
    int opcion;

    do {
        menu();
        cout << "Seleccione una opcion: ";
        cin >> opcion;

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

    return 0;
}
