#include <stdio.h>

unsigned long obtenerTerminoFibonacci(unsigned long);

int main()
{
    // Se declara y lee n
    unsigned long n;
    scanf("%lu", &n);
    // Se obtiene el n-ésimo termino de la sucesión de Fibonacci
    unsigned long termino = obtenerTerminoFibonacci(n);
    // Se muestra por pantalla el n-ésimo término de la sucesión de Fibonacci
    printf("Término serie Fibonacci en posición %lu es %lu", n, termino);
    return 0;
}

unsigned long obtenerTerminoFibonacci(unsigned long num) {
    if (num == 0) return 0;
    else if (num == 1) return 1;
    else return obtenerTerminoFibonacci(num - 1) + obtenerTerminoFibonacci(num - 2);
}
