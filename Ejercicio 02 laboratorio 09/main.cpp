/*2. Se pide escribir una función utilizando plantillas que tome dos argumentos
genéricos de tipo entero y flotante que devuelva las cuatro operaciones básicas.*/
#include<iostream>
#include "Template.h"
#include "Template.cpp"
using namespace std;

int main (int argc, char *argv[]) {
	Template <int> enterosOperaciones(63,46);
	Template <float> flotantesOperaciones(1.66,3.16);
	enterosOperaciones.suma();
	enterosOperaciones.resta();
	enterosOperaciones.multiplicacion();
	enterosOperaciones.division();
	flotantesOperaciones.suma();
	flotantesOperaciones.resta();
	flotantesOperaciones.multiplicacion();
	flotantesOperaciones.division();
	return 0;
}

