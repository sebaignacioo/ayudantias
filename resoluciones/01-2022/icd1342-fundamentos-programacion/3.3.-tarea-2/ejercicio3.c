#include <stdio.h>
#include <stdlib.h>

char **reservarMemoria(int, int);
void leerTablero(char **, int, int);
int contarMinasAlrededor(char **, int, int);
int procesarTablero(int, int);

int main() {
    int ancho, alto;
    scanf("%d %d", &ancho, &alto);
    while((ancho != 0) && (alto != 0)) {
        printf("%d\n", procesarTablero(ancho, alto));
        scanf("%d %d", &ancho, &alto);
    }
    return EXIT_SUCCESS;
}

char **reservarMemoria(int ancho, int alto) {
    char **matriz = (char **) malloc(alto * sizeof(char *));
    if (matriz == NULL) exit(EXIT_FAILURE);
    for (int i = 0; i < alto; i++) {
        matriz[i] = (char *) calloc(ancho, sizeof(char));
        if (matriz[i] == NULL) exit(EXIT_FAILURE);
    }
    return matriz;
}

void leerTablero(char **tablero, int ancho, int alto) {
    for (int i = 1; i <= alto; i++) {
        for (int j = 1; j <= ancho; j++) {
            scanf(" %c", &tablero[i][j]);
        }
        getchar();
    }
}

void escribirTablero(char **tablero, int ancho, int alto) {
    for (int i = 0; i < alto; i++) {
        for (int j = 0; j < ancho; j++) {
            if (tablero[i][j] == '\0')
                printf("0 ");
            else
                printf("%c ", tablero[i][j]);
        }
        printf("\n");
    }
}

int contarMinasAlrededor(char **tab, int a, int b) {
    int cont = 0;
    for (int i = a - 1; i <= a + 1; i++) {
        for (int j = b - 1; j <= b + 1; j++) {
            if (tab[i][j] == '*')
                cont++;
        }
    }
    return cont;
}

int procesarTablero(int ancho, int alto) {
    int cont = 0;
    char **tablero = reservarMemoria(ancho + 2, alto + 2);
    leerTablero(tablero, ancho, alto);
    // escribirTablero(tablero, ancho + 2, alto + 2);

    for (int i = 1; i <= alto; i++) {
        for (int j = 1; j <= ancho; j++) {
            if (tablero[i][j] == '-')
                if (contarMinasAlrededor(tablero, i, j) >= 6)
                    cont++;
        }
    }

    return cont;
}
