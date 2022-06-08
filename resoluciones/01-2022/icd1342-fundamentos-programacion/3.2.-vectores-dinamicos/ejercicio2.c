#include <stdio.h>
#include <stdlib.h>

char **gestionarMemoria(int);
char **generarMatriz(int);
void imprimirMatriz(char **, int);

int main() {
    int n;
    char **matriz;
    scanf("%d", &n);
    matriz = generarMatriz(n);
    imprimirMatriz(matriz, n);
    return EXIT_SUCCESS;
}

char **generarMatriz(int n) {
    char **matriz = gestionarMemoria(n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            matriz[i][j] = '-';

    int mitad = n / 2;
    for (int i = 0; i < mitad + 1; i++)
        for (int j = mitad - i ; j < mitad + i + 1; j++)
            matriz[i][j] = '*';
    for (int i = mitad + 1; i < n; i--)
        for (int j = i - mitad; j < i - mitad - 1; j++)
            matriz[i][j] = '*';
    return matriz;
}

char **gestionarMemoria(int n) {
    char **mat;
    mat = (char **) malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++)
        mat[i] = (char *) malloc(n * sizeof(char));
    return mat;
}

void imprimirMatriz(char **matriz, int n) {
    printf("MATRIZ GENERADA\n\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%c ", matriz[i][j]);
        printf("\n");
    }
}
