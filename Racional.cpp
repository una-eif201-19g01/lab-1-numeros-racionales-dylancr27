/*
* =====================================================================================
*
*       Filename:  LibroCalificaciones.cpp
*
*    Description:  Clase de Libro Calificaciones
*
*        Created:  2019-08-06
*
*         Author:  Dylan Molina Obando damolina27@hotmail.com
*   Organization:  Universidad Nacional de Costa Rica
*
* =====================================================================================
*/


#include <iostream>
#include <sstream>
#include "Racional.h"
using namespace std;
class Racional{
	
private:
	int numerador;
	int denominador;

	
	
	
public:
	//Constructor sin parametros
	Racional(){
	numerador=0;
	denominador=0;

	}
	
	//Constructor con parametros
	Racional(int nume, int deno){
		numerador=nume;
		denominador=deno;
	}
	//Metodos Set
	void setNumerador(int nume){
		numerador=nume;
	}

	
	void setDenominador(int deno){
		denominador=deno;
	}
	

	
	//Metodos Get
	int getNumerador(){
		return numerador;
	}
	
	int getDenominador(){
		return denominador;
	}

	
	//Metodos de Calculo
	int sumaRacional(int a, int b, int c, int d){
		return (((a*d)+(b*c))/(b*d));
	}
	
	int restaRacional(int a, int b, int c, int d){
		return(((a*d)-(b*c))/(b*d));
	}
	
	int divisionRacional(int a, int b, int c, int d){
		return((a*d)/(b*c));
	}
	
	int multiplicacionRacional(int a, int b, int c, int d){
		return((a*c)/(b*d));
	}
	int elevarFraccion(int a, int b){
		return ((a*a)/(b*b));
	}
	
	
	
	//Metodo toString
	string toString(){
		stringstream s;
		s<<endl<<endl;
		s<<"Fraccion  "<<endl;
		s<<"Numerador :" <<numerador<<endl;
		s<<"Denominador :" <<denominador<<endl<<endl;
		return s.str();
	}
};


