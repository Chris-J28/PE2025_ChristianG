//inclusión condicional "Evitar se incluya más de una vez en el mismo proyecto"
#ifndef PROYECTO6_H
#define PROYECTO6_H

// Función para encontrar la suma de los cuadrados de un numero
void proyecto6();

//Fin de la inclusion condicional
#endif // PROYECTO6_H
#include <iostream>
#include <cstdio>
void proyecto6() {
//Inicio del proyecto
        long numero, suma = 0;
        char continuar;
    printf("*Este programa calculara todos los cuadrados de los numeros en serie hasta el que proporciones para despues sumarlos*\n");
        do {
            suma = 0;
            printf("Hola, dime un numero para poder calcular la suma de sus cuadrados: ");
            scanf("%ld", &numero);
            if (numero < 3887 && numero > 0) {//evaluar si el numero puede ser calculado
                for (int i = 1; i <= numero; i++) {
                    suma += i * i;
                }printf("La suma de los cuadrados es: \n%ld\n", suma);
            }else {
                printf("valor no valido\n");}
            // Pedir la confirmación para continuar
            printf("Deseas continuar? (s o S para si o N o n para no): ");
            scanf(" %c", &continuar);
        }while (continuar == 's' || continuar == 'S');
    printf("\nGracias por utilizar el programa\n\n");
    }//fin del programa
