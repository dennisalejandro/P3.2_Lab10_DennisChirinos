#include "Pencil.h"
#include <iostream>
#include <string>
#include <fstream>
#include <ostream>
#include <stack>
using namespace std;
	Pencil::Pencil(string Filename) { 
		setFile(Filename);
		setEnd(true);
	}
	void Pencil::write(string a) {
		ofstream File;
		File.open(getFile(), std::ios_base::app);
		File << a << "\n";
		File.close();
	}
	void Pencil::Edit() {
		stack<string> Stack;
		string Filename;
		int op2;
		string Newline;
		ofstream outfile;
		string line2;
		Filename = getFile();
		try {
			ifstream FileIn(Filename);
			int i = 0;
			while (getline(FileIn, line2)) {
				i++;
				cout << i << ": "<< line2 << "\n";
			}
			outfile.open(Filename, std::ios_base::app);
			while(Newline != "/q") {
				cin >> Newline;
				if (Newline == "/z") {
					Stack.pop();
				} else if (Newline == "/q") {
				
				} else {
					Stack.push(Newline+"\n");
				}
			}
			outfile << Stack.top() << "\n";
			outfile.close();
		} catch (exception e) {
			cout << "Sucedio un error\n";
		}
	}
	void Pencil::setFile(string a) {
		this->Filename = a;
	}
	string Pencil::getFile() {
		return this->Filename;
	}
	bool Pencil::getEnd() {
		return this->End;
	}
	void Pencil::setEnd(bool b) {
		this->End = b;
	}
