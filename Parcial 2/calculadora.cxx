i#include <stdio.h>
#include <conio.h>

int main() {
    float num1, num2, resultado;
    char operador;

    printf("Ingresa el primer número: ");
    scanf("%f", &num1);

    printf("Ingresa el segundo número: ");
    scanf("%f", &num2);

    printf("Ingresa el operador (+, -, *, /): ");
    scanf(" %c", &operador);

    switch(operador) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Error: División por cero no permitida.\n");
            }
            break;
        default:
            printf("Operador no válido.\n");
    }

    getch(); 
    return 0;
}