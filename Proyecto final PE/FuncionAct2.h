//inclusión condicional "Evitar se incluya más de una vez en el mismo proyecto"
#ifndef PROYECTO2_H
#define PROYECTO2_H

// Función que imprime los distitos saltos de linea
void proyecto2();

//Fin de la inclusion condicional
#endif // PROYECTO2_H
#include <iostream>
#include <cstdio>
void proyecto2() {
    //Inicio del programa
    using namespace std;


    int ent = 23;
    float flot = 3.1416;
    double dob = 23.232323;
    char carac = 'C';
    char cadena[] = "Hola mundo";
    printf("Estos son algunos ejemplos de caracteres de escape y especificadores de formato\n\n");

    // Caracteres de escape y especificadores de formato
    printf("Tipos de formato:\n");
    printf("Entero: %d\n", ent);
    printf("Flotante: %.2f\n", flot);
    printf("Doble: %.10lf\n", dob);
    printf("Caracter: %c\n", carac);
    printf("Cadena: %s\n", cadena);
    printf("Numero en formato octal: %o\n", ent);

    // Ejemplos adicionales de caracteres de escape
    printf("Tabulacion: \tEsto esta tabulado.\n");
    printf("Comillas dobles: \"Esto esta entre comillas dobles\".\n");
    printf("Barra invertida: Este es un simbolo de barra invertida: \\.\n");
    printf("Caracter de retroceso: Esto\b es un ejemplo.\n");
    printf("Campana (alerta): \a (escucharas un sonido, si tu sistema lo soporta).\n");
    printf("Gracias por utilizar el programa\n\n");
}//Fin del programa