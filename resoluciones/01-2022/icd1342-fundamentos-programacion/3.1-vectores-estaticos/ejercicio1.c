#include <stdio.h>
#include <stdlib.h>

void llenarVector(int [], int);
void ordenarVector(int [], int);
void imprimirVector(int [], int);
void imprimirMediana(int [], int);

int main() {
    int cantDatos;

    scanf("%d", &cantDatos);

    while (cantDatos > 0) {
        int vector[cantDatos];
        llenarVector(vector, cantDatos);
        imprimirVector(vector, cantDatos);
        ordenarVector(vector, cantDatos);
        imprimirVector(vector, cantDatos);
        imprimirMediana(vector, cantDatos);
        scanf("%d", &cantDatos);
    }
    return EXIT_SUCCESS;
}

void llenarVector(int arr[], int cant) {
    int num;
    for (int i = 0; i < cant; i++) {
        scanf("%d", &num);
        arr[i] = num;
    }
}

void ordenarVector(int arr[], int cant) {
    int aux;
    for (int i = 0; i < cant - 1; i++)
        for (int j = 0; j < cant - i - 1; j++)
            if (arr[j] > arr[j + 1]) {
                aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
            }
}

void imprimirVector(int arr[], int cant) {
    printf("VECTOR = ");
    for (int i = 0; i < cant; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void imprimirMediana(int arr[], int cant) {
    int posMediana = cant / 2;
    int dobleMediana;
    if ((cant % 2) != 0)
        dobleMediana = 2 * arr[posMediana];
    else
        dobleMediana = arr[posMediana] + arr[posMediana - 1];
    printf("MEDIANA = %d\n\n", dobleMediana);
}

