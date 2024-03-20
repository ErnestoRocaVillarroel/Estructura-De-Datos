// PROYECTO MATRIZ.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#define Max 50
#include "Matriz.h"
using namespace std;

int main()
{
	int fil, col, op; 
	int Mat[MAX][MAX]{};
	int Mat2[MAX][MAX]{};
	int Mat3[MAX][MAX]{};
    Matriz mat1,mat2,mat3;
    cout << "escriba el número de filas: ";
    cin >> fil;
    cout << "escriba el número de columnas: ";
    cin >> col;
	cout << "-----       M E N U        -----" << endl;
	cout << "|1.- Cargar Matriz.            |" << endl;
	cout << "|2.- Mostrar Matriz.           |" << endl;
	cout << "|3.- Mayor Matriz.             |" << endl;
	cout << "|4.- Promedio Matriz           |" << endl;
	cout << "|5.- Sumar Matriz              |" << endl;
	cout << "|0.- Salir                     |" << endl;
	cout << "--------------------------------" << endl;
	cout << " Elija una opcion" << endl;
	cin >> op;
	switch (op) {
	case 1:
		cout << "matriz numero 1";
		mat1.cargar_matriz(Mat, fil,col);
		cout << "matriz numero 2";
		mat2.cargar_matriz(Mat2, fil, col);
		cout << "matriz numero 3";
		mat3.cargar_matriz(Mat3, fil, col);
		//Llamar al metodo
		break;
	case 2:
		mat1.mostrar_matriz(Mat, fil, col);
		break;
	case 3:
		mat1.mayor(Mat, fil, col);
		break;
	case 4:
		mat1.promedio(Mat, fil, col);
		break;
	case 5:
		mat1.sumar_mat(Mat,Mat2,Mat3,fil,col);
		cout << "la suma es: "; mat1.mostrar_matriz(Mat3, fil, col);
		break;
	case 0:
		cout << "Salir" << endl;
		break;
	default:
		cout << "Error: Opcion no valida..." << endl;
		break;
	}

	return 0;
}
