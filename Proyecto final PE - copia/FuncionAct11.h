//inclusión condicional "Evitar se incluya más de una vez en el mismo proyecto"
#ifndef PROYECTO11_H
#define PROYECTO11_H

// Función para generar una secuencia de números, dependiendo si el numero dado es par o impar.
void proyecto11();

//Fin de la inclusion condicional
#endif // PROYECTO11_H


#include <iostream>
using namespace std;

//Inicio del programa
void proyecto11() {
    cout<<"*Este programa generara una secuencia de numeros. "
          "Comenzando con n. Si n es par, divida por 2. Si n es impar, multiplique por 3 y sume 1. "
          "Y se repetira este proceso con el nuevo valor de n, terminando cuando n = 1*\n"<<endl;
do {
    //variables
    int numero1, numero2, suma=0, suma2=0, contador1=0, contador2=0;
    char opcion;
    cout<<"Ingresa un numero entero:"<<endl;
    cin>>numero1;

    do {
        cout<<"numero="<<numero1<<endl;
        suma+=numero1;
        //verificar si el numero es par o impar
        if(numero1%2==0) {
            numero1/=2;
        }else if(numero1%2!=0) {
            numero1 = numero1*3+1;
        }contador1++;//aumentar contador
    }while(numero1!=1);
    //sumar los numeros resulranres
    suma+=numero1;
    cout<<"numero: "<<numero1<<endl;
    cout<<"suma derivada del primer numero="<<suma<<endl;

    cout<<"Ingresa otro numero entero, pero distinto al primero"<<endl;
    cin>>numero2;
    do {
        //verificar si el numero es par o impar
        cout<<"numero: "<<numero2<<endl;
        suma2+=numero2;
        if(numero2%2==0) {
            numero2/=2;
        }else if (numero2!=2) {
            numero2=numero2*3+1;
        }contador2++;//aumentar contador
        //sumar los numeros resultantes
    }while(numero2!=1);
    suma2+=numero2;
    cout<<"numero: "<<numero2<<endl;
    cout<<"Suma derivada segundo numero="<<suma2<<endl;
    //Commparar contadores del numero 1 y 2
    if(contador1>contador2) {
        cout<<"El numero que tiene mas resultantes es el primer numero"<<endl;
    }else if (contador1<contador2) { cout<<"El numero que tiene mas resultantes es el segundo numero"<<endl;
    }else {
        cout<<"Ambos numeros generaron la msima cantidad de resultados"<<endl;

    }
    cout<<"¿Quieres continuar? s/n?"<<endl;
    cin>>opcion;
    }while(opcion == 's' || opcion == 'S');
    cout << "\nGracias por utilizar el programa\n\n";

}//fin del programa
