#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void llenarVector(int **, int *);
void buscarOcurrencias(int *, int, int);
int *gestionarMemoria(int *, int);

int main() {
    int *vector = NULL;
    int cant = 0, clave;
    llenarVector(&vector, &cant);
    if (cant > 0) {
        scanf("%d", &clave);
        buscarOcurrencias(vector, cant, clave);
    }
    return EXIT_SUCCESS;
}

void llenarVector(int **vector, int *cant) {
    int num;
    scanf("%d", &num);
    while (num > 0) {
        *vector = gestionarMemoria(*vector, *cant);
        (*vector)[*cant] = num;
        (*cant)++;
        scanf("%d", &num);
    }
}

void buscarOcurrencias(int *vector, int cant, int valorBuscado) {
    bool encontrado = false;
    for (int i = 0; i < cant; i++) {
        if (vector[i] == valorBuscado) {
            encontrado = true;
            printf("Edad %d se encuentra en vector en posicion %d\n", valorBuscado, i);
        }
    }
    if (!encontrado)
        printf("Edad %d NO se encuentra en vector\n", valorBuscado);
}

int *gestionarMemoria(int *vector, int cant) {
    int *ptr = vector;
    if (cant == 0 || vector == NULL)
        ptr = (int *) malloc(sizeof(int));
    else
        ptr = (int *) realloc(vector, (cant + 1) * sizeof(int));
    return ptr;
}
