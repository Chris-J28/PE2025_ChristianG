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
//inicio de main
int main() {
    float arreglo[10];
    bool menu = true;
    char opcion;
    float valor;
    int posicion = 0;
    float suma = 0;
    int indice;

    //iniciamos ciclo del menu
    while (menu==true) {
        intro();
        cin >> opcion;

        switch (opcion) {
            case '1': {
                if (posicion >= 0 || posicion < 10) {
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
                    for (int i = indice; i < posicion  ; i++)
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
                cout<<"Gracias por utilizar el programa"<<endl;
                menu = false;
                break;
                }//fin case 7

            }//fin del switch
             }//fin del while
    return 0;
    }//fin del main


