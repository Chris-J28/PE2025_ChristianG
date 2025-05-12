//inclusión condicional "Evitar se incluya más de una vez en el mismo proyecto"
#ifndef PROYECTO12_H
#define PROYECTO12_H

// Función para comprobar si una palabra es palindromo o no.
void proyecto12();

//Fin de la inclusion condicional
#endif // PROYECTO12_H

#include <iostream>
#include <string>
using namespace std;
//inicio main
void proyecto12() {
    string palabra;
    char opcion;
    cout<<"Este programa te dira si una palabara es palindomo o no, "
          "asi como claasificar sus letras"<<endl;
do {
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
    cout << "¿Quieres volver a utilizar el programa? (s/S para si o N/n para no)"  << endl;
    cin >> opcion;
}while (opcion== 's' || opcion == 'S');
  cout << "\nGracias por utilizar el programa\n\n";
}//fin del programa