#include <iostream>
using namespace std;

int main()
{
	int DA, MA, AA;
	int DN, MN, AN;
	//entrada
	cout << "ingresa la fecha actual (dia, mes y año): ";
	cin >> DA >> MA >> AA;
	//entrada
	cout << "ingresa tu fecha de nacimiento (dia, mes y año): ";
	cin >> DN >> MN >> AN;
	//calculo
	int edad = AA - AN - ((MA < MN) || (MA == MN && DA < DN));
	//salida
	cout << "tienes " << edad << " años." << endl;
	
	return 0;
}