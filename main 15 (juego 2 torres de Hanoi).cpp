//**PRESENTACION***
//NOMBRE: Christian Jair Gomez Jimenez
//FECHA: 10 de abril de 2025
//PROGRAMA: Juego 2
//CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
//PROFESOR: Sergio Franco Casillas
//DESCRIPCION: Programa para jugar a las torres de Hanoi

#include <stdio.h>
#define MAX 10
int main() {
    int numDiscos;
//ciclo do para seleccionar el numero de discos
    do {
        printf("Numero de discos (1-10): ");
        scanf("%d", &numDiscos);
    } while (numDiscos < 1 || numDiscos > 10);
    // Matriz para las 3 torres
    int torres[3][MAX] = {0};
    int limite[3] = {numDiscos - 1, -1, -1}; // limite de cada torre

    for (int i = 0; i < numDiscos; i++) {
        torres[0][i] = numDiscos - i; // Llena torre A: mayor a menor
    }
    int movimientos = 0;
    int optimo = (1 << numDiscos) - 1;
    printf("Usa 1 (A), 2 (B), 3 (C). Mueve de A a C.\n");
//ciclo while para mostrar torres
    while (limite[2] != numDiscos - 1) {
        for (int i = 0; i < 3; i++) {
            printf("%c: ", 'A' + i);
            for (int j = 0; j <= limite[i]; j++) {
                printf("%d ", torres[i][j]);
            }
            printf("\n");
        }
        //Mover los discos de una torre a otra
        int origen, destino;
        printf("Origen (1-3): ");
        scanf("%d", &origen);
        printf("Destino (1-3): ");
        scanf("%d", &destino);
        origen--;
        destino--;
        int disco = torres[origen][limite[origen]];
        int topeDestino = limite[destino];
        int discoDestino;
        if (topeDestino >= 0) {
            discoDestino = torres[destino][topeDestino];
        } else {
            discoDestino = 0;
        }
        if (limite[origen] >= 0 && (disco < discoDestino || topeDestino < 0)) {
            limite[destino]++;
            torres[destino][limite[destino]] = disco;
            torres[origen][limite[origen]] = 0;
            limite[origen]--;
            movimientos++;
            printf("Moviendo %d de %c a %c\n", disco, 'A' + origen, 'A' + destino);
        } else {
            printf("Movimiento invalido.\n");
        }
    }
    printf("\nTerminado! Movimientos: %d (Optimos: %d)\n", movimientos, optimo);
    int puntaje;
    if (movimientos <= optimo) {
        puntaje = 100;
    } else {
        puntaje = 100 - (movimientos - optimo) * 10;
    }
    if (puntaje < 0) {
        puntaje = 0;
    }
    printf("Puntaje: %d/100\n", puntaje);
    return 0;
}