#ifndef TEMPLATE_H
#define TEMPLATE_H
#include<iostream>
#include <typeinfo>
using namespace std;
template <class T,class R>
class Template {
private:
	T a;
	R b;
public:
	Template(T c, R d);
	string email(){
		string em;
		if(typeid(a)==typeid(char)){
			em=a+b+"@unsa.edu.pe";
		}
		else{
			em=b+a+"@unsa.edu.pe";
		}
		cout<<"E-mail: "<<em<<endl;
		return em;
	}
};

#endif

