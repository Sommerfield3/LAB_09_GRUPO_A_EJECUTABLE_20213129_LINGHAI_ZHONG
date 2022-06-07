/*1. Se pide escribir una función utilizando plantillas que tome tres argumentos
genéricos y devuelva el menor y el máximo de ellos como valor de retorno. La
función debe ser capaz de dar este tipo de resultados.*/
#include<iostream>
#include <utility>
#include <functional>
using namespace std;
template <class T>
pair <T,T> MiniMax(T a, T b, T c);

int main (int argc, char *argv[]) {

	int a,b,c, intMin, intMax;
	a=5;
	b=23;
	c=212;
	tie(intMin,intMax)=MiniMax(a,b,c);
	cout<<"Menor de los enteros: "<<intMin<<endl;
	cout<<"Mayor de los enteros: "<<intMax<<endl;
	float x,y,z,floatMin,floatMax;
	x=2.32;
	y=9.36;
	z=3.18;
	tie(floatMin,floatMax)=MiniMax(x,y,z);
	cout<<"Menor de los flotantes: "<<floatMin<<endl;
	cout<<"Mayor de los flotantes: "<<floatMax<<endl;
	
	
	return 0;
}
template <class T>
pair <T,T> MiniMax(T a, T b, T c) {
	T min,max;
	T array[3]={a,b,c};
	T aux=a;
	for (int i=0;i<3;i++){
		if (array[i]>=aux){
			max=array[i];
			aux=array[i];
		}
	}
	aux=a;
	for (int i=0;i<3;i++){
		if (array[i]<=aux){
			min=array[i];
			aux=array[i];
		}
	}
	return make_pair(min,max);
}


