#pragma once
#define MAX 10
class Vectors
{
   private:
	   int n,vec[MAX];
public:
	Vectors();
	~Vectors();
	void set_n(int p);//pide un dato del main
	int get_n();//no se le pone nada porque no recibe info

	void cargar(int rvec[], int p); //pide datos del main
	void mostrar(int rvec[]);
	void ordenar(int rvec[], int rvec2[]);
	int promedio(int rvec[], int p);
};

