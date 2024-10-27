#include <stdio.h>
#include <conio.h>

int main()
{
	float cal1, cal2, cal3, promf;

	printf("Ingresa la primera calificacion: ");
	scanf("%f", &cal1);

	printf("Ingresa la segunda calificacion: ");
	scanf("%f", &cal2);

	printf("Ingresa la tercera calificacion: ");
	scanf("%f", &cal3);

	promf = (cal1 + cal2 + cal3) / 3;
	if (promf >= 6)
	{
		printf("aprobado");
	}
	else
	{
		printf("reprobado");
	}
	getch();
	return 0;
}