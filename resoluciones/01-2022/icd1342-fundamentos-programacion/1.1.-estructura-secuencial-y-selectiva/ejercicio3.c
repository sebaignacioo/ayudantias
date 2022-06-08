#include <stdio.h>
#include <math.h>

int main() {
    double x, y, xMeta, yMeta, distancia;
    int elogios;
    scanf("%lf %lf %lf %lf", &x, &y, &xMeta, &yMeta);

    distancia = trunc(sqrt(pow(xMeta - x, 2) + pow(yMeta - y, 2)));

    if (x > xMeta || y > yMeta) {
        printf("Eres un hacker, no puedes pasar mas alla de la meta.\n");
        return 1;
    }

    if (distancia > 50) {
        elogios = 100;
    } else if (distancia > 40) {
        elogios = 200;
    } else if (distancia > 30) {
        elogios = 300;
    } else if (distancia > 10) {
        elogios = 400;
    } else {
        elogios = 500;
    }

    if (distancia == 0){
        printf("Ganaste! Tu premio es la corona dorada y 500 elogios");
    } else {
        printf("No has llegado a la meta, te faltaron %.0lf metro(s), tu premio es %d elogios\n", distancia, elogios);
    }

    return 0;
}