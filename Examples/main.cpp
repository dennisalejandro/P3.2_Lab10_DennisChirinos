//#include "Figura.h"
//#include "Rectangulo.h"
#include <iostream>
#include <vector>
#include "Object.h"
#include "Char.h"
//#include "LinkedStack.h"
//#include "Node.h"
#include "Stack.h"
#include "ArrayStack.h"
#include <string>

using namespace std;

int main(){
	/*
	Figura* figura= new Rectangulo(10,5);
	cout<<"El area es: "<<figura->getArea()<<endl;

	cout<<"El perimetro es: "<<figura->getPerimetro()<<endl;

	delete figura;*/
	string cadena = "Hola Mundo";
	Stack* stack= new ArrayStack(cadena.size());
	for (int i = 0; i < cadena.size(); ++i)
	{
		Char* caracter = new Char();
		caracter->setChar(cadena[i]);
		stack->push(caracter);

	}while(!stack->isEmpty()){
		Char* caracter= dynamic_cast<Char*>(stack->pop());
		cout<<caracter->getChar();
		delete caracter;
	}
	cout<<endl;

	delete stack;

	return 0;
}//fin main
