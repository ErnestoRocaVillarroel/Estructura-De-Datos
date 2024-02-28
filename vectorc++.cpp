//vec.cpp es un archivo para vectrores usando get y set //
#include <iostream>
#include "Vector.h"
#define MAX 10

using namespace std;

int main()
{ 
	string p;
    int vec[MAX], n,op; //declarando el tamaño de el vector
    Vector vecito1; //declara un objeto o instancia del vector
    //este objeto tiene el valor de 0 en vec y 0 en n con los métodos de la clase vector 
	cout << "ingrese tamano de el vector a usar: ";
	cin >> n; 
	vecito1.set_n(n);
		//desplegando menu
		do
		{
			cout << "-----       M E N U        -----" << endl;
			cout << "|1.- Cargar Vector.            |" << endl;
			cout << "|2.- Mostrar Vector.           |" << endl;
			cout << "|3.- Ordenar Vector.           |" << endl;
			cout << "|0.- Salir                     |" << endl;
			cout << "--------------------------------" << endl;
			cout << " Elija una opcion" << endl;
			cin >> op;
			switch (op) {
			case 1:
					vecito1.cargar_vec(vec, n); //Llamar al metodo
				break;
			case 2:
					vecito1.mostrar_vec(vec, n);
				break;
			case 3:
				vecito1.ordenar_vec(vec, n);
				break;
			case 0:
				cout << "Salir" << endl;
				break;
			default:
				cout << "Error: Opcion no valida..." << endl;
				break;

			}

		} while (op != 0);
	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
