#include <stdio.h>

double sumatoriaNumeros(unsigned long, unsigned long);

int main()
{
    // Se declara y lee valor de a y b
    unsigned long a, b;
    scanf("%lu %lu", &a, &b);
    // Se calcula la sumatoria de números entre a y b
    double resultado = sumatoriaNumeros(a, b);
    // Se muestra por pantalla el resultado de la sumatoria
    printf("La sumatoria de números entre %lu y %lu = %.2lf",a, b, resultado);
    return 0;
}

double sumatoriaNumeros(unsigned long a, unsigned long b) {
    if (a == b) return a;
    return a + sumatoriaNumeros(a + 1, b);
}
