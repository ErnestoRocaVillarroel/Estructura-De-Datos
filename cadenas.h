#pragma once
#include <string>
using namespace std;
class Cadenas
{
   private:
	   int longitud;
	   string cadena;
   public:
	   Cadenas();
	   ~Cadenas();
	   string get_cadena(); 
	   void set_cadena(string cadena);
	   int get_tamanio();
	   void set_tamanio(int longitud);
	   
	   bool comparar(string cadena,string cadena2);
	   void quitar_vocales(string cadena);







};
