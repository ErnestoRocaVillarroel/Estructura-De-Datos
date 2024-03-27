#include "Cadenas.h"
#include <iostream>
#include <string>
using namespace std;
Cadenas::Cadenas()
{

}
Cadenas::~Cadenas()
{

}
string Cadenas::get_cadena()
{
	return cadena;
}
void Cadenas::set_cadena(string cadena)
{
	cadena = cadena;
}
int Cadenas::get_tamanio()
{
	return longitud;
}

//Ernesro Roca Villarroel
bool Cadenas::comparar(string cadena,string cadena2)
{
	return cadena == cadena2;

}
void Cadenas::quitar_vocales(string cadena)
{
    string resultado = "";
    for (int i = 0; i < longitud;i++) {
        if (cadena[i] != 'a' && cadena[i] != 'e' && cadena[i] != 'i' && cadena[i] != 'o' && cadena[i] != 'u' &&
            cadena[i] != 'A' && cadena[i] != 'E' && cadena[i] != 'I' && cadena[i] != 'O' && cadena[i] != 'U') {
            resultado += cadena[i];
        }
    }
    cout<<"este es su string sin vocales: "<<resultado;
}
