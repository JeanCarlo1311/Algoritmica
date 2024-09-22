#include	<iostream>

using namespace std;

int main()
{
	float celsius, fahrenheit;
	
	cout	<<	"grados celsius: ";
	cin	>>	celsius;
	
	fahrenheit	=	(celsius	*	9	/	5)	+	32;
	cout	<<	celsius	<<	"°C son "	<<	fahrenheit	<<	"°F son "	<<	endl;
	return 0;
}