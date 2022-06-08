#include <stdio.h>
#include <stdlib.h>

int *gestionarMemoria(int *, int);
void agregarDato(int **, int *, int);
void imprimir(int *, int);

int main() {
    int num, pLibre = 0;
    int *vector = NULL;
    scanf("%d", &num);
    while (num > 0) {
        vector = gestionarMemoria(vector, pLibre);
        agregarDato(&vector, &pLibre, num);
        scanf("%d", &num);
    }
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
    int i = 0, j = *pLibre;
    while (((*vector)[i] <= dato) && i < *pLibre) {
        if ((*vector)[i] == dato) return;
        i++;
    }
    while (j > i) {
        (*vector)[j] = (*vector)[j - 1];
        j--;
    }
    (*vector)[j] = dato;
    (*pLibre)++;
}

void imprimir(int *vector, int pLibre) {
    printf("VECTOR = { " );
    for (int i = 0; i < pLibre; i++) {
        printf("%d ", vector[i]);
    }
    printf("}\n");
}
