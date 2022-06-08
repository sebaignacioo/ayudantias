#include <stdio.h>

#define FACTOR_IMPAR 3
#define FACTOR_PAR 1

int main() {
    unsigned long long codigo;
    unsigned int digControlOr, digControlCalc, qEAN8Corr = 0, qEAN8Incorr = 0,
            qEAN13Corr = 0, qEAN13Incorr = 0, dig, suma;

    scanf("%llu", &codigo);
    while (codigo != 0) {
        // Extrae digito de control
        digControlOr = codigo % 10;
        codigo /= 10;

        suma = 0;
        dig = 1;
        while (codigo > 0) {
            if ((dig % 2) == 0)
                suma += (codigo % 10) * FACTOR_PAR;
            else
                suma += (codigo % 10) * FACTOR_IMPAR;
            dig++;
            codigo /= 10;
        }

        if ((suma % 10) != 0)
            digControlCalc = 10 - (suma % 10);
        else
            digControlCalc = 0;

        if (dig > 8) {
            printf("EAN-13 ");
            if (digControlCalc == digControlOr) {
                printf("SI\n");
                qEAN13Corr++;
            } else {
                printf("NO\n");
                qEAN13Incorr++;
            }
        } else {
            printf("EAN-8 ");
            if (digControlCalc == digControlOr) {
                printf("SI\n");
                qEAN8Corr++;
            } else {
                printf("NO\n");
                qEAN8Incorr++;
            }
        }
        scanf("%llu", &codigo);
    }

    printf("Total codigos EAN-8 procesados correctos = %u\n", qEAN8Corr);
    printf("Total codigos EAN-8 procesados incorrectos = %u\n", qEAN8Incorr);
    printf("Total codigos EAN-13 procesados correctos = %u\n", qEAN13Corr);
    printf("Total codigos EAN-13 procesados incorrectos = %u\n", qEAN13Incorr);

    return 0;
}