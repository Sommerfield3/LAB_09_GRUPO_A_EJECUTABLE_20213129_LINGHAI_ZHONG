#include "Template.h"
template <class T>
Template<T>::Template(T list[],int tam) {
	for (int i = 0; i < tam; i++)
		lista.push_back(list[i]);
}

