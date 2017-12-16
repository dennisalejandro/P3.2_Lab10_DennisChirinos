#pragma once

#include <vector>
#include <iostream>
using namespace std;

template <class T>
class Pila{
private:
	vector<T> stack;
public:
	void push(T);
	T pop();
	bool isEmpty();
	T top();


};

#include "Pila.cpp"