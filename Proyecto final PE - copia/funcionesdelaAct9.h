#include <iostream>
#include <cstdlib>
//Inclusion condicional
#define FUNCIONESDELAACT9_H
using namespace std;
//variables
const int tamañomax=10;
int matriz1[tamañomax][tamañomax];
int matriz2[tamañomax][tamañomax];
int resultadp[tamañomax][tamañomax];
int tamaño=0;
int eleccion;

//Funcion de menu
void menu2() {
    cout<<"** Bienvenido, selecciona una opcion para realizar a tu matriz**"<<endl;
    cout<<"**************"<<endl;
    cout<<"1. Añadir algun elemento"<<endl;
    cout<<"2. Añadir elemntos aleatoriamente"<<endl;
    cout<<"3. Sumar matrices"<<endl;
    cout<<"4. Restar matrices"<<endl;
    cout<<"5. Multiplicar matrices"<<endl;
    cout<<"6. Borrar un elemento"<<endl;
    cout<<"7. Editar un elemnto"<<endl;
    cout<<"8. Vaciar matriz"<<endl;
    cout<<"9. Mostrar matriz"<<endl;
    cout<<"10. Salir"<<endl;
}
//funcion para llenar aleatorianete
void aleatorio(int matriz[tamañomax][tamañomax],int tamaño) {
    for ( int i=0; i < tamaño; i++) {
        for (int j=0; j < tamaño; j++) {
            matriz[i][j] = rand()% 201-100;
        }
    }cout << "Matriz llenada con exito"<<endl;
}//funcion paara mostrar los elementos en la matriz
void MostarMatriz(int matriz[tamañomax][tamañomax], int tamaño) {
    for (int i = 0; i < tamaño; i++) {
        for (int j = 0; j < tamaño; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}//Funcion para elegir en que matriz se quieren hacer los cambios
int ElegirMatriz() {
    cout<<"¿Cual matriz quieres seleccionar?  (1 o 2)"<<endl;
    cin>>eleccion;
    while (eleccion!=1 && eleccion!=2) {
        cout<<"Eleccion no valida. Eligee 1 o 2."<<endl;
        cin>>eleccion;
    }
    return eleccion;
}//Funcion para sumar ambas matrices
void sumaMatrices() {
    for (int i=0; i<tamaño; i++) {
        for (int j=0; j <tamaño; j++)
            resultadp[i][j]=matriz1[i][j] + matriz2[i][j];
    }
    cout<<"La suma de la matriz es:"<<endl;
    MostarMatriz(resultadp, tamaño);
}//Funcion para restar ambas funciones
void restaMatrices() {
    for (int i=0; i<tamaño; i++) {
        for (int j=0; j <tamaño; j++)
            resultadp[i][j]=matriz1[i][j] - matriz2[i][j];
    }
    cout<<"La resta de la matriz es:"<<endl;
    MostarMatriz(resultadp, tamaño);
}//Funcion para multiplicar amabas matrices
void multiplicarMatrices() {
    for (int i = 0; i < tamaño; i++)
        for (int j = 0; j < tamaño; j++) {
            resultadp[i][j] = 0;
            for (int c = 0; c < tamaño; c++)
                resultadp[i][j] += matriz1[i][c] * matriz2[c][j];
        }
    cout << "Resultado de la multiplicación:" << endl;
    MostarMatriz(resultadp, tamaño);
}//Funcion para eleminar todos los elementos de una funcion
void vaciarMatriz(int matriz[tamañomax][tamañomax]) {
    for (int i = 0; i < tamaño; i++) {
        for (int j = 0; j < tamaño; j++) {
            matriz[i][j] = 0;
        }
    }
}//Funcion para editar un elemento en particular
void editarElemento(int matriz[tamañomax][tamañomax]) {
    int fila, columna, valor;
    cout << "Ingresa la fila (0-" << tamaño - 1 << "): ";
    cin >> fila;
    cout << "Ingresa la columna (0-" << tamaño - 1 << "): ";
    cin >> columna;
    if (fila >= 0 && fila < tamaño && columna >= 0 && columna < tamaño) {
        cout << "Valor catual: " << matriz[fila][columna] << endl;
        cout << "Ingresa el nuevo valor: ";
        cin >> valor;
        matriz[fila][columna] = valor;
        cout << "Elemento editado:" << endl;
        MostarMatriz(matriz, tamaño);
    } else {
        cout << "Posición inválida." << endl;
    }
}//Funcion para borrar un elemnto en concreto
void borrarElemento(int matriz[tamañomax][tamañomax]) {
    int fila, columna;
    cout << "Ingresa la fila (0-" << tamaño - 1 << "): ";
    cin >> fila;
    cout << "Ingresa la columna (0-" << tamaño - 1 << "): ";
    cin >> columna;
    if (fila >= 0 && fila < tamaño && columna >= 0 && columna < tamaño) {
        matriz[fila][columna] = 0;
        cout << "Elemento borrado:" << endl;
        MostarMatriz(matriz, tamaño);
    } else {
        cout << "Posición inválida." << endl;
    }
}//Funcion para añadir algun elemento numerico
void añadirElemento(int matriz[tamañomax][tamañomax], int tamaño) {
    for (int i = 0; i < tamaño; i++) {
        for (int j = 0; j < tamaño; j++) {
            cout << "Ingresa el elemento para la posicion [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    cout << "Matriz llenada con exito:" << endl;
    MostarMatriz(matriz, tamaño);
}