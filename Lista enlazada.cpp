//Listas enlazadas

#include <iostream>
#include <conio.h>
using namespace std;

struct Nodo
{
	int dato;
	Nodo *siguiente;
};

void InsLista(Nodo *&lista ,int n)
{
	Nodo *NewNodo = new Nodo();
	NewNodo->dato = n;
	Nodo *aux1 = lista;
	Nodo *aux2;
	
	while((aux1 != NULL) && (aux1->dato < n))
	{
		aux2 = aux1;
		aux1 = aux1->siguiente;
	}
	if(lista == aux1)
	{
		lista = NewNodo;
	}
	else
	{
		aux2->siguiente = NewNodo;
	}
	NewNodo->siguiente = aux1;
	cout << "\tElemento insertado\n";
}

int main()
{
	system("color f9");
	Nodo *lista = NULL;
	int dato;
	char op;
	do
	{
		cout << "Ingresa un numero: "; cin >> dato;
		InsLista(lista,dato);
		cout << "\nDesea ingresar otro dato [S / N] "; cin >> op;
	}while ((op=='S')||(op=='s'));
	return 0;
}
