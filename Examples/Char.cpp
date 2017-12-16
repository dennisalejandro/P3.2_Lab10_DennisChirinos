#include "Char.h"
#include <typeinfo>

char Char::getChar(){
	return value;
}
void Char::setChar(char c){
	value = c;
}
bool Char::equals(Object* pOther){
	if (typeid(*pOther)==typeid(Char))
	{
		Char* temp= dynamic_cast<Char*>(pOther);
		return temp->getChar()==value;
	}else{
		return false;
	}
}
string Char::toString(){
	string retValue;
	retValue += value;
	return retValue;
}