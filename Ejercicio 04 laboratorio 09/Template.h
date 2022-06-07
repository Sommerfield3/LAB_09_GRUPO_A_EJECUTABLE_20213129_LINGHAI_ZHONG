#ifndef TEMPLATE_H
#define TEMPLATE_H
#include <iostream>
#include <vector>
using namespace std;
template <class T>
class Template {
private:
	vector<T> lista;
public:
	Template(T list[],int tam);
	T mayor(){
		int a=sizeof(lista)/sizeof(lista[0]);
		T max;
		T aux=lista[0];
		for (int i=0;i<a;i++){
			if (lista[i]>=aux){
				max=lista[i];
				aux=lista[i];
			}
		}
		cout<<"El mayor valor de la lista es: "<<max<<endl;
		return max; 
	}	
	T menor(){
		int a=sizeof(lista)/sizeof(lista[0]);
		T min;
		T aux=lista[0];
		for (int i=0;i<a;i++){
			if (lista[i]<=aux){
				min=lista[i];
				aux=lista[i];
			}
		}
		cout<<"El menor valor de la lista es: "<<min<<endl;
		return min; 
	}
};

#endif

