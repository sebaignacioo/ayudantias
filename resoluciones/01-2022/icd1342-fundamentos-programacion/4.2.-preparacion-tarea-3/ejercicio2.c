#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
    int rut;
    double nota;
    bool aprobado;
} estudiante;

estudiante *gestionarMemoria(estudiante *, int);
estudiante *leerDatos(int *);
int ordenar(const void *, const void *);
void imprimir(estudiante *, int);

int main() {
    int pLibre = 0;
    estudiante *estudiantes = leerDatos(&pLibre);
    qsort(estudiantes, pLibre, sizeof(estudiante), ordenar);
    imprimir(estudiantes, pLibre);
    free(estudiantes);
    return EXIT_SUCCESS;
}

estudiante *gestionarMemoria(estudiante *original, int pLibre) {
    estudiante *est = NULL;
    if (original == NULL || pLibre == 0)
        est = (estudiante *) malloc(sizeof(estudiante));
    else
        est = (estudiante *) realloc(original, sizeof(estudiante) * (pLibre + 1));
    if (est == NULL) exit(EXIT_FAILURE);
    return est;
}

estudiante *leerDatos(int *pLibre) {
    estudiante *estudiantes = NULL;
    int rutLeido;
    double notaLeida;
    scanf("%d", &rutLeido);
    while (rutLeido != -1) {
        scanf("%lf", &notaLeida);
        estudiantes = gestionarMemoria(estudiantes, *pLibre);
        estudiantes[*pLibre].rut = rutLeido;
        estudiantes[*pLibre].nota = notaLeida;
        estudiantes[*pLibre].aprobado = notaLeida >= 4.0;
        (*pLibre)++;
        scanf("%d", &rutLeido);
    }
    return estudiantes;
}

int ordenar(const void *a, const void *b) {
    estudiante *ptrA, *ptrB;
    ptrA = (estudiante *) a;
    ptrB = (estudiante *) b;
    if (ptrA->nota != ptrB->nota)
        return (int) (ptrB->nota - ptrA->nota);
    else
        return ptrA->rut - ptrB->rut;
}

void imprimir(estudiante *estudiantes, int cant) {
    printf("Estudiantes leídos:\n");
    printf("   RUT    | Nota | Situación\n");
    printf("-----------------------------\n");
    for (int i = 0; i < cant; i++)
        printf(" %8d | %.1lf  | %s\n", estudiantes[i].rut, estudiantes[i].nota,
               estudiantes[i].aprobado ? "Aprobado" : "Reprobado");
}
