#include <iostream>

using namespace std;

int main()
{
	system ("color f9");
	char cadena[20];
	int posicion;
	cout << "Ingrese una palabra: "; cin >> cadena;
	cout << "La palabra ingresada es... " << cadena << endl;
	cout << "La primera letra es... " << cadena[0] << endl;
	cout << "Escriba el numero de posicion de la letra [1-5]: ", cin >> posicion;
	switch (posicion)
	{
		case 1: cout << cadena[0] << endl; break;
		case 2: cout << cadena[1] << endl; break;
		case 3: cout << cadena[2] << endl; break;
		case 4: cout << cadena[3] << endl; break;
		case 5: cout << cadena[4] << endl; break;
	}
	system ("pause>nul");
	return 0;
}
