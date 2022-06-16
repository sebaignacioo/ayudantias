#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef unsigned short uShort;

typedef struct
{
    size_t codigoNino;
    uShort comportamiento;
    uShort pesoRegalos;
} datosNino;

// TU RESPUESTA SE COPIARÁ ACÁ
datosNino *gestionarMemoria(datosNino *vectorOriginal, size_t total) {
    datosNino *vector;
    if (total == 0)
        vector = (datosNino *) malloc(sizeof(datosNino));
    else
        vector = (datosNino *) realloc(vectorOriginal, total * sizeof(datosNino));
    return vector;
}

bool existeNino(size_t codNino, datosNino *vector, size_t total) {
    if (vector != NULL)
        for (int i = 0; i < total; i++)
            if (vector[i].codigoNino == codNino) return true;
    return false;
}

datosNino *poblar(size_t *total) {
    datosNino *vector = NULL;
    size_t cod;
    uShort comp, pesoReg;
    scanf("%lu", &cod);
    while (cod != 0) {
        scanf("%hu %hu", &comp, &pesoReg);
        if (!existeNino(cod, vector, *total)) {
            vector = gestionarMemoria(vector, (*total) + 1);
            vector[*total].codigoNino = cod;
            vector[*total].comportamiento = comp;
            vector[*total].pesoRegalos = pesoReg;
            (*total)++;
        }
        scanf("%lu", &cod);
    }
    return vector;
}

void mostrar(datosNino *listaNinos, size_t n) {
    for (int i = 0; i < n; i++)
        printf("| %8lu | %16hu | %6hu |\n",
               listaNinos[i].codigoNino,
               listaNinos[i].comportamiento,
               listaNinos[i].pesoRegalos);
    printf(" -------------------------------------- \n");
}

int comparar(const void *a, const void *b) {
    datosNino *ptrA = (datosNino *) a, *ptrB = (datosNino *) b;
    if (ptrA->comportamiento != ptrB->comportamiento)
        return ptrB->comportamiento - ptrA->comportamiento;
    else
        return ptrA->pesoRegalos - ptrB->pesoRegalos;
}

int main()
{
    datosNino *listaNinos = NULL;
    size_t totalNinos = 0;
    listaNinos = poblar(&totalNinos); //FUNCIÓN 1
    if (listaNinos == NULL) return 1;
    printf(" -------------------------------------- \n");
    printf("|    LISTADO ORDEN DE ENVIO CARTAS     |\n");
    printf(" -------------------------------------- \n");
    printf("|  CODIGO  |  COMPORTAMIENTO  |  PESO  |\n");
    printf(" -------------------------------------- \n");
    mostrar(listaNinos,totalNinos); //FUNCIÓN 2
    qsort(listaNinos, totalNinos, sizeof(datosNino), comparar); //FUNCIÓN 3
    printf(" -------------------------------------- \n");
    printf("|    LISTADO ORDEN ENTREGA REGALOS     |\n");
    printf(" -------------------------------------- \n");
    printf("|  CODIGO  |  COMPORTAMIENTO  |  PESO  |\n");
    printf(" -------------------------------------- \n");
    mostrar(listaNinos,totalNinos); //FUNCIÓN 2
    return 0;
}