#include <stdio.h>

#define M3_L 1000

int main() {
    double densidad, masa, volumen_m3, volumen_l;
    scanf("%lf %lf", &densidad, &volumen_l);
    volumen_m3 = volumen_l / M3_L;

    masa = densidad * volumen_m3;
    printf("La masa en Kgs de %.2lf litros de la sustancia con densidad %.2lf [kg/m^3] es %.2lf", volumen_l, densidad, masa);
}