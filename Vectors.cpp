#include <iostream>
#include "Vectors.h"
using namespace std;

Vectors::Vectors() 
{
}
Vectors::~Vectors() 
{
}
void Vectors::set_n(int p)
{
	n = p;
}//pide un dato del main
int Vectors::get_n()
{
	return n;
}//no se le pone nada porque no recibe info

void Vectors::cargar(int rvec[], int p) //pide datos del main
{
	for (int i = 0; i < p; i++)
	{
		cout << "V[" << i + 1 << "] ";
		cin >> rvec[i];
	}
}
void Vectors::mostrar(int rvec[])
{
	for (int i = 0; i < n; i++)
	{
		cout << "V[" << i + 1 << "] " << rvec[i]<<endl;
	}
}
void Vectors::ordenar(int rvec[], int rvec2[])
{
	int aux;
	for (int i = 0; i < n-1; i++)
	{
		rvec2[i] = rvec[i];
		for (int j = 0; j < n-1-i; j++) 
		{
			if (rvec[j] < rvec[j + 1])
			{
				aux = rvec[j];
				rvec[j] = rvec[j + 1];
				rvec[j + 1] = aux;
			}
		}
	}
}
int Vectors::promedio(int rvec[], int p)
{
	int suma = 0,prom;
	for (int i = 0; i < p; i++)
	{
		suma = suma + rvec[i];
	}
	prom = suma / p;
	return prom;
}
