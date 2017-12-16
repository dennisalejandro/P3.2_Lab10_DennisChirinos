#include "Pila.h"

template <class T>
void Pila<T>::push(T dato){
	stack.push_back(dato);

}

template <class T>
bool Pila<T>::isEmpty(){
	return stack.size() ==0;

}

template <class T>
T Pila<T>::top(){
	return stack.back();

}

template <class T>
T Pila<T>::pop(){
	T retVal = stack.back();
	stack.pop_back();
	return retVal;

}