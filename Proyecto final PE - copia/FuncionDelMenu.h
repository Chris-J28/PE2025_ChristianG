//inclusión condicional "Evitar se incluya más de una vez en el mismo proyecto"
#ifndef FuncionesMenu_H
#define FuncionsMenu_H

// Función que imprime mis datos personales
void FuncionesMenu();

//Fin de la inclusion condicional
#endif // FuncionesMenu_H
#include <iostream>
#include <string>
#include <thread>
using namespace std;


void Pausa() {
    cout << "Cargando...\n";
    cout << "Presiona ENTER para continuar...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}
void Limpiarpantalla(int n=50) {
    for (int i = 0; i < n; ++i)
        cout << '\n';
}
void header(const string &título) {
    cout << string(60, '=') << "\n";
    cout << "   " << título << "\n";
    cout << string(60, '=') << "\n\n";
}
//Fin de las funciones