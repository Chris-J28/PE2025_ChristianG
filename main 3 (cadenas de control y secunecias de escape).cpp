/**PRESENTACION***
NOMBRE: Christian Jair Gomez Jimenez
FECHA: 6 de Febrero de 2025
PROGRAMA: Cadenas de control y secuencias de escape.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Programa para verificar el uso de control y secuencias de escape
************************/
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int ent = 23;
    float flot = 3.1416;
    double dob = 23.232323;
    char carac = 'C';
    char cadena[] = "Hola mundo";

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
    printf("Campana (alerta): \a (escucharás un sonido, si tu sistema lo soporta).\n");

    return 0;
}
