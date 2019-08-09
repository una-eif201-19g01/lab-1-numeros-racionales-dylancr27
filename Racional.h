
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
using namespace std;
#ifndef RACIONAL_H
#define RACIONAL_H

#import <string>
class Racional(){
	
	private:
		int numerador;
		int denominador;
	
	public:
		Racional();
		Racional(int, int);
		int getNumerador();
		int getDenominador();
		void setNumerador(int);
		void setDenominador(int);
	
	
};


