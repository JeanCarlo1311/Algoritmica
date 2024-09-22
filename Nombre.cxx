/*Nombre*/

#include <conio.h>
#include <stdio.h>

int main()
{
	char nombre[20];
	
	printf	(	"introduzca su nombre: ");
	scanf	(	"%s", nombre);
	printf	(	"hola %s, buenos di%cas.", nombre );
	
	getch();
	
	return 0;
}