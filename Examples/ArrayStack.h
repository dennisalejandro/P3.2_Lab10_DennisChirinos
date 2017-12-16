#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H
#include "Stack.h"
#include "Object.h"

class ArrayStack: public Stack{

	private:
		Object** array;
		int size;
		int availPos;


	public:
		ArrayStack(int);
		virtual bool push(Object*);
		virtual Object* pop();
		virtual bool isEmpty();
		~ArrayStack();

};

#endif
