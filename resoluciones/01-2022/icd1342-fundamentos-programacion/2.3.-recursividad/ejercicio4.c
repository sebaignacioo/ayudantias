#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool esPrimo(unsigned long, unsigned long);

int main()
{
    // Se declara y lee el número
    unsigned long numero;
    scanf("%lu", &numero);
    // Se declara divisor candidato y se inicializa en 2
    unsigned long divisorCandidato = 2;
    // Se determina si el número es o no es Primo
    if (esPrimo(numero, divisorCandidato))
        printf("%lu ES PRIMO", numero);
    else
        printf("%lu NO ES PRIMO", numero);
    return 0;
}

bool esPrimo(unsigned long num, unsigned long divCand) {
    if (num == 1) return false;
    else if (divCand == (unsigned long) sqrt(num)) return true;
    else if ((num % divCand) == 0) return false;
    return true && esPrimo(num, divCand + 1);
}
