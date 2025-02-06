#include <iostream>
#include <cstdio>

using namespace std;
int numero, i, operaciones=0;
char respuesta;

int main() {
  do {
    printf("Hola, podrias darme algun numero natural?" );
    scanf("%d", &numero);
    if (0<numero && numero<500)
    {
      for (i=1; i<=100; i++) {
        numero +=5;
        printf("Valor actual: %d\n", numero);
        operaciones++;
      }
    }
    else if (500<numero && numero<1000)
    {
      for (i=1; i<=50; i++) {
        numero +=10;
        printf("Valor actual: %d\n", numero);
        operaciones++;
      }
    }
    else if (1000<numero) {
      printf("No se puede calcular el valor");

  } else {printf("Invalido");}
    printf("Numero total de operaciones realizadas: %d\n", operaciones);
    printf("¿Quieres continuar? (S o s para si)");
    scanf(" %c", &respuesta);
  } while(respuesta == 'S' || respuesta == 's');
  return 0;
}
