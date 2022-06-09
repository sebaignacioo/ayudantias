#include <stdio.h>
#include <stdlib.h>

int **gestionarMemoria(int);
void llenarMatriz(int **, int);
void imprimirMatriz(int **, int);
void rotarMatriz(int **, int **, int, int);

int main() {
    int n, ang;
    int **matOr, **matRot;

    scanf("%d", &n);
    matOr = gestionarMemoria(n);
    llenarMatriz(matOr, n);
    imprimirMatriz(matOr, n);
    scanf("%d", &ang);
    if (ang == 0)
        matRot = matOr;
    else {
        matRot = gestionarMemoria(n);
        rotarMatriz(matOr, matRot, n, (ang / 90));
    }
    printf("\n");
    imprimirMatriz(matRot, n);
    return EXIT_SUCCESS;
}

int **gestionarMemoria(int n) {
    int **mat = (int **) malloc(n * sizeof(int *));
    if (mat == NULL) exit(EXIT_FAILURE);
    for (int i = 0; i < n; i++) {
        mat[i] = (int *) malloc(n * sizeof(int));
        if (mat[i] == NULL) exit(EXIT_FAILURE);
    }
    return mat;
}

void llenarMatriz(int **mat, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void imprimirMatriz(int **mat, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c", mat[i][j]);
        }
        printf("\n");
    }
}

void rotarMatriz(int **matOr, int **matRot, int n, int cant) {
    for (int k = 0; k < cant; k++) {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                matRot[i][j] = matOr[n - j - 1][i];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                matOr[i][j] = matRot[i][j];
    }
}
