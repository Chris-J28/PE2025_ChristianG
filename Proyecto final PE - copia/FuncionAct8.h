//inclusión condicional "Evitar se incluya más de una vez en el mismo proyecto"
#ifndef PROYECTO8_H
#define PROYECTO8_H

// Función para elaborar una suma de un arreglo
void proyecto8();

//Fin de la inclusion condicional
#endif // PROYECTO8_H
#include <iostream>
using namespace std;
//Funcion
void intro() {
    cout<<"** Bienvenido, selecciona una opcion para realizar a tu arreglo**"<<endl;
    cout<<"**************"<<endl;
    cout<<"1. añadir elemento"<<endl;
    cout<<"2. Mostar arreglo"<<endl;
    cout<<"3. Mostrar suma de los elementos del arreglo"<<endl;
    cout<<"4. Editar algun elemento"<<endl;
    cout<<"5. Borrar un elemento"<<endl;
    cout<<"6. Vaciar arreglo"<<endl;
    cout<<"7. Salir"<<endl;
}
//inicio del programa
 void proyecto8() {
    char repetir;
    do {
        float arreglo[10];
        bool menu = true;
        char opcion;
        float valor;
        int posicion = 0;
        float suma = 0;
        int indice;
        cout << "*Este progrma te permitira hacer operaciones basicas con un arrgelo que tu rellenes*\n"<< endl;
        //iniciamos ciclo del menu
        while (menu==true) {
            intro();
            cin >> opcion;

            switch (opcion) {
                case '1': {
                    if (posicion >= 0 && posicion < 10) {
                        cout << "Ingrese un numero entero: ";
                        cin >> valor;
                        arreglo[posicion] = valor;
                        posicion++;
                    }//fin if
                    else {
                        cout<<"Valor fuera del rango"<<endl;
                    }//fin else
                    break;
                }//fin caso 1
                //Inicio case 2
                case '2': {
                    for (int i = 0; i<posicion; i++) {
                        cout<< "[Posicion " << i <<  " es " <<arreglo[i] << "]"<<endl;
                    }//fin del for
                    break;
                }//fin case 2
                //inicio caso 3
                case '3': {
                    suma = 0;
                    for (int i = 0; i<posicion; i++) {
                        suma += arreglo[i];
                    }cout<<"Suma = "<<suma<<endl;
                    break;
                }//fin caso 3
                //inicio case 4
                case '4':{
                    cout<<"¿En que indice deseas editar su elemento?"<<endl;
                    cin>>indice;
                    if(posicion>0 && indice>=0 && indice<posicion){
                        cout<<"¿Que valor quieres ingresar?"<<endl;
                        cin>>valor;
                        arreglo[indice] = valor;
                        cout<<"Valor editado con exito"<<endl;
                    }else {cout<<"Indice no valido, intentalo de nuevo"<<endl;}
                    break;
                }//fin case 4
                //incio case 5
                case'5': {
                    cout << "¿En que indice deseas borrar su elemento?" << endl;
                    cin >> indice;
                    if (posicion > 0 && indice >= 0 && indice < posicion) {
                        for (int i = indice; i < posicion - 1 ; i++) {
                            arreglo[i] = arreglo[i + 1];
                        }
                        posicion--;
                        cout << "Valor borrado con exito" << endl;
                    } else cout << "Indice no valido" << endl;
                    break;
                } //fin case 5
                //inicio case 6
                case '6': {
                    posicion=0;
                    cout<<"Arreglo vaciado"<<endl;
                    break;
                }//fin case 6
                case '7': {//inicio case 7
                    menu = false;
                    break;
                }//fin case 7

            }//fin del switch

        }//fin del while
        cout << "\nGracias por utilizar el programa\n\n";
        cout << "\n¿Deseas volver a utilizar el programa? (s/S para si, n/N para no): ";
        cin >> repetir;
        cout << endl;

    } while (repetir == 's' || repetir == 'S');
    }//fin del programa