//inclusión condicional "Evitar se incluya más de una vez en el mismo proyecto"
#ifndef PROYECTO1_H
#define PROYECTO1_H

// Función que imprime mis datos personales
void proyecto1();

//Fin de la inclusion condicional
#endif // PROYECTO1_H
#include <iostream>


void proyecto1() {
    //Inicio de programa
    std::cout<<"Estos son mis datos personales:\n\n";
    std::cout << "Nombre: Christian Jair Gomez Jimenez\n";
    std::cout << "Edad: 18 años\n";
    std::cout << "Lugar de residencia: Yahualica de Gonzales Gallo\n";
    std::cout << "Fecha: 30 de enero del 2025\n";
    std::cout << "Carrera: Ingenieria en computacion\n";
    std::cout << "Semestre: Segundo semestre\n\n";
    std :: cout << "Gracias por utilizar el programa\n\n";

}//Fin del programa