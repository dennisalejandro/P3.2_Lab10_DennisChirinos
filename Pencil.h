#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <stack>
using namespace std;
class Pencil {
	protected: 
		string Filename;
		bool End;
	public: 
		Pencil(string);
		void write (string);
		void Edit();
		string getFile();
		void setFile(string);
		void setEnd(bool);
		bool getEnd();
};
