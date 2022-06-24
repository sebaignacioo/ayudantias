#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 501

char **leerFrases(int);
char *aMayuscula(char *);
void imprimirFrases(char **, int);

int main() {
    char **frases = NULL;
    int cantFrases;
    scanf("%d", &cantFrases);
    frases = leerFrases(cantFrases);
    imprimirFrases(frases, cantFrases);
    free(frases);
    return EXIT_SUCCESS;
}

char **leerFrases(int n) {
    char **frases = (char **) malloc(sizeof(char *) * n);
    if (frases == NULL) exit(EXIT_FAILURE);
    for (int i = 0; i < n; i++) {
        frases[i] = (char *) malloc(sizeof(char) * MAX_LENGTH);
        scanf(" %500[^\n]s", frases[i]);
    }
    return frases;
}

char *aMayuscula(char *frase) {
    char *fraseMayus = (char *) malloc(sizeof(char) * (strlen(frase) + 1));
    if (fraseMayus == NULL) exit(EXIT_FAILURE);
    for (int i = 0; i < strlen(frase); i++) {
        if (isalpha(frase[i]))
            fraseMayus[i] = toupper(frase[i]);
        else
            fraseMayus[i] = frase[i];
    }
    return fraseMayus;
}

void imprimirFrases(char **frases, int cant) {
    printf("Frases leidas: \n");
    for (int i = 0; i < cant; i++)
        printf("-> %s\n", frases[i]);
    printf("\nFrases en mayúsculas:\n");
    for (int i = 0; i < cant; i++)
        printf("-> %s\n", aMayuscula(frases[i]));
}
