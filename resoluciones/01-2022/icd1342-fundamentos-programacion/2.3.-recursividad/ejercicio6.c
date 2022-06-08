#include <stdio.h>

unsigned long sumaDescendente(long numero, unsigned long potencia10) {
    if ((numero % potencia10) == numero) return numero;
    return (numero % potencia10) + sumaDescendente(numero, potencia10 * 10);
}

int main() {
    long numero = 1;
    unsigned long potencia10;
    while (numero != 0)
    {
        scanf("%ld" , &numero);
        if (numero == 0) break;
        potencia10 = 10;
        printf("%lu\n" , sumaDescendente(numero , potencia10));
    }
    printf("---FIN---");
    return 0;
}