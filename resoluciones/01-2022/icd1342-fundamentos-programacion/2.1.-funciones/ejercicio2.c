#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define BASE 50
#define TRANSF_UNID 1.0/1000.0

int mayorDigito(int);
int primerDigito(int);
void recibirDatosPersona(int *, int *, int *, double *, double *);
double dosisAAdministrar(int, int, double, int, int);
bool vacunaPersona(bool *);

int main() {
    int totalVacunas = 0;
    bool seguir = true;
    do {
        if (vacunaPersona(&seguir))
            totalVacunas++;
    } while (seguir);
    printf("Se administraron %d vacunas\n", totalVacunas);
    return 0;
}

int mayorDigito(int num) {
    int dig = 0;
    for (int i = 0; (i < 3) && (num != 0); i++) {
        if ((num % 10) > dig)
            dig = (num % 10);
        num /= 10;
    }
    return dig;
}

int primerDigito(int num) {
    int dig;
    do {
        dig = (num % 10);
        num /= 10;
    } while (num != 0);
    return dig;
}

void recibirDatosPersona(int *rut, int *edad, int *numDosis, double *temperatura, double *masa) {
    scanf("%d %d %d %lf %lf", rut, edad, numDosis, masa, temperatura);
}

double dosisAAdministrar(int numDosis, int edad, double masa, int mayorDigito, int primerDigito) {
    double dosis;
    switch (numDosis) {
        case 1:
            dosis = (sqrt(masa) * mayorDigito + BASE * primerDigito);
            break;
        case 2:
            dosis = (sqrt(masa) * mayorDigito + BASE);
            break;
        case 3:
            dosis = (sqrt(masa) * mayorDigito * sqrt(BASE));
            break;
        default:
            dosis = (sqrt(masa) * BASE);
    }
    if (edad < 18)
        dosis /= 2;
    else if (edad > 51)
        dosis *= 2;
    return dosis;
}

bool vacunaPersona(bool *seguir) {
    int rut, edad, numDosis;
    double temperatura, masa, dosis;
    recibirDatosPersona(&rut, &edad, &numDosis, &temperatura, &masa);
    if (rut != 0) {
        if (temperatura < 37.5) {
            dosis = dosisAAdministrar(numDosis, edad, masa, mayorDigito
                    (rut), primerDigito(edad));
            printf("A la persona de rut: %d se le deben administrar %.2lf ml\n", rut, (dosis * TRANSF_UNID));
            return true;
        } else
            printf("La persona de rut %d. Tiene fiebre y no puede vacunarse\n", rut);
    } else
        (*seguir) = false;
    return false;
}
