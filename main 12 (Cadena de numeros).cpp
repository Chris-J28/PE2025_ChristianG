//**PRESENTACION***
//NOMBRE: Christian Jair Gomez Jimenez
//FECHA: 18 de marzo de 2025
//PROGRAMA: Actividad de programacion 11
//CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
//PROFESOR: Sergio Franco Casillas
//DESCRIPCION: Programa para generar una secuencia de numeros, apartir de i es par o impar



#include <iostream>
using namespace std;
//variables
int numero1, numero2, suma=0, suma2=0, contador1=0, contador2=0;

//Inicio de main
int main() {
 cout<<"Ingresa un numero entero:"<<endl;
    cin>>numero1;
    do {
        cout<<"numero="<<numero1<<endl;
        suma+=numero1;
        if(numero1%2==0) {
            numero1/=2;
        }else if(numero1%2!=0) {
            numero1 = numero1*3+1;
        }contador1++;
    }while(numero1!=1);
    suma+=numero1;
    cout<<"numero: "<<numero1<<endl;
    cout<<"suma derivada del primer numero="<<suma<<endl;

    cout<<"Ingresa otro numero entero, pero distinto al primero"<<endl;
    cin>>numero2;
    do {
        cout<<"numero: "<<numero2<<endl;
        suma2+=numero2;
        if(numero2%2==0) {
            numero2/=2;
        }else if (numero2!=2) {
            numero2=numero2*3+1;
        }contador2++;
    }while(numero2!=1);
    suma2+=numero2;
    cout<<"numero: "<<numero2<<endl;
    cout<<"Suma derivada segundo numero="<<suma2<<endl;

    if(contador1>contador2) {
        cout<<"El numero que tiene mas resultantes es el primer numero"<<endl;
    }else if (contador1<contador2) { cout<<"El numero que tiene mas resultantes es el primer numero"<<endl;
    }else{ cout<<"Ambos numeros generaron la msima cantidad de resultados"<<endl;}
    return 0;
}//fin de main
