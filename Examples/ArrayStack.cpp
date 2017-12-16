#include "ArrayStack.h"
#include "Object.h"

ArrayStack::ArrayStack(int pSize){

	size = pSize;
	array= new Object*[size];

	for (int i = 0; i < size; i++) {
		array[i]=0;
	}
	availPos=0;

}



bool ArrayStack::push(Object* dato){

	bool retVal=false;

	if(availPos==size){

		return retVal;

	}else{
		array[availPos++]=dato;
		retVal= true;
		return retVal;

	}

}// fin push


bool ArrayStack::isEmpty(){
	return availPos==0;


}

Object* ArrayStack::pop(){
	Object* retVal;
	if(isEmpty()){
		return 0;

	}else{
		retVal = array[availPos-1];
		array[availPos-1]=0;
		availPos--;
		return retVal;

	}


}// fin metodo pop


ArrayStack::~ArrayStack(){
	for (int i = 0; i < size; i++) {
		if (array[i]!=0) {
			delete array[i];
		}

	}
	delete[] array;

}
