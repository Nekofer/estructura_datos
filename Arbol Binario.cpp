// Arbol Binario

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo
{
	int dato;
	Nodo *der;
	Nodo *izq;
};

Nodo *arbol = NULL;

Nodo *Crear(int n)
{
	Nodo *NewNodo = new Nodo();
	NewNodo->dato = n;
	NewNodo->der = NULL;
	NewNodo->izq = NULL;
	
	return NewNodo;
}

void insertar(Nodo *&Arbol,int n)
{
	if (Arbol == NULL)
	{
		Nodo *NewNodo = Crear(n);
		Arbol = NewNodo;
	}
	else
	{
		int valor = Arbol->dato;
		if(n<valor)
		{
			insertar(arbol->izq,n);
		}
		else
		{
			insertar(arbol->der,n);
		}
	}
}

void Mostrar(Nodo *arbol, int conta)
{
	if (arbol == NULL)
	{
		return;
	}
	else
	{
		Mostrar(arbol->der,conta+1);
		for (int i=0; i<conta; i++)
		{
			cout << "   ";
		}
		cout << arbol->dato << endl;
		Mostrar(arbol->izq, conta +1);
	}
}

void menu() // Solo para hacerlo mas ordenado
{
	int dato, op, conta=0;
	do
	{
		cout << "\nMenu: ";
		cout << "\n1. Insertar nodo";
		cout << "\n2. Mostrar nodo";
		cout << "\n3. Salir";
		cout << "\nOpcion: "; cin >> op;
		switch(op)
		{
			case 1: cout << "\nIntroduzca un numero: "; cin >> dato;
					insertar(arbol, dato);
					cout << "\n";
					system ("pause");
				break;
			case 2: cout << "\Mostrando Arbol\n\n";
					Mostrar(arbol, conta);
					cout << endl;
					system ("pause");
				break;
			case 3:
				break;
		}
		system ("cls");
	}while(op!=3);
}

int main()
{
	system ("color f9");
	menu();
	return 0;
}
