#include <stdio.h>

int main() {
    float to1, to2, to3, promTO, pres1, pres2, promPres, promRepPrueba, rep,
    prueba, np;
    scanf("%f %f %f", &to1, &to2, &to3);
    scanf("%f %f", &pres1, &pres2);
    scanf("%f", &rep);
    scanf("%f", &prueba);

    promTO = (to1 + to2 + to3) / 3;
    promPres = (pres1 + pres2) / 2;
    promRepPrueba = (rep + prueba) / 2;

    if (promRepPrueba >= 4.0)
        np = 0.4 * prueba + 0.4 * rep + 0.1 * promTO + 0.1 * promPres;
    else
        np = 0.4 * prueba + 0.4 * rep + 0.2 * promPres;

    printf("Nota presentacion = %.1f\n", np);

    if (np >= 5.0) {
        printf("Aprobado\n");
        if (np > 6.0)
            printf("Vuelo de observacion!\n");
    } else if (np >= 3.0)
        printf("Debe rendir examen\n");
    else
        printf("Reprobado\n");

    return 0;
}