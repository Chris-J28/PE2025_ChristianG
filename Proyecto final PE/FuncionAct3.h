//inclusión condicional "Evitar se incluya más de una vez en el mismo proyecto"
#ifndef PROYECTO3_H
#define PROYECTO3_H

// Función que dependiendo la cantidad le suma 5 o 10
void proyecto3();

//Fin de la inclusion condicional
#endif // PROYECTO3_H

#include <cstdio>
void proyecto3() {
    using namespace std;
    int numero, i, operaciones=0;
    char respuesta;
    //inicio del proyecto
    printf("Este programa sumara 5 unidades a numeros menores a 500, esto 100 veces; o 10 unidades si es mayor a 500 y menor a 1000, esto 50 veces; para posteriormente sumar todas las cantidades");
        do { //ciclo do-while
            printf("Hola, podrias darme algun numero natural?" );
            scanf("%d", &numero);
            if (0<numero && numero<500)// ciclo if
            {
                for (i=1; i<=100; i++) { //ciclo for con contador
                    numero +=5;
                    printf("Valor actual: %d\n", numero);
                    operaciones++;
                }
            }
            else if (500<numero && numero<1000)
            {
                for (i=1; i<=50; i++) { //ciclo for con contador
                    numero +=10;
                    printf("Valor actual: %d\n", numero);
                    operaciones++;
                }
            }
            else if (1000<numero) {
                printf("No se puede calcular el valor");

            } else {printf("Invalido");} //fin ciclo if
            printf("Numero total de operaciones realizadas: %d\n", operaciones);
            printf("¿Quieres continuar? (S o s para si// N o n para no)");
            scanf(" %c", &respuesta);
        } while(respuesta == 'S' || respuesta == 's'); //fin ciclo do-while
        //Fin del programa
    printf("\nGracias por utilizar el programa\n\n");
    }


