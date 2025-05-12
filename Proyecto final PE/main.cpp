//**PRESENTACION***
//NOMBRE: Christian Jair Gomez Jimenez
//FECHA: 19 de mayo de 2025
//PROGRAMA: Proyecto final
//CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
//PROFESOR: Sergio Franco Casillas
//DESCRIPCION: Programa recopilatorio de todos los codigos realizados durante el semestre, como proyecto final
#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>
// Archivos de cabecera de mis proyectos
#include "FuncionAct1.h"
#include "FuncionAct2.h"
#include "FuncionAct3.h"
#include "FuncionAct4.h"
#include "FuncionAct5.h"
#include "FuncionAct6.h"
#include "FuncionAct7.h"
#include "FuncionAct8.h"
#include "FuncionAct9.h"
#include "FuncionAct10.h"
#include "FuncionAct11.h"
#include "FuncionAct12.h"
#include "FuncionJuego1.h"
#include "FuncionJuego2.h"

//Inicio de main
int main() {
    using namespace std;
    int opcion;
    cout << "=====================================" << endl;
    cout << "  ¡Bienvenido a mi Proyecto Final! " << endl;
    cout << "=====================================" << endl;
    cout << "Presiona ENTER para continuar..." << endl;
    string pausa;
    getline(cin, pausa);  // Espera a que el usuario presione ENTER
    do {
        cout << "\n======= ** MENU PRINCIPAL ** =======\n"
                  << "Proyecto (1) Imprimir los datos personales del alumno\n"
                  << "Proyecto (2) Mostar las distintas cadenas de control\n"
                  << "Proyecto (3) Someter un numero a ciertas condiciones dependiendo de su valor\n"
                  << "Proyecto (4) Realizar una serie de fibonacci\n"
                  << "Proyecto (5) Calcular los multiplos de 3 y 5 de un numero?\n"
                  << "Proyecto (6) Determinar la suma de los cuadrados de una secuencia de numeros\n"
                  << "Proyecto (7) Identificar los numeros primos de un numero y posteriormente realizar la suma de estos\n"
                  << "Proyecto (8) Sumar de un arreglo\n"
                  << "Proyecto (9) Crear una calculadora que realice la suma, resta y multiplicacion de 2 matrices\n"
                  << "Proyecto (10) Realizar operaciones de conjuntos mediante vectores\n"
                  << "Proyecto (11) Realizar algoritmo para generar una secuencia de numeros, dependiendo si este es para o impar\n"
                  << "Proyecto (12) Verificar si una palabra es palindromo o no\n"
                  << "Juego 1  (13) EL ahorcado\n"
                  << "Juego 2  (14) Torres de Hanoi\n"
                  << "         (0) Salir\n"
                  << "Selecciona una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                proyecto1();
            break;
            case 2:
                proyecto2();
            break;
            case 3:
                proyecto3();
            break;
            case 4:
                proyecto4();
            break;
            case 5:
                proyecto5();
            break;
            case 6:
                proyecto6();
            break;
            case 7:
                proyecto7();
            break;
            case 8:
                proyecto8();
            break;
            case 9:
                proyecto9();
            break;
            case 10:
                proyecto10();
            break;
            case 11:
                proyecto11();
            break;
            case 12:
                proyecto12();
            break;
            case 13:
                juego1();
            break;
            case 14:
                juego2();
            break;
            case 0:
                cout << "¡Adioas, gracias por visitar mi recopilacion de proyectos de PE!\n";
            break;
            default:
                cout << "Opcion no valida, elige entre (0-14)\n";
        }
    } while (opcion != 0);

    return 0;
}
