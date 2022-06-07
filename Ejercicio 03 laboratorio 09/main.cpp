/*3. Se pide escribir una función utilizando plantillas que tome dos valores genéricos
de tipo char y string (5 veces); char corresponde a una letra y string corresponde
al apellido. El programa debe mostrar por pantalla el siguiente formato de correo
electrónico: char/string@unsa.edu.pe.*/
#include<iostream>
#include "Template.h"
#include "Template.cpp"
using namespace std;

int main (int argc, char *argv[]) {
	Template <char,string> email1('v',"zarico");
	Template <string,char> email2("yurisman",'n');
	Template <char,string> email3('v',"astarte");
	Template <string,char> email4("valdicor",'a');
	Template <char,string> email5('w',"quiros");
	email1.email();
	email2.email();
	email3.email();
	email4.email();
	email5.email();
	return 0;
}

