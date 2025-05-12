#ifndef FUNCIONESDELAACT10_H
#define FUNCIONESDELAACT10_H

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int opcion;
//fucnion de menu
void menu3() {
    cout << "\n** Bienvenido, selecciona una opcion para tus conjuntos **" << endl;
    cout << "**********************" << endl;
    cout << "1. Añadir elemento" << endl;
    cout << "2. Borrar elemento" << endl;
    cout << "3. Editar elemento" << endl;
    cout << "4. Vaciar conjunto" << endl;
    cout << "5. Union de conjuntos" << endl;
    cout << "6. Interseccion de conjuntos" << endl;
    cout << "7. Diferencia de conjuntos (C1 - C2)" << endl;
    cout << "8. Complemento de conjunto" << endl;
    cout << "9. Mostrar conjuntos" << endl;
    cout << "10. Salir" << endl;
}
//Funciones para elegir en que conjunto se debe de realizar las operaciones
void ElegirConjunto() {
    cout << "Que conjunto desea seleccionar: (1 o 2): ";
    cin >> opcion;
    while (opcion != 1 && opcion != 2) {
        cout << "Opcion no valida, selecciona 1 o 2: ";
        cin >> opcion;
    }
}
//Funcion para ingresar un elemento al conjunto
void InsertarElemento(int valor, vector<int>& conjunto) {
    if (find(conjunto.begin(), conjunto.end(), valor) == conjunto.end()) {
        conjunto.push_back(valor);
        cout << "Elemento " << valor << " añadido exitosamente." << endl;
    } else {
        cout << "El elemento ya existe en el conjunto." << endl;
    }
}
//Funcion para borrar un elemento en especifico del conjunto
void BorrarElemento(int valor, vector<int>& conjunto) {
    auto contador = find(conjunto.begin(), conjunto.end(), valor);
    if (contador != conjunto.end()) {
        conjunto.erase(contador);
        cout << "Elemento " << valor << " borrado exitosamente." << endl;
    } else {
        cout << "El elemento no existe en el conjunto." << endl;
    }
}
//Editar un elemnto del conjunto
void EditarElemento(vector<int>& conjunto) {
    int viejo, nuevo;
    cout << "Ingrese el valor a editar: ";
    cin >> viejo;
    auto contador = find(conjunto.begin(), conjunto.end(), viejo);
    if (contador != conjunto.end()) {
        cout << "Ingrese el nuevo valor: ";
        cin >> nuevo;
        *contador = nuevo;
        cout << "Elemento editado exitosamente." << endl;
    } else {
        cout << "El elemento no existe en el conjunto." << endl;
    }
}
//Funcion para vaciar el conjunto
void VaciarConjunto(vector<int>& conjunto) {
    conjunto.clear();
    cout << "Conjunto vaciado exitosamente." << endl;
}
//Funcion para imprimir el conjunto
void MostrarConjunto(const vector<int>& conjunto) {
    if (conjunto.empty()) {
        cout << "El conjunto esta vacio" << endl;
    } else {
        for (int val : conjunto) {
            cout << val << " ";
        }
        cout << endl;
    }
}
//Funcion con vectores para realizar la union de los conjuntos
vector<int> Union(const vector<int>& c1, const vector<int>& c2) {
    vector<int> resultado = c1;
    for (int val : c2) {
        if (find(resultado.begin(), resultado.end(), val) == resultado.end()) {
            resultado.push_back(val);
        }
    }
    return resultado;
}
//Funcion con vectores para realizar la interseccion de los conjuntos
vector<int> Interseccion(const vector<int>& c1, const vector<int>& c2) {
    vector<int> resultado;
    for (int val : c1) {
        if (find(c2.begin(), c2.end(), val) != c2.end()) {
            resultado.push_back(val);
        }
    }
    return resultado;
}
//Funcion con vectores para realizar la diferencia entre los conjuntos
vector<int> Diferencia(const vector<int>& c1, const vector<int>& c2) {
    vector<int> resultado;
    for (int val : c1) {
        if (find(c2.begin(), c2.end(), val) == c2.end()) {
            resultado.push_back(val);
        }
    }
    return resultado;
}
//Funcion para imprimir el complemento del conjunto
vector<int> Complemento(const vector<int>& c1, const vector<int>& c2) {
    return Diferencia(c2, c1); // Complemento respecto al otro conjunto
}
// Fin inclusion condicional
#endif