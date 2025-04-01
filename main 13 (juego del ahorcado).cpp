//**PRESENTACION***
//NOMBRE: Christian Jair Gomez Jimenez
//FECHA: 1 de abril de 2025
//PROGRAMA: Juego 1
//CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
//PROFESOR: Sergio Franco Casillas
//DESCRIPCION: Programa para jugar al ahorcado


#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

// Función para mostrar la palabra con espacios
void mostrarPalabra(string& mostrada) {
    for (int i = 0; i < mostrada.length(); i++) {
        cout << mostrada[i] << " ";
    }
    cout << endl;
}
// Función para verificar si una letra es vocal
int esVocal(char letra) {
    letra = tolower(letra);
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        return 1; // Es vocal
    }
    return 0; // No es vocal
}
//variables
string palabra;
string palabraMostrada;
int intentos = 6;
string letrasUsadas;
int modo;
char letra;
int encontrada = 0;

//inicio de main
int main() {
    // Banco de 20 palabras
    vector<string> palabras = {
        "programacion", "estructurada", "algoritmo", "paradigma", "tecnologia",
        "sistemas", "computacional", "software", "hardware", "micrprocesador",
        "memoria", "aplicaciones", "logica", "ciberseguridad", "codigo",
        "compilado", "servidor", "interpretado", "hola", "adios"
    };

    // Inicializar semilla para números aleatorios
    srand(time(0));

    // Elegir modo de juego
    do {
        cout << "Selecciona el modo de juego:\n1. Contra la computadora\n2. Dos jugadores\n";
        cin >> modo;
        if (modo == 1) {
            palabra = palabras[rand() % palabras.size()];
            palabraMostrada = string(palabra.length(), '_');
        } else if (modo == 2) {
            cout << "Jugador 1, ingresa la palabra secreta: ";
            cin >> palabra;
            palabraMostrada = string(palabra.length(), '_');
            system("cls");
        } else {
            cout << "Modo no válido. Selecciona 1 o 2.\n";
        }
    } while (modo != 1 && modo != 2);
 // Bucle principal del juego
    while (intentos > 0) {
        cout << "\n * Cuidado: ¡SOlO se pueden utilizar MINUSCULAS! * \n";
        cout << "\nIntentos restantes: " << intentos << endl;
        cout << "Letras usadas: " << letrasUsadas << endl;
        mostrarPalabra(palabraMostrada);

        // Verificar si se ganó
        if (palabraMostrada == palabra) {
            cout << "¡Felicidades! Has adivinado la palabra: " << palabra << endl;
            break;
        }
        cout << "Ingresa una letra: ";
        cin >> letra;

        // Verificar si la letra ya fue usada
        if (letrasUsadas.find(letra) != string::npos) {
            cout << "Ya usaste esa letra. Intenta otra.\n";
            continue;
        }
        letrasUsadas += letra;
        // Validar la letra
        int encontrada=0;
        for (int i = 0; i < palabra.length(); i++) {
            if (palabra[i] == letra) {
                palabraMostrada[i] = palabra[i];
                encontrada++;
            }
        }
        if (encontrada == 0) {
            intentos--;
            cout << "Letra no encontrada.\n";
        }
        if (esVocal(letra) == 1) {
            intentos--;
            cout << "Penalización: ingresaste una vocal, pierdes un intento extra.\n";
        }
        if (intentos <= 0) {
            cout << "¡Perdiste! La palabra era: " << palabra << endl;
        }
    }
    return 0;
}//fin main