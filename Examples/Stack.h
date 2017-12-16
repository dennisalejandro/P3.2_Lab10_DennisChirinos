#ifndef STACK_H
#define STACK_H
#include "Object.h"

class Stack{

	public:

	virtual bool push(Object*)=0;
	virtual Object* pop()=0;
	virtual bool isEmpty()=0;


};

#endif
