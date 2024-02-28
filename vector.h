#pragma once
class Vector //todo esto de la cabecera y en el cpp va a tener los códigos
{
private:
    int vec[10], n;
public:
    Vector(void);//constructor
    ~Vector(void);//destructor
    void set_n(int n);
    int get_n();
    //métodos
    void cargar_vec(int vec[], int n);
    void mostrar_vec(int vec[], int n);
    void ordenar_vec(int vec[], int n);
};

