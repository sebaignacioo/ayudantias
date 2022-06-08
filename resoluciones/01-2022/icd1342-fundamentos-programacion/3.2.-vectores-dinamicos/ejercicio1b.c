#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int *gestionarMemoria(int *, int);
void agregarDato(int **, int *, int);
void imprimir(int *, int);
void ordenar(int *, int);
bool existeDato(int *, int, int);

int main() {
    int num, pLibre = 0;
    int *vector = NULL;
    scanf("%d", &num);
    while (num > 0) {
        vector = gestionarMemoria(vector, pLibre);
        agregarDato(&vector, &pLibre, num);
        scanf("%d", &num);
    }
    ordenar(vector, pLibre);
    imprimir(vector, pLibre);
    return EXIT_SUCCESS;
}

int *gestionarMemoria(int *vector, int pLibre) {
    int *ptr;
    if (vector == NULL || pLibre == 0)
        ptr = (int *) malloc(sizeof(int));
    else
        ptr = (int *) realloc(vector, (pLibre + 1) * sizeof(int));
    return ptr;
}

void agregarDato(int **vector, int *pLibre, int dato) {
    if (!existeDato(*vector, *pLibre, dato)) {
        (*vector)[*pLibre] = dato;
        (*pLibre)++;
    }
}

void imprimir(int *vector, int pLibre) {
    printf("VECTOR = { " );
    for (int i = 0; i < pLibre; i++) {
        printf("%d ", vector[i]);
    }
    printf("}\n");
}

void ordenar(int *vector, int pLibre) {
    int aux;
    for (int i = 0; i < pLibre - 1; i++)
        for (int j = 0; j < pLibre - i - 1; j++)
            if (vector[j] > vector[j + 1]) {
                aux = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = aux;
            }
}

bool existeDato(int *vector, int pLibre, int dato) {
    for (int i = 0; i < pLibre; i++)
        if (vector[i] == dato) return true;
    return false;
}
