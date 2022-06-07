#ifndef TEMPLATE_H
#define TEMPLATE_H
#include<iostream>
using namespace std;
template <class T>
class Template {
private:
	T x;
	T y;
public:
	Template(T x=0,T y=0);
	T getX(){
		return x;
	}
	T getY(){
		return y;
	}
	T suma(){
		T aux;
		aux=x+y;
		cout<<x<<" + "<<y<<" = "<<aux<<endl;
		return aux;
	}	
	T resta(){
		T aux;
		aux=x-y;
		cout<<x<<" - "<<y<<" = "<<aux<<endl;
		return aux;
	}	
	T multiplicacion(){
		T aux;
		aux=x*y;
		cout<<"("<<x<<")("<<y<<") = "<<aux<<endl;
		return aux;
	}	
	T division(){
		T aux;
		aux=x/y;
		cout<<x<<" / "<<y<<" = "<<aux<<endl;
		return aux;
	}
};

#endif

