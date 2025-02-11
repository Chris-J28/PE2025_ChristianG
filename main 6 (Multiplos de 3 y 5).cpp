/**PRESENTACION***
NOMBRE: Christian Jair Gomez Jimenez
FECHA: 11 de Febrero de 2025
PROGRAMA: Actividad de programación - 5
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Programa para encontrar los multiplos de 3 y 5, en el numero dado
************************/
#include <cstdio>
#include <iostream>
int main() {
    int Numero, multiplos3, multiplos5, i;
    printf("Proporcioname un numero porfavor, para calcular cuantos multiplos de 3 y 5 tiene: ");
    scanf("%d", &Numero);

    if (Numero >= 0 && Numero <= 1000) {
        printf("Multiplos de 3: ");
        for (i = 1; i <= Numero; i++) {
            if (i % 3 == 0) {
                printf("%d ", i);
                multiplos3++;
            }
        }
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

    return 0;
}

