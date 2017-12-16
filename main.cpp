#include <iostream>
#include <stack>
#include <vector>
#include <deque>
#include "Pencil.h"
#include <stdio.h>
#include <exception>
using namespace std;
int main() {
	int op = 0;
	while (op!=3) {
	cout << "1) Crear Archivo Nuevo\n";
	cout << "2) Agregar al Archivo\n";
	cout << "3) Salir \n";
	cout << "\n";
	cin >> op;
		switch (op) {
			case 1: {
				string Filename;
				cout << "Ingrese Nombre del Archivo\n";
				cin >> Filename;
				ofstream a;
				a.open(Filename, std::ios_base::app);
				Pencil* lapiz = new Pencil(Filename);
				string line = "";
				cout << "Presione lineas, use /q para salir \n";
				while (line != "/q") {
					try {
						cin >> line;
						if (line != "/q") {
							lapiz->write(line);
						}
					} catch (exception e) {
						cout << "Sucedio un error \n";
					}
				}
				a.close();
				delete lapiz;
			} break;
			case 2: {
				cout << "Ingrese Nombre del Archivo\n";
				string Filename;
				cin >> Filename;
				Pencil* lapiz = new Pencil(Filename);
				cout << "Escriba una linea para escribir, escriba /q para salir, escriba /z para undo\n";
				lapiz->Edit();
				delete lapiz;
			} break;
		}
	}
	return 0;
}
