#include <stdio.h>
#include <stdbool.h>

bool esPrimo(int numero, int divisor) {
    if (numero == 1)
        return false;
    if ((numero / 2) < divisor)
        return true;
    if (numero % divisor == 0)
        return false;
    else
        return esPrimo(numero, divisor + 1);
}

void sumaPrimosNoPrimos(int numero, int *sumaPrimos, int *sumaNoPrimos) {
    if (numero == 0) return;
    if (esPrimo((numero % 10), 2))
        (*sumaPrimos) += (numero % 10);
    else
        (*sumaNoPrimos) += (numero % 10);
    sumaPrimosNoPrimos(numero / 10, sumaPrimos, sumaNoPrimos);
}

int main() {
    int sumaPrimos, sumaNoPrimos, numero;
    do {
        scanf("%d", &numero);
        sumaPrimos = 0;
        sumaNoPrimos = 0;
        if (numero == 0)
            printf("FIN\n");
        else {
            sumaPrimosNoPrimos(numero, &sumaPrimos, &sumaNoPrimos);
            if (sumaPrimos >= sumaNoPrimos)
                printf("%d es NASHEEE\n", numero);
            else
                printf("%d no es nasheee :c\n", numero);
        }
    } while (numero != 0);

    return 0;
}