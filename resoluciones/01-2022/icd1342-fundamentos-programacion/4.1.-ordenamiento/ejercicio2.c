#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define MAX 1001

char *gestionMemoria(size_t largo) {
    char *txt = (char *) malloc(largo * sizeof(char));
    if (txt == NULL) exit(EXIT_FAILURE);
    return txt;
}

int compararCaracteres(const void *a, const void *b) {
    char *ptrA = (char *) a, *ptrB = (char *) b;
    return *ptrA - *ptrB;
}

char *limpiarTexto(char *txt) {
    size_t largo = strlen(txt), j = 0;
    char *limpio = gestionMemoria(largo);
    for (int i = 0; i < largo; i++) {
        if (!isspace(txt[i])) {
            limpio[j] = tolower(txt[i]);
            j++;
        }
    }
    limpio[j] = '\0';
    return limpio;
}

bool esAnagrama(char *txt1, char* txt2) {
    char *limpio1, *limpio2;
    limpio1 = limpiarTexto(txt1);
    limpio2 = limpiarTexto(txt2);
    //printf("%s - %s\n", limpio1, limpio2);
    qsort(limpio1, strlen(txt1), sizeof(char), compararCaracteres);
    qsort(limpio2, strlen(txt1), sizeof(char), compararCaracteres);
    //printf("%s - %s\n", limpio1, limpio2);
    return strcmp(limpio1, limpio2) == 0;
}

void procesarCaso() {
    char txt1[MAX], txt2[MAX];
    scanf(" %1000[^\n]s", txt1);
    scanf(" %1000[^\n]s", txt2);
    if (esAnagrama(limpiarTexto(txt1), limpiarTexto(txt2)))
        printf("SI\n");
    else
        printf("NO\n");
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        procesarCaso();
    return EXIT_SUCCESS;
}
