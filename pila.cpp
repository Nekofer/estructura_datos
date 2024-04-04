// Listas enlazadas

#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

struct Nodo
{
	int dato;
	Nodo *next;
};

void AgregarPila(Nodo *&pila, int n)
{
	Nodo *NewNodo = new Nodo();
	NewNodo->dato = n;
	NewNodo->next = pila;
	pila= NewNodo;
	cout << "\t El elemento " << n << " ha sido agregado correctamente";
}

void SacarPila(Nodo *&pila, int &n)
{
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->next;
	delete aux;
};

int main()
{
	system ("color f9");
	Nodo *pila = NULL;
	int dato;
	char op;
	do
	{
		cout << "\nAgrega numeros: "; cin >> dato;
		AgregarPila(pila, dato);
		cout << "\nDesea agregar otro elemento [S / N]: "; cin >> op;
	} while((op=='S') || (op=='s'));
	cout << "\nElementos: ";
	while(pila != NULL)
	{
		SacarPila(pila,dato);
		if (pila != NULL)
		{
			cout << dato << " , ";
		}
		else
		{
			cout << dato << " . ";
		}
	}
	
	return 0;
}
