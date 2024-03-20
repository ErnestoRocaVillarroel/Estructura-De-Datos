#include <iostream>
#include "Matriz.h"


using namespace std;

Matriz::Matriz()
{}
Matriz::~Matriz()
{}
void Matriz::set_fil(int fil)
{
	fil = fil;
}
int Matriz::get_fil()
{
	return fil;
}
void Matriz::set_col(int col)
{
	col = col;
}
int Matriz::get_col()
{
	return col;
}

void Matriz::cargar_matriz(int matriz[MAX][MAX], int fil, int col)
{
	for (int i = 0; i < fil; i++)
		for (int j = 0; j < col; j++)
		{
			cout << "MAT [" << i + 1 << "]" << "[" << j + 1 << "]";
			cin >> matriz[i][j];
		}
}
void Matriz::mostrar_matriz(int matriz[MAX][MAX], int fil, int col)
{
	for (int i = 0; i < fil; i++)
		for (int j = 0; j < col; j++)
		{
			cout << "V [" << i + 1 << "]" << "[" << j + 1 << "]"<<matriz[i][j];
		}
}
float Matriz::promedio(int matriz[MAX][MAX], int fil, int col)
{
	int suma = 0;
	for (int i = 0; i < fil; i++)
	{
		for (int j = 0; j < col; j++)
		{
			suma = suma + matriz[i][j];

		}
	}
return suma / (fil * col);
}
int Matriz::mayor(int matriz[MAX][MAX], int fil, int col)
{
	int may = matriz[0][0];
	for (int i = 0; i < fil; i++)
		for (int j = 0; j < col; j++)
			if (matriz[i][j] > may)
				may = matriz[i][j];
	return may;
	

}
void Matriz::sumar_mat(int matriz[MAX][MAX],int matriz2[MAX][MAX],int matriz3[MAX][MAX], int fil, int col)
{
	for (int i = 0; i < fil; i++)
		for (int j = 0; j < col; j++)
			matriz3[i][j] = matriz[i][j] + matriz2[i][j];

}
