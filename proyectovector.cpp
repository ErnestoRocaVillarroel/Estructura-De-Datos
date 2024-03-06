// proyectovector.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Vectors.h"
#define MAX 100

using namespace std;
int main()
{
    int tamanio, y[MAX];
    Vectors vector1;//declara objeto u instancia
    cout << "ingresar tamaño vector ";
    do {
        cin >> tamanio;
    } while (tamanio > MAX || tamanio<0);
    vector1.set_n(tamanio);//cambia el valor del atributo n en la clase vector
    vector1.cargar(y, tamanio);
    vector1.mostrar(y);
    

    
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
