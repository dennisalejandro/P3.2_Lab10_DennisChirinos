#ifndef CHAR_H
#define CHAR_H

#include "Object.h"
#include <string>

using namespace std;

class Char: public Object{
	private:
		char value;

	public:
		char getChar();
		void setChar(char);

		virtual bool equals(Object*);
		virtual string toString();
};

#endif