//**PRESENTACION***
//NOMBRE: Christian Jair Gomez Jimenez
//FECHA: 10 de abril de 2025
//PROGRAMA: Actividad de programacion
//CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
//PROFESOR: Sergio Franco Casillas
//DESCRIPCION: Programa para verificar siuna palabra es palindromo o no, y contar vocales y consonantes
#include <iostream>
#include <string>
using namespace std;
//inicio main
int main() {
    string palabra;

    // Pedir la palabra al usuario
    cout<< "** solo ingresa minusculas**" << endl;
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    // Contar caracteres
    int longitud = palabra.length();

    // Verificar si es palíndromo
    bool esPalindromo = true;
    for(int i = 0; i < longitud/2; i++) {
        if(palabra[i] != palabra[longitud-1-i]) {
            esPalindromo = false;
            break;
        }
    }
    // Contar vocales y consonantes
    int vocales = 0;
    int consonantes = 0;

    for(int i = 0; i < longitud; i++) {
        char letra = (palabra[i]);
        if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            vocales++;
        }else if(letra >= 'a' && letra <= 'z') {
            consonantes++;}
    }

    // Decir si es palindeomo o no
    cout << "\nAnalisis de la palabra: " << palabra << endl;
    if(esPalindromo) {
        cout << "Tu palabra si es un palindromo" << endl;
    }else {
        cout << "Tu palabara no es un palindromo" << endl;
    }
    //Recuento de las letras que son consonantes, vocales y caracteres
    cout << "Numero de caracteres: " << longitud << endl;
    cout << "Numero de vocales: " << vocales << endl;
    cout << "Numero de consonantes: " << consonantes << endl;

    return 0;
}//fin main