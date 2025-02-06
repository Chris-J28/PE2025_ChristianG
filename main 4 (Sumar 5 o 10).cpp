/**PRESENTACION***
NOMBRE: Christian Jair Gomez Jimenez
FECHA: 6 de Febrero de 2025
PROGRAMA: Sumar 5 0 10.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Programa con el fin de sumar 5 0 10, deoenduendo de la cantidad
************************/
#include <iostream>
#include <cstdio>

using namespace std;
int numero, i, operaciones=0;
char respuesta;
//inicio main
int main() {
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
    printf("¿Quieres continuar? (S o s para si)");
    scanf(" %c", &respuesta);
  } while(respuesta == 'S' || respuesta == 's'); //fin ciclo do-while
  return 0; //Fin del main
}
