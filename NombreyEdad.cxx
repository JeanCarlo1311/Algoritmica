#include <iostream>
using namespace std;

int main()
{
	int DA, MA, AA;
	int DN, MN, AN;
	//nombre
		char nombre[20];
	
	printf	(	"introduzca su nombre: ");
	scanf	(	"%s", nombre);
	//fecha actual
	cout << "ingresa la fecha actual (dia, mes y año): ";
	cin >> DA >> MA >> AA;
	//fecha de nacimiento
	cout << "ingresa tu fecha de nacimiento (dia, mes y año): ";
	cin >> DN >> MN >> AN;
	//calculo
	int edad = AA - AN - ((MA < MN) || (MA == MN && DA < DN));
	//salida
		printf	(	"hola %s, buenos di%cas ", nombre );
	cout << "tienes " << edad << " años." << endl;
	return 0;
}