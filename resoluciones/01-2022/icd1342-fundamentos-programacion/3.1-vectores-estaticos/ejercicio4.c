#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define BITS 16

short *decABin(int);
void imprimirBin(short *);
void complemento(short **);
void procesarCasosPrueba(short **, int);

int main() {
    int cant;
    short *bin;
    scanf("%d", &cant);
    procesarCasosPrueba(&bin, cant);
    return EXIT_SUCCESS;
}

short *decABin(int num) {
    short *bin = (short *) calloc(BITS, sizeof(short));
    short i = BITS - 1;
    bool neg = num < 0;
    if (neg) num = -num;
    while (num > 0) {
        if ((num % 2) != 0)
            bin[i] = 1;
        num /= 2;
        i--;
    }
    if (neg) complemento(&bin);
    return bin;
}

void imprimirBin(short *bin) {
    for (int i = 0; i < BITS; i++) {
        printf("%d", bin[i]);
    }
    printf("\n");
}

void complemento(short **bin) {
    for (int i = 0; i < BITS; i++) {
        if ((*bin)[i] == 0)
            (*bin)[i] = 1;
        else
            (*bin)[i] = 0;
    }
}

void procesarCasosPrueba(short **bin, int cant) {
    int num;
    for (int i = 0; i < cant; i++) {
        scanf("%d", &num);
        *bin = decABin(num);
        printf("%d en C1 es ", num);
        imprimirBin(*bin);
        if (num == 0) {
            complemento(bin);
            printf("%d en C1 es ", num);
            imprimirBin(*bin);
        }
        free(*bin);
    }
}
