#pragma once
#define MAX 50
class Matriz
{
private:
	int matriz[MAX][MAX];
	int fil, col;
public:
	Matriz();
	~Matriz();
	void set_fil(int fil);
	int get_fil();
	void set_col(int col);
	int get_col();

	void cargar_matriz(int matriz[MAX][MAX], int fil, int col);
	void mostrar_matriz(int matriz[MAX][MAX], int fil, int col);
	float promedio(int matriz[MAX][MAX], int fil, int col);
	int mayor(int matriz[MAX][MAX], int fil, int col);
	void sumar_mat(int matriz[MAX][MAX],  int matriz2[MAX][MAX],int matriz3[MAX][MAX],int fil, int col);

};

