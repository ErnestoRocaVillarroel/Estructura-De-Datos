#include <iostream>
#include "vector.h"
using namespace std;

Vector::Vector(void)
{
    vec[10] = 0;//significa que está en 0 todavia 
    n = 0;
}
Vector::~Vector(void)
{
}   //solo hay set y get para n ya que vec tiene un valor maximo predefinido
    void Vector::set_n(int n)
    {
        n = n; 
    }
    int Vector::get_n()
    {
        return n;
    }
void Vector::cargar_vec(int vec[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "vec[" << i+1 << "]: ";
        cin >> vec[i];
    }
}
void Vector::mostrar_vec(int vec[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "vec[" << i+1 << "]: " << vec[i]<<endl;
    }
}
void Vector::ordenar_vec(int vec[], int n)
{
    int aux;
    for (int i = 0; i < (n - 1); i++) {
        for (int j = i; j < n; j++) {
            if (vec[i] > vec[j]) {
                aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            }
        }
    }
}
