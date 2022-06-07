/*4. Implemente un programa que haga uso de plantillas para determinar el mínimo y
máximo valor de un arreglo de elementos dado. Debe de existir dos funciones, la
primera que retorne el mayor de los valores y la segunda que retorne el menor de
los valores. Asimismo, en la función main, se hace una prueba de estas funciones,
con arreglos de enteros y flotantes.
int ArrayEntero [5] = {10,7,2, 8, 6};
float ArrayFloat [5] = {12.1, 8.7, 5.6, 8.4, 1.2};*/
#include<iostream>
#include "Template.h"
#include "Template.cpp"
using namespace std;

int main (int argc, char *argv[]) {
	
	int ArrayEntero [5] = {10,7,2, 8, 6};
	int tam1=sizeof(ArrayEntero)/sizeof(ArrayEntero[0]);
	float ArrayFloat [5] = {12.1, 8.7, 5.6, 8.4, 1.2};
	int tam2=sizeof(ArrayFloat)/sizeof(ArrayFloat[0]);
	Template <int> listaEnteros(ArrayEntero,tam1);
	Template <float> listaFlotantes(ArrayFloat,tam2);
	listaEnteros.mayor();
	listaEnteros.menor();
	listaFlotantes.mayor();
	listaFlotantes.menor();
	return 0;
}

