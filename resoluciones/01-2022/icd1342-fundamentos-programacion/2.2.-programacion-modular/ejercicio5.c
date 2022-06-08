#include <stdio.h>

/*
void imprimirConjetura(long long numero) {
    printf("%lld ", numero);
    if (numero == 1) return;
    if ((numero % 2) == 0)
        imprimirConjetura(numero / 2);
    else
        imprimirConjetura((numero * 3) + 1);
} */

void imprimirConjetura(long long numero) {
    while (numero > 1) {
        printf("%lld ", numero);
        if ((numero % 2) == 0)
            numero /= 2;
        else
            numero = (3 * numero) + 1;
    }
    printf("1\n");
}

void leerYValidar(long long *numero) {
    do {
        scanf("%lld", numero);
    } while (((*numero) < 1) || ((*numero) >= 100000000));
}

int main() {
    long long numero;
    leerYValidar(&numero);
    imprimirConjetura(numero);
    return 0;
}