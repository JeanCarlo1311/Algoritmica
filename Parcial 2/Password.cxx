#include <iostream>

using namespace std;

int main()	{	
	int contrasena,x=1234;
	do{
	cout <<"Ingresa el NIP	\n\nNIP: ";
	cin >> contrasena;
	if(contrasena!=x)
	cout <<"Contraseña Incorrecta\n\n";
	}while(contrasena!=x);
	cout <<"Contraseña correcta";
	
	return 0;
}