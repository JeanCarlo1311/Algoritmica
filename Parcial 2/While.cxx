#include <stdio.h>

int main() {
    double num, sum, pro;
    sum = 0;
    pro = 1; 
    num = 1;

    printf("\nEscribe un número diferente de 0 (0 para detenerse): ");
    scanf("%lf", &num);

    while (num != 0) {
        sum = sum + num;
        pro = pro * num;

        printf("\nNúmero = %lf  Suma = %lf  Producto = %lf", num, sum, pro);

        printf("\nIntroduce otro número (0 para acabar): ");
        scanf("%lf", &num);
    }

    printf("\n\nSuma Total = %lf", sum);
    printf("\nProducto Total = %lf", pro);

    return 0;
}