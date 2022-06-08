#include <stdio.h>

double calcularValorPi(unsigned long, unsigned long, unsigned long);

int main()
{
    // Se declara y lee el valor de n
    unsigned long n;
    scanf("%lu", &n);
    // Se declara variable denominador y se inicializa en 1
    unsigned long denominador = 1;
    // Se declara variable contadorTerminos y se inicializa en 1
    unsigned long contadorTerminos = 1;
    // Se declara variable valorPI y se le asigna el valor retornado
    // por la función que calcula la suma de los primeros n términos de
    // la suma infinita multiplicado por 4
    double valorPI = 4 * calcularValorPi(n, denominador, contadorTerminos);
    // Se imprime valor de PI calculado
    printf("Valor de PI calculado al evaluar %lu términos es %.6lf", n, valorPI);
    return 0;
}

double calcularValorPi(unsigned long n, unsigned long den, unsigned long cont) {
    double termino = 1.0 / den;
    if ((cont % 2) == 0) termino *= -1.0;
    if (cont == n) return termino;
    return termino + calcularValorPi(n, den + 2, cont + 1);
}
