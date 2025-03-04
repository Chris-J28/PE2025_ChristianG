//**PRESENTACION***
//NOMBRE: Christian Jair Gomez Jimenez
//FECHA: 4 de marzo de 2025
//PROGRAMA: Actividad de programacion 10
//CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
//PROFESOR: Sergio Franco Casillas
//DESCRIPCION: Programa para realizar operaciones basicas con conjuntos, asi como editarlos

#include <iostream>
using namespace std;
//inicio main
int main() {
    int conjunto1[100], conjunto2[100]; // Dos conjuntos de máximo 100 elementos
    int tam1 = 0, tam2 = 0;             // Tamaños actuales de los conjuntos
    int opcion, valor, valor2, i, j;

    // Menú principal
    do {
        cout << "=== PROGRAMA DE CONJUNTOS ===" << endl;
        cout << "1. Agregar a Conjunto 1" << endl;
        cout << "2. Agregar a Conjunto 2" << endl;
        cout << "3. Mostrar Conjunto 1" << endl;
        cout << "4. Mostrar Conjunto 2" << endl;
        cout << "5. Borrar de Conjunto 1" << endl;
        cout << "6. Borrar de Conjunto 2" << endl;
        cout << "7. Editar Conjunto 1" << endl;
        cout << "8. Editar Conjunto 2" << endl;
        cout << "9. Vaciar Conjunto 1" << endl;
        cout << "10. Vaciar Conjunto 2" << endl;
        cout << "11. Union" << endl;
        cout << "12. Interseccion" << endl;
        cout << "13. Diferencia (Conjunto1 - Conjunto2)" << endl;
        cout << "0. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        if (opcion == 1) { // Agregar a Conjunto 1
            cout << "Numero: ";
            cin >> valor;
            if (tam1 < 100) {
                conjunto1[tam1] = valor;
                tam1++;
                cout << "Agregado!" << endl;
            } else {
                cout << "Conjunto lleno!" << endl;
            }
        }
        if (opcion == 2) { // Agregar a Conjunto 2
            cout << "Numero: ";
            cin >> valor;
            if (tam2 < 100) {
                conjunto2[tam2] = valor;
                tam2++;
                cout << "Agregado!" << endl;
            } else {
                cout << "Conjunto lleno!" << endl;
            }
        }
        if (opcion == 3) { // Mostrar Conjunto 1
            if (tam1 == 0) {
                cout << "Vacio!" << endl;
            } else {
                cout << "Conjunto 1: ";
                for (i = 0; i < tam1; i++) {
                    cout << conjunto1[i] << " ";
                }
                cout << endl;
            }
        }
        if (opcion == 4) { // Mostrar Conjunto 2
            if (tam2 == 0) {
                cout << "Vacio!" << endl;
            } else {
                cout << "Conjunto 2: ";
                for (i = 0; i < tam2; i++) {
                    cout << conjunto2[i] << " ";
                }
                cout << endl;
            }
        }
        if (opcion == 5) { // Borrar de Conjunto 1
            cout << "Numero a borrar: ";
            cin >> valor;
            for (i = 0; i < tam1; i++) {
                if (conjunto1[i] == valor) {
                    for (j = i; j < tam1 - 1; j++) {
                        conjunto1[j] = conjunto1[j + 1];
                    }
                    tam1--;
                    cout << "Borrado!" << endl;
                    break;
                }
                if (i == tam1 - 1) cout << "No encontrado!" << endl;
            }
        }
        if (opcion == 6) { // Borrar de Conjunto 2
            cout << "Numero a borrar: ";
            cin >> valor;
            for (i = 0; i < tam2; i++) {
                if (conjunto2[i] == valor) {
                    for (j = i; j < tam2 - 1; j++) {
                        conjunto2[j] = conjunto2[j + 1];
                    }
                    tam2--;
                    cout << "Borrado!" << endl;
                    break;
                }
                if (i == tam2 - 1) cout << "No encontrado!" << endl;
            }
        }
        if (opcion == 7) { // Editar Conjunto 1
            cout << "Numero viejo: ";
            cin >> valor;
            cout << "Numero nuevo: ";
            cin >> valor2;
            for (i = 0; i < tam1; i++) {
                if (conjunto1[i] == valor) {
                    conjunto1[i] = valor2;
                    cout << "Editado!" << endl;
                    break;
                }
                if (i == tam1 - 1) cout << "No encontrado!" << endl;
            }
        }
        if (opcion == 8) { // Editar Conjunto 2
            cout << "Numero viejo: ";
            cin >> valor;
            cout << "Numero nuevo: ";
            cin >> valor2;
            for (i = 0; i < tam2; i++) {
                if (conjunto2[i] == valor) {
                    conjunto2[i] = valor2;
                    cout << "Editado!" << endl;
                    break;
                }
                if (i == tam2 - 1) cout << "No encontrado!" << endl;
            }
        }
        if (opcion == 9) { // Vaciar Conjunto 1
            tam1 = 0;
            cout << "Conjunto 1 vaciado!" << endl;
        }
        if (opcion == 10) { // Vaciar Conjunto 2
            tam2 = 0;
            cout << "Conjunto 2 vaciado!" << endl;
        }
        if (opcion == 11) { // Unión
            int resultado[200], tamRes = 0;
            for (i = 0; i < tam1; i++) {
                resultado[tamRes] = conjunto1[i];
                tamRes++;
            }
            for (i = 0; i < tam2; i++) {
                int existe = 0;
                for (j = 0; j < tam1; j++) {
                    if (conjunto2[i] == conjunto1[j]) existe = 1;
                }
                if (existe == 0) {
                    resultado[tamRes] = conjunto2[i];
                    tamRes++;
                }
            }
            cout << "Union: ";
            for (i = 0; i < tamRes; i++) {
                cout << resultado[i] << " ";
            }
            cout << endl;
        }
        if (opcion == 12) { // Intersección
            int resultado[100], tamRes = 0;
            for (i = 0; i < tam1; i++) {
                for (j = 0; j < tam2; j++) {
                    if (conjunto1[i] == conjunto2[j]) {
                        resultado[tamRes] = conjunto1[i];
                        tamRes++;
                    }
                }
            }
            cout << "Interseccion: ";
            for (i = 0; i < tamRes; i++) {
                cout << resultado[i] << " ";
            }
            cout << endl;
        }
        if (opcion == 13) { // Diferencia (Conjunto1 - Conjunto2)
            int resultado[100], tamRes = 0;
            for (i = 0; i < tam1; i++) {
                int existe = 0;
                for (j = 0; j < tam2; j++) {
                    if (conjunto1[i] == conjunto2[j]) existe = 1;
                }
                if (existe == 0) {
                    resultado[tamRes] = conjunto1[i];
                    tamRes++;
                }
            }
            cout << "Diferencia: ";
            for (i = 0; i < tamRes; i++) {
                cout << resultado[i] << " ";
            }
            cout << endl;
        }

        if (opcion == 0) {
            cout << "Adios!" << endl;
        }

    } while (opcion != 0);

    return 0;
}//fin main