#include <iostream>
using namespace std;

int main()
{
    int puntaje;
    cout << "Ingresa la calificacion entre (0-100): ";
    cin >> puntaje;
    char letra;

    switch (puntaje / 10)
    {
        case 10: //maximo puntaje
        case 9:
            letra = 'A';
            break;
        case 8:
            letra = 'B';
            break;
        case 7:
            letra = 'C';
            break;
        case 6:
            letra = 'D';
            break;
        case 5:
            letra = 'E';
            break;
        default:
            letra = 'F'; //menor al 50
            break;
    }

    cout << "El puntaje final es: " << letra << endl;

    return 0;
}