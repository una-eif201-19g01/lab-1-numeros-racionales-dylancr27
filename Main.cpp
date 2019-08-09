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

int main() {
	Racional objeto1; //Objeto
	
	int num1, den1, num2, den2;
	string opc;
	cout<<"---Operaciones de Numeros Racionales"<<endl<<endl;
	cout<<"--Disponibles--"<<endl<<endl;
	cout<<"1. Suma de Fracciones"<<endl;
	cout<<"2. Resta de Fracciones"<<endl;
	cout<<"3. Multiplicacion de Fracciones"<<endl;
	cout<<"4. Division de Fracciones"<<endl;
	cout<<"5. Elevacion de Fracciones"<<endl;
	cout<<"6. Elevar Equivalente"<<endl;
	cout<<""<<endl<<endl;
	cout<<"-------------------------------------"<<endl<<endl;
	cout<<"Digite el numero de la opcion que desea formar: ";
	cin>>opc;
	
	
	
	if(opc=="1"){
		cout<<"Rellene los espacios para realizar la Suma de Fracciones"<<endl;
		cout<<"Numerador 1:"<<endl;
		cin>>num1;
		cout<<"Denominador 1:"<<endl;
		cin>>den1;
		cout<<"---------------------"<<endl;
		cout<<"Numerador 2:"<<endl;
		cin>>num2;
		cout<<"Denominador 2:"<<endl;
		cin>>den2;
		cout<<"El resultado de la Operacion es:";
		cout<<objeto1.sumaRacional(num1,den1,num2,den2)<<endl;
		
	}
	if(opc=="2"){
		cout<<"Rellene los espacios para realizar la Resta de Fracciones"<<endl;
		cout<<"Numerador 1:"<<endl;
		cin>>num1;
		cout<<"Denominador 1:"<<endl;
		cin>>den1;
		cout<<"---------------------"<<endl;
		cout<<"Numerador 2:"<<endl;
		cin>>num2;
		cout<<"Denominador 2:"<<endl;
		cin>>den2;
		cout<<"El resultado de la Operacion es:";
		cout<<objeto1.restaRacional(num1,den1,num2,den2)<<endl;
	}
	if(opc=="3"){
		cout<<"Rellene los espacios para realizar la Multiplicacion de Fracciones"<<endl;
		cout<<"Numerador 1:"<<endl;
		cin>>num1;
		cout<<"Denominador 1:"<<endl;
		cin>>den1;
		cout<<"---------------------"<<endl;
		cout<<"Numerador 2:"<<endl;
		cin>>num2;
		cout<<"Denominador 2:"<<endl;
		cin>>den2;
		cout<<"El resultado de la Operacion es:";
		cout<<objeto1.multiplicacionRacional(num1,den1,num2,den2)<<endl;
		
	}
	if(opc=="4"){cout<<"Rellene los espacios para realizar la Division de Fracciones"<<endl;
	cout<<"Numerador 1:"<<endl;
	cin>>num1;
	cout<<"Denominador 1:"<<endl;
	cin>>den1;
	cout<<"---------------------"<<endl;
	cout<<"Numerador 2:"<<endl;
	cin>>num2;
	cout<<"Denominador 2:"<<endl;
	cin>>den2;
	cout<<"El resultado de la Operacion es:";
	cout<<objeto1.divisionRacional(num1,den1,num2,den2)<<endl;
	}
	if(opc=="5"){
		cout<<"Rellene los espacios para realizar la Elevacion de Fracciones"<<endl;
		cout<<"Numerador :"<<endl;
		cin>>num1;
		cout<<"Denominador :"<<endl;
		cin>>den1;
		cout<<"El resultado de la Operacion es:";
		cout<<objeto1.elevarFraccion(num1,den1)<<endl;
	}
	if(opc=="6"){}
	
	return 0;
}
