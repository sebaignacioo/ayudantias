#include <stdio.h>
#include <stdlib.h>

#define POS_NULA -1

int *gestionarMemoria(int);
int *generarPoblacion(int);
void imprimirPoblacion(int *, int);
void procesoEliminacion(int *, int, int);
void mensajeFinal(int *, int, int);
void procesarCaso(int);

int main() {
    int casosPrueba;
    scanf("%d", &casosPrueba);
    for (int i = 1; i <= casosPrueba; i++) {
        procesarCaso(i);
    }
    return EXIT_SUCCESS;
}

int *gestionarMemoria(int cant) {
    int *vector = (int *) malloc(cant * sizeof(int));
    if (vector == NULL) exit(EXIT_FAILURE);
    return vector;
}

int *generarPoblacion(int n) {
    int *vector = gestionarMemoria(n);
    for (int i = 1; i <= n; i++)
        vector[i - 1] = i;
    return vector;
}

void imprimirPoblacion(int *pob, int cant) {
    for (int i = 0; i < cant; i++)
        if (pob[i] != POS_NULA)
            printf("%d ", pob[i]);
    printf("\n");
}

void procesoEliminacion(int *vector, int pobInicial, int salto) {
    int mitad = pobInicial / 2, pob = pobInicial, i = 0, aux;
    printf("SIMULACIÓN DEL PROCESO ELIMINACIÓN\n");
    while (pob > mitad) {
        aux = 0;
        while (aux < salto) {
            if (vector[i] != POS_NULA)
                aux++;
            i++;
            if (i >= pobInicial)
                i -= pobInicial;
        }
        while (vector[i] == POS_NULA) {
            i++;
            if (i >= pobInicial)
                i -= pobInicial;
        }
        vector[i] = POS_NULA;
        pob--;
        while (vector[i] == POS_NULA) {
            i++;
            if (i >= pobInicial)
                i -= pobInicial;
        }
        printf("Sobrevivientes = ");
        imprimirPoblacion(vector, pobInicial);
    }
}

void mensajeFinal(int *vector, int posIM, int posSP) {
    if ((vector[posIM - 1] == POS_NULA) && ((vector[posSP - 1] != POS_NULA)))
        printf("No quiero irme, Peter!\n");
    else if ((vector[posSP - 1] == POS_NULA) && ((vector[posIM - 1] != POS_NULA)))
        printf("No quiero irme, Sr. Stark!\n");
    else
        printf("No hay abrazo\n");
}

void procesarCaso(int n) {
    int tamPob, posIM, posSP, salto;
    int *vector;
    scanf("%d %d %d %d", &tamPob, &posIM, &posSP, &salto);
    vector = generarPoblacion(tamPob);
    printf("PROCESANDO CASO PRUEBA #%d\n\n", n);
    printf("Tamaño población = %d\n", tamPob);
    printf("Posición Iron Man = %d\n", posIM);
    printf("Posición Spiderman = %d\n", posSP);
    printf("Número de Personas que Thanos se Salta = %d\n", salto);
    printf("Población Inicial = ");
    imprimirPoblacion(vector, tamPob);
    procesoEliminacion(vector, tamPob, salto);
    mensajeFinal(vector, posIM, posSP);
    printf("\n------ FIN CASO PRUEBA %d ------\n\n", n);
}
