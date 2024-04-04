#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
	system ("color f9");
	char nombre[30];
	int p;
	cout << "\n\nEscriba su nombre: "; cin.getline(nombre,30);
	cout << "En mayusculas es: " << strupr(nombre) << endl;
	cout << "En minusculas es: " << strlwr(nombre) << endl; 
	for (p=strlen(nombre)-1; p>=0; p--)
	{
		cout << nombre[p];
	}
	system ("pause>nul");
	return 0;
}
