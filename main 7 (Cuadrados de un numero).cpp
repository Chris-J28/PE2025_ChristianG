#include <cstdio>
#include <iostream>

int main() {//nicio de main
    long numero, suma = 0;
    char continuar;
    do {printf("Hola, dime un numero para poder calcular la suma de sus cuadrados: ");
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
    return 0;
}//fin del main
