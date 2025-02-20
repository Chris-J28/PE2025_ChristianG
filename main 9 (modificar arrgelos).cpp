/**PRESENTACION***
NOMBRE: Christian Jair Gomez Jimenez
FECHA: 20 de Febrero de 2025
PROGRAMA: Actividad de programacion 8
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Programa para modificar un arreglo
************************/
#include <iostream>
using namespace std;

const int EpaciosMax = 10;

void mostrarArreglo(int arreglo[], int tamaño) {
    cout << "Arreglo: ";
    for (int i = 0; i < tamaño; i++) {
        cout << arreglo[i] << " ";}
    cout << endl;}

int sumarArreglo(int arreglo[], int tamaño) {
    int suma = 0;
    for (int i = 0; i < tamaño; i++) {
        suma += arreglo[i];}
    return suma;}

void insertarValor(int arreglo[], int &tamaño, int valor) {
    if (tamaño < EpaciosMax) {
        arreglo[tamaño] = valor;
        tamaño++;
    } else {
        cout << "El arreglo está lleno, no se puede agregar más valores." << endl;}
}

void editarValor(int arreglo[], int indice, int valor) {
    if (indice >= 0 && indice < EpaciosMax) {
        arreglo[indice] = valor;
    } else {
        cout << "Índice fuera de rango." << endl;}
}

void borrarValor(int arreglo[], int &tamaño, int indice) {
    if (indice >= 0 && indice < tamaño) {
        for (int i = indice; i < tamaño - 1; i++) {
            arreglo[i] = arreglo[i + 1];}
        tamaño--;
    } else {
        cout << "Índice fuera de rango." << endl;}
}

void vaciarArreglo(int arreglo[], int &tamaño) {
    tamaño = 0;}

int main() {
    int arreglo[EpaciosMax];
    int tamaño = 0;
    int opcion, valor, indice;

    do {
        cout << "1. Insertar valor" << endl;
        cout << "2. Mostrar lista de valores" << endl;
        cout << "3. Mostrar sumatoria de todos los elementos" << endl;
        cout << "4. Editar un elemento" << endl;
        cout << "5. Borrar un elemento" << endl;
        cout << "6. Vaciar arreglo" << endl;
        cout << "7. Salir" << endl;
        cout << "Elige una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Introduce un valor: ";
            cin >> valor;
            insertarValor(arreglo, tamaño, valor);
                break;
            case 2:
                mostrarArreglo(arreglo, tamaño);
                break;
            case 3:
                cout << "La suma de todos los elementos es: " << sumarArreglo(arreglo, tamaño) << endl;
                break;
            case 4:
                cout << "Introduce el indice del elemento a editar: ";
                cin >> indice;
                cout << "Introduce el nuevo valor: ";
                cin >> valor;
                editarValor(arreglo, indice, valor);
                break;
            case 5:
                cout << "Introduce el indice del elemento a borrar: ";
                cin >> indice;
                borrarValor(arreglo, tamaño, indice);
                break;
            case 6:
                vaciarArreglo(arreglo, tamaño);
            cout << "El arreglo ha sido vaciado." << endl;
            break;
            case 7:
                cout << "Saliendo..." << endl;
            break;
            default:
                cout << "Opcion no valida. Inténtalo de nuevo." << endl;
        }
    } while (opcion != 7);
    return 0;
}