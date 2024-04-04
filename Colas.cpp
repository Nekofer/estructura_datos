// Colas

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo
{
	char dato;
	Nodo *siguente;
};

bool colavacia(Nodo *frente)
{
	return (frente == NULL)? true : false;
}

void Insertar(Nodo *&frente,Nodo *&fin,char n)
{
	Nodo *nuevonodo = new Nodo();
	nuevonodo->dato = n;
	nuevonodo->siguente = NULL;
	
	if(colavacia(frente))
	{
		frente = nuevonodo;
	}
	else
	{
		fin->siguente = nuevonodo;
	}
	fin = nuevonodo;
}

void Supp(Nodo *&frente,Nodo *&fin,char &n)
{
	n = frente->dato;
	Nodo *aux = frente;
	if(frente == fin)
	{
		frente = NULL;
		fin = NULL;
	}
	else
	{
		frente = frente->siguente;
	}
	delete aux;
}

void menu()
{
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	int  op;
	char dato;
	do
	{
		cout << "\tMENU: \n";
		cout << "1. Insertar elemento\n";
		cout << "2. Mostrar elementos\n";
		cout << "3. Salir\n";
		cout << "Opcion: "; cin >> op;
		switch(op)
		{
			case 1: cout << "\nIngrese el caracter: "; cin >> dato;
					Insertar(frente,fin,dato); break;
			case 2: cout << "\nElementos: ";
					while(frente != NULL)
					{
						Supp(frente, fin, dato);
						if (frente != NULL)
						{
							cout << dato << " , ";
						}
						else
						{
							cout << dato <<" . ";
						}
					}
					system("pause>nul");
					break;
			case 3: break;	
		}
		system ("cls");
	}while(op != 3);
}

int main()
 {
 	system ("color f9");
	menu();
	return 0;
}
