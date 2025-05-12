//inclusión condicional "Evitar se incluya más de una vez en el mismo proyecto"
#ifndef PROYECTO5_H
#define PROYECTO5_H

// Función para encontrar los multiplos de 3 y 5 de un numero
void proyecto5();

//Fin de la inclusion condicional
#endif // PROYECTO5_H
#include <iostream>
#include <cstdio>
void proyecto5() {
    //Inicio del proyecto
    int Numero, multiplos3, multiplos5, i;
    char Opcion;
    printf("Este programa te dira la los multiplos de 3 y 5 de un numero y los sumara\n");
do {
    printf("Proporcioname un numero porfavor, para calcular cuantos multiplos de 3 y 5 tiene: ");
    scanf("%d", &Numero);

    if (Numero >= 0 && Numero <= 1000) {
        //contabilizar los multiplos de 3
        printf("Multiplos de 3: ");
        for (i = 1; i <= Numero; i++) {
            if (i % 3 == 0) {
                printf("%d ", i);
                multiplos3++;
            }
        }
        //contabilizar los multiplos de 5
        printf("\nMultiplos de 5: ");
        for (i = 1; i <= Numero; i++) {
            if (i % 5 == 0) {
                printf("%d ", i);
                multiplos5++;
            }
        }
        printf("\nTotal de multiplos de 3: %d\n", multiplos3);
        printf("Total de multiplos de 5: %d\n", multiplos5);
    } else {
        printf("Numero no valido.\n");
    }
    printf( "¿Deseas volver a usar el programa? (s/S para si o n/N para no)\n" );
    scanf (" %c", &Opcion);
} while (Opcion == 's' || Opcion == 'S');
    printf("\nGracias por utilizar el programa\n\n");
}//Fin del proyecto
