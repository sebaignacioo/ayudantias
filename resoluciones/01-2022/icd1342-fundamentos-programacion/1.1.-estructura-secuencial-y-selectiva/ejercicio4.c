#include <stdio.h>
#include <math.h>

int main() {
    int peso, zonaDestino, valor;
    scanf("%d %d", &peso, &zonaDestino);
    valor = 700;

    if (peso > 500) {
        if (zonaDestino == 1) {
            valor += (2 * (peso - 500));
        } else if (zonaDestino == 2) {
            valor += (3 * (peso - 500));
        } else if (zonaDestino == 3) {
            valor += (5 * (peso - 500) + 50 * trunc((peso - 500) / 500));
        } else {
            valor += (6 * (peso - 500) + 60 * trunc((peso - 500) / 400));
        }
    }

    if (zonaDestino == 4)
        valor += 1000;

    printf("%d", valor);
    return 0;
}